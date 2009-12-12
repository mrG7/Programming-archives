#include<iostream>
#include<vector>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
	int no_notes,chk,temp,i,j,k,old=0,ct=0,testcase;
	vector<int> wallet;

	scanf("%d",&testcase);
	for(k=0;k<testcase;k++)
	{
	wallet.clear();
	scanf("%d%d",&no_notes,&chk);
	
	for(i=0;i<no_notes;i++)
	{
		scanf("%d",&temp);
		wallet.push_back(temp);
	}
	if(chk==0){printf("Yes\n");continue;}
	sort(wallet.begin(),wallet.end());
	//for(i=0;i<wallet.size();i++)
	//cout<<wallet[i]<<" ";cout<<endl;return 0;
	
	vector<int> sums(chk+1,0);
	ct=0;
	// If a sum for j exists add to sum
	for(i=0;i<(int)wallet.size();i++)
	{
		
		
		for(j=0;j<=ct;j++)
		{
			if(sums[j]==0 && wallet[i]<=chk)
			{
			sums[wallet[i]]=1;
			old=max(old,wallet[i]);
			}
			else if(sums[j]==1 && j+wallet[i]<=chk)
			{
			sums[j+wallet[i]]=1;
			old=max(old,j+wallet[i]);
			}
						
		}
		if(sums[chk]==1)break;
		ct=old;
	//for(int x=0;x<sums.size();x++)
	//cout<<sums[x]<<" ";cout<<"ct:"<<ct;cout<<endl;
	
	}
	if(sums[chk]==1)printf("Yes\n");else if(sums[chk]==0)printf("No\n");
	sums.clear();
	}
	
	
}
			

