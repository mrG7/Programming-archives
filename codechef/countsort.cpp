#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;


void countingsort(vector<int> &arr,int max)
{
	
	vector<int> sorted(max+1,-1);
	vector<int> count(max+1,0);
	int i,j,flag=0;
	
	
	for(i=0;i<arr.size();i++)
	{
		if(arr[i]==0 & flag==0)flag=1;
		count[arr[i]]++;
	}
	
	for(i=1;i<=max;i++)
	{
		count[i]=count[i]+count[i-1];
	}
	
	for(i=arr.size()-1;i>=0;i--)
	{
		sorted[count[arr[i]]]=arr[i];
		
		count[arr[i]]--;
	}
	for(i=0;i<=max;i++)
	{
		
		if(sorted[i]==-1)continue;
		printf("%d\n",sorted[i]);
	}
	arr=sorted;
}

int main()
{
	int inp=0,temp=0;
	vector<int> newa;
	vector<int>::iterator it;
	
	scanf("%d",&inp);
	int maxa=0;
	while(1)
	{
	if(scanf("%d",&temp)==1)
	{
	if(temp>maxa)maxa=temp;
	newa.push_back(temp);
	}
	else break;
	}
	maxa=max(maxa,(int)newa.size());	
	countingsort(newa,maxa);
	return 0;

}




