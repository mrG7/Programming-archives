#!/usr/bin/env/python
#Sieve of Erastothenes to generate prime numbers
from math import sqrt
import array
import sys
x=0
y=0
z=1000000000
sieve = [1] * (y+1)
delta = 10000

#line = sys.stdin.readline();
#cc = line.split();
#x = long(cc[0]);z=long(cc[1]);

y=int(sqrt(z))
r=y
sieve = [1] * (y+1)

for i in range(2,y+1):
	if sieve[i]==1:
		j=2
		while (i)*j <= y:
			sieve[i*j]=0
			j=j+1
for i in range(x,y+1):
	if sieve[i]==1 and i!=1 : print i;
if n!=no-1 :print "" 

r=int(sqrt(z));
while r<z:
		
	newsieve = [1] * (delta+1)

	for i in range(1,y+1):
		if sieve[i]==1:
			j=2
			while (i)*j <= r + delta:
				sieve[i*j - r]=0
				j=j+1
	for i in range(r+1,r+delta+1):
		if sieve[i-r]==1 and i!=1 : print i;
	if n!=no-1 :print "" 
