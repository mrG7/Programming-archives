#include<iostream>
#include<vector>
#include<cmath>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main()
{
	
	while(1){
	long long int sum=0;
	int no,temp,avg=0,candy=0,flag=0,diff=0;
	scanf("%d",&no);if(no==-1)break;
	vector<int> a;
	for(int i=0;i<no;i++)
	{
		scanf("%d",&temp);
		a.push_back(temp);
		sum+=temp;
	}
	avg=sum/no;
	if(ceil((float)sum/no)!=abs((float)sum/no)){printf("-1\n");continue;}
	for(int i=0;i<no;i++)
	{
		diff = avg-a[i];
		if(diff>0)candy+=diff;
	}
	printf("%d\n",candy);
	}
	return 0;
}
		
