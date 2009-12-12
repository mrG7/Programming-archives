from math import sqrt;
lim=1000000000;
inp=int(sqrt(lim))
x=[1]*inp
for i in range(2,inp+1):
	if(x[i-1]==1):
		j=2
		while (i*j-1)<inp:
			x[i*j-1]=0;
			j+=1
y=[]
for i in range(2,inp+1):
	if(x[i-1]==1):
		y.append(i)
testcase=input()
for ff in range(testcase):
	if(ff!=0):print ""
	d=raw_input().split();
	a=int(d[0]);b=int(d[1]);
	if(b<inp):
		for i in range(a,b+1):
			if(x[i-1]==1 and i!=1):print i;
	else:
		z=[1]*(b-a+1)
		sqb = sqrt(b);
		for prime in y:
			if prime>sqb: break;
			start = a/prime;end=b/prime;
			for j in range(start,end+1):
				c = prime*j
				if(c>=a and c<=b):z[prime*j-a]=0
		for i in range(len(z)):
			if(z[i]==1):print i+a; 
			
	
	
		
		

