import sys;
x=0
while 1:
	try:
		x=int(sys.stdin.readline().strip())
		if x==1 :print 1;continue
		x=x*2 -2;
		print x;
	except:
		break;
