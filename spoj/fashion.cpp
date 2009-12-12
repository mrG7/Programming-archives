#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;
bool myfunction(int a,int b)
{
	if(a>b)return true;
	else return false;
}
vector<int> countingsort(vector<int> &arr,int max)
{
	vector<int> sorted(max+1,-1),final;
	vector<int> count(max+1,0);
	int i,flag=0;
	for(i=0;i<(int)arr.size();i++)
	{
		if(arr[i]==0 && flag==0)flag=1;
		count[arr[i]]++;
	}
	for(i=1;i<=max;i++)
	count[i]=count[i]+count[i-1];
	
	for(i=arr.size()-1;i>=0;i--)
	{
		sorted[count[arr[i]]]=arr[i];	
		count[arr[i]]--;
	}
	for(i=0;i<=max;i++)
	{	
		if(sorted[i]==-1)continue;
		final.push_back(sorted[i]);
	}
	return final;
}
vector<int> countsort_input(vector<int> &newa)
{	
	int maxa=*(max_element(newa.begin(),newa.end()));
	return countingsort(newa,maxa);
	
}
int main()
{
	int no,temp,inp;
	scanf("%d",&inp);
	for(int j=0;j<inp;j++)
	{
	scanf("%d",&no);
	vector<int> arr1,arr2;
	for(int i=0;i<no;i++)
	{
		scanf("%d",&temp);arr1.push_back(temp);
	}
	for(int i=0;i<no;i++)
	{
		scanf("%d",&temp);arr2.push_back(temp);
	}
	arr1 = countsort_input(arr1);
	arr2 = countsort_input(arr2);
	long long int sum=0;
	for(int i=no-1;i>=0;i--)
	{
		sum += arr1[i]*arr2[i];
	}
	printf("%lld\n",sum);
	}
}
