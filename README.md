# Crazk-zet3

In this challenge, competitors are provided with a compiled binary which performs multiple different checks and outputs a success message if the player put in the correct key



## How to generate the keygenme
Modify the key variable in gen-keygenme.py to what ever you like
and then run the python script. It would return a series of function that can be used in C code. 



## How to Build
```
gcc keygenme.c o keygenme
```
  
Example Run:
```
ekolodenker@mitre:~/code$ ./keygenme
Give me a key: asdagajgajkgkjlsdgkjldsg
ekolodenker@mitre:~/code$ ./keygenme
Give me a key: LET ME IN
ekolodenker@mitre:~/code$ ./keygenme
Give me a key: helloworld123goodbyteworld
ekolodenker@mitre:~/code$ ./keygenme
Give me a key: helloworld123goodbyteworld45678
ekolodenker@mitre:~/code$ ./keygenme
Give me a key: helloworld123goodbyteworld456789
Grats! You made it!
```

## How to Solve


# Flag
flag: "MCA-A0826B45FE84A765"