#include<iostream>
#include<cstdio>
#include<vector>
#include<map>

using namespace std;

map<unsigned long long int,unsigned long long int > stora; 
unsigned long long int max(unsigned long long int i,unsigned long long int j)
{
	if(i>j)return i;
	else return j;

}
unsigned long long int count(unsigned long long int no)
{
	
	if(no==0)return 0;
	
	if(stora[no]==0)
	{
	
	stora[no]=max(no,count(no/2)+ count(no/3)+ count(no/4));
	
	}
	return stora[no];
	
}

int main()
{
	unsigned long long int no;

	while(scanf("%llud",&no)==1)
	{
	unsigned long long int x=count(no);
	printf("%llu\n",x);
	}
	
}
