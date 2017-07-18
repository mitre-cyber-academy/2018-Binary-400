#!/usr/bin/env python
"""
Generate a keygen challenge requiring an SMT solver to solve.
Author: Eugene Kolodenker <eugene@eugenekolo.com>
"""
from random import randint
import re

key = "MCA{M9OBIf2JS3CCzyZ}"

CHECK_FUNC = """void check_{idx}(char* key) {{
    if ({equation})  {{
        fail();
    }}
}}"""

EASY_OPERATORS = ['+', '-', '*']
OPERATORS = ['*', '+', '-', '^', '/']

def randvars(keysize, minamnt, maxamnt):
	amnt = randint(minamnt,maxamnt)
	vars = []
	for i in range(amnt):
		vars.append("key[" + str(randint(0,keysize-1)) + "]")
	return vars

def mathmatize(vars):
	"""For each variable, pick a random operator to go between it and the next, e.g.:
	key[12] + key[19] - key[4], then do the math, and create a string from that equation.
	"""
	# Form the left hand side of the equation
	equation = ""
	equation += vars[0]
	for var in vars[1:]:
		equation += EASY_OPERATORS[randint(0,2)] + var

	# Calculate the right hand side
	eval_equation = re.sub(r'(key\[\d*\])', r'ord(\1)', equation)
	ans = eval(eval_equation)
	equation += "!=" + str(ans)
	return equation

def template(idx, equation):
	code = CHECK_FUNC.format(idx=idx, equation=equation)
	return code

def main():
	for i in range(20):
		vars = randvars(20, 3, 5)
		equation = mathmatize(vars)
		code = template(str(i), equation)
		print(code)

if __name__ == '__main__':
	main()
