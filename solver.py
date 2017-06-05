#!/usr/bin/env python
"""
Solve crack-zet3 challenge for MITRE STEM CTF 2017
Author: Eugene Kolodenker <eugene@eugenekolo.com>
"""
from z3 import *
import sys

vals = []
sol = Solver()
for i in range(20):
    vals.append(Int(str(i)))
    sol.add(Or(And(vals[i] >= 45, vals[i] <= 57), And(vals[i] >= 65, vals[i] <= 90)))

sol.add(vals[19]*vals[7]-vals[3]==2605)
sol.add(vals[12]+vals[19]-vals[13]+vals[15]*vals[17]==2914)
sol.add(vals[18]*vals[8]-vals[14]+vals[11]+vals[9]==2979)
sol.add(vals[6]-vals[3]*vals[4]==-2869)
sol.add(vals[17]*vals[16]-vals[9]+vals[8]==3563)
sol.add(vals[3]*vals[2]*vals[4]==190125)
sol.add(vals[5]*vals[9]+vals[18]==3222)
sol.add(vals[8]+vals[2]+vals[8]-vals[16]+vals[7]==158)
sol.add(vals[8]+vals[10]-vals[19]==53)
sol.add(vals[19]+vals[16]*vals[19]==3498)
sol.add(vals[0]+vals[11]*vals[6]-vals[11]==2992)
sol.add(vals[0]-vals[12]-vals[13]-vals[13]==-131)
sol.add(vals[3]*vals[13]+vals[5]==3153)
sol.add(vals[1]*vals[10]-vals[8]*vals[6]+vals[5]==508)
sol.add(vals[16]+vals[5]*vals[7]+vals[16]*vals[5]==5585)
sol.add(vals[19]-vals[10]*vals[7]+vals[17]==-2492)
sol.add(vals[16]-vals[7]*vals[15]-vals[10]==-2587)
sol.add(vals[17]*vals[5]*vals[4]*vals[18]-vals[0]==9266323)
sol.add(vals[2]-vals[4]*vals[1]==-4290)
sol.add(vals[2]*vals[0]*vals[6]-vals[6]*vals[6]==277144)

print(sol.check())
m = sol.model()

sys.stdout.write("Key = ")
for d in reversed(m.decls()):
    sys.stdout.write(chr(int(str(m[d]))))
sys.stdout.write('\n')
sys.stdout.flush()
