#include<iostream>
#include<vector>
#include<cmath>
#include<map>
using namespace std;

int main()
{
	int a,b;
	scanf("%d",&b);
	for(int i=0;i<b;i++){
	scanf("%d",&a);
	if(a==1){printf("0\n");continue;}
	int sq=sqrt(a),sum=1;
	for(int i=2;i<=sq;i++)
	{
		if(a%i==0){sum=sum+i;if(a/i!=i)sum+=a/i;}
	}
	printf("%d\n",sum);}
	return 0;
}
