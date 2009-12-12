#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<vector>
#include<cstdio>
using namespace std;

int main()
{
	long int count=0,divisor=0,ct=0,x=0;
	char input[10];
	vector<long int> list;
	vector<long int>::iterator it;
	scanf("%ld%ld",&count,&divisor);

	while(1)
	{
	
	if(scanf("%ld",&x)==1)
	{if((x%divisor)==0 && x!=0 )ct++;}
	else break;
	
	}
	printf("%ld\n",ct);
	return 0;	
}
