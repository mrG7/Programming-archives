import math;
def r(x,i,j,c,q):
 if c==q:return int(x[i][j])
 if y[i][j]>0:return y[i][j]
 y[i][j]=int(x[i][j])+max(r(x,i+1,j,c+1,q),r(x,i+1,j+1,c+1,q));return y[i][j];
d=input()
for b in range(d):
 v=input();x=[];y=[]
 for i in range(v): 
  x.append(raw_input().split());y.append([]);
  for b in range(i+1):y[i].append(0);
 print r(x,0,0,1,v)
