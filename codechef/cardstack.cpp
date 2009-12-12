#include<iostream>
#include<vector>

using namespace std;

int main()
{
	
	double chk;
	while(scanf("%lf",&chk)==1)
	{
	
	double sum=0;
	int i=2,count=0;
	
	
	while(sum<chk)
	{
		sum= sum + (double)(1)/i;
		i++;
		count++;
	}
	if(count!=0)
	printf("%d card(s)\n",count);
	}
}
