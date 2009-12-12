#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	short int with=0;
	float amt=0;
	cin>>with>>amt;

	
	if(with+0.5>amt){printf("%.2f\n",amt);return 0;}
		
	if(with%5==0)
	{
		printf("%.2f\n",amt-(float)with - 0.50);
	}
	else{
		printf("%.2f\n",amt);
	    }
	    return 0;
}
