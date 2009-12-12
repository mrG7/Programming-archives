#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;


vector<int>::iterator partition(vector<int> &tosort,vector<int>::iterator it1,vector<int>::iterator it2)
{
	vector<int>::iterator i=it1,j=it2,posn1=it1,posn2=it2;
	int pivot=*it1,temp;
	
	while(i<j)
	{
	for(i=posn1;i!=it2;i++)
	{
		if(*i > *it1)break;
	}
	posn1=i;
	for(j=posn2;j!=it1;j--)
	{
		if(*it1>*j)break;
	}
	posn2=j;
	if(i>=j)break;
	temp=*posn1;
	*posn1=*posn2;
	*posn2=temp;
	}
	
	
	if(posn1>=posn2){temp=pivot;*it1=*posn2;*posn2=pivot;} 
	return posn2;
	
}
void quicksort(vector<int> &tosort,vector<int>::iterator it1,vector<int>::iterator it2)
{
	if(it1<it2)
	{
	vector<int>::iterator s = partition(tosort,it1,it2);
	quicksort(tosort,tosort.begin(),s-1);
	quicksort(tosort,s+1,it2);
	}
}	

void countingsort(vector<int> &arr,int max)
{
	
	vector<int> sorted(max+1,0);
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
		if(i==0 && flag==1)
		{
		printf("0");continue;
		}
		if(sorted[i]==0)continue;
		printf("%d\n",sorted[i]);
	}return;
	arr=sorted;
}



void insertionsort(vector<int> &tosort)
{
	vector<int>::iterator it,it2;
	int v;
	for(it=tosort.begin();it!=tosort.end();it++)
	{
		v=*it;
		it2=it -1;
		while(it2>=tosort.begin() && *it2 > v)
		{
			*(it2+1)=*it2;
			it2--;
		}
	*(it2+1)=v;
	}
	
}
	
int main()
{
	int inp=0,temp=0;
	vector<int> newa;
	vector<int>::iterator it;
	
	//scanf("%d",&inp);
	scanf("%d",&inp);
	int max=0;
	while(1)
	{
	if(scanf("%d",&temp)==1)
	{
	if(temp>max)max=temp;
	newa.push_back(temp);
	}
	else break;
	//insertionsort(newa);
	}
	
	countingsort(newa,max);
	//quicksort(newa,newa.begin(),newa.end()-1);
	//if(newa.size()<1000)
	//insertionsort(newa);
	//else
	//quicksort(newa,newa.begin(),newa.end()-1);
	return 0;
	/*
	for(it=newa.begin();it!=newa.end();it++)
	{printf("%d\n",*it);}
	*/
	return 0;
}










