#include<iostream>
#include<cstdio>
using namespace std;
long int list[]={5,25,125,625,3125,15625,78125,390625,1953125,9765625,48828125,244140625,1220703125};
void trail(long int no)
{
	int i=0,count=0;	
	while(1)
	{
				
		if(list[i]>no)break;
		
		if(list[i]!=0);
		count+=no/list[i];	

		i++;	
	}
	cout<<count<<endl;
}

int main()
{
	long int no,i;
	int input=0,j=0;
	
	scanf("%d",&input);
	for(j=0;j<input;j++)
	{	
	scanf("%ld",&no);
	trail(no);
	}
}
