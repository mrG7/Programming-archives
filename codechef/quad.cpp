#include<iostream>
#include<cstdio>
#include<vector>
#include<cmath>
using namespace std;

int main()
{
	int a=0,b=0,c=0,p=0,i=0,l=0,n=0,count=0,inp=0;
	vector<int> width;
	
	scanf("%d",&inp);
	for(n=0;n<inp;n++)
	{
	width.clear();count=0;
	scanf("%d%d%d%d",&a,&b,&c,&p);
	
	float xx= p*p - 4*a*c;
	if(xx<0 || (xx%1>0 && xx%1<1)){printf("0\n");continue}
	else xx = sqrt(xx);
	
	if(a!=0)
	{
	int r1 =( (-p) + xx )/2*a;
	int r2 =( (-p) - xx)/2*a;
	}
	
	if((r1>=0 && r2<0 )|| )
	{printf("1 %d\n",r1);}
	else if((r1<0 && r2>=0))
	printf("1 %d\n",r2);
	else if(r1>=0 && r2>=0)
	printf("2 %d %d\n",r1,r2);
	
	
	}
			
	return 0;
}
