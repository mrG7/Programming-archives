#!/usr/bin/python
j=0
posn =0
def yy(x,letter1,letter2,vara):
	i=x+1;ct=0
	flag = 0
	while vara[i] != letter2:
		if vara[i]==letter1:
			ct = ct +1
			flag =1 
			if flag == 0:
				posn = i
		i=i+1
	if flag == 0 : 
		return -1
	return ct 

var=raw_input('')
m = len (var)
check = "welcome to code jam"

#print yy(0,'e','l')
void count(x,i)
{
	for(int i=x;var[i]!=check[i+1])
	{
		int ct++;
	}
	if(ct==temp)return -1;
sum =0	
j=0;
for i in range(0,m):
	
	if var[i]=="w":
		j =i
		posn =i
		product = 1
		for trav in range(0,len(check)):
			
			temp = yy(posn,check[j+1],check[j+2],var)
			print temp
			if temp == -1:
				break;
			product = product * temp
			
			j = j+1
		sum = sum + product	
print sum
		
	


