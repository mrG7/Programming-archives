#include<vector>
#include<iostream>
#include<cstdio>

using namespace std;

int main()
{

	long long int inp;
	scanf("%lld",&inp);
	for(long long int i=0;i<inp;i++){
	long long int no;
	scanf("%lld",&no);
	long long int i=1,sum=0,prev=0;
	while(sum<no)
	{
		prev = sum;
		sum= sum +i;
		i++;
	}
	long long int diff = no -prev;
	if(i%2==1)
	printf("TERM %lld IS %lld/%lld\n",no,diff,i - diff);
	else
	printf("TERM %lld IS %lld/%lld\n",no,i-diff,diff);
	}
	return 0;
}
