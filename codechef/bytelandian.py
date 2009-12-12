a=[0]
print a[100]	
def count(no):
	if no==0: return 0
	if a[no]==0:
		a[no]=max(no,count(no/2)+count(no/3)+count(no/4))
	return a[no]

while(1):
	n=int(raw_input(''))
	print count(n) 
