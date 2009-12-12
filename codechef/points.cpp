#include<iostream>
#include<vector>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<map>
using namespace std;
double power(int,int);
bool myfunction(pair<int,int> x,pair<int,int> y)
{
	if(x.first>y.first)return (x.first<y.first);
	if(x.first==y.first)return (x.second>y.second);
	return (x<y);
}	
int main()
{
	int i=0,no=0;
	
	vector<int> temp(2,0);
	int testcase,n;
	vector< pair<int,int> > arr;
	double dist=0;
	
	scanf("%d",&testcase);
	for(n=0;n<testcase;n++)
	{
		arr.clear();dist=0;
		
		scanf("%d",&no);
		for(i=0;i<no;i++)
		{
			scanf("%d%d",&temp[0],&temp[1]);
			arr.push_back(make_pair(temp[0],temp[1]));
		}	
				
		
		sort(arr.begin(),arr.end(),myfunction);
		
		
		
		for(i=0;i<(int)arr.size();i++)
		{
			if(i!=0)
			{
				dist=dist+ (double)sqrt(power((arr[i].first-arr[i-1].first),(arr[i].second-arr[i-1].second)));
			}
		}
			
		printf("%.02lf\n",dist);
		
	

	}
}
double power(int i,int j)
{
	return (i*i + j*j);
}












