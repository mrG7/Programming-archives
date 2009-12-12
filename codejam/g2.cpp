#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
vector< vector<int> > chk;
vector< vector<int> > arr;
int maxlen=-1,m=0,n=0;
int traverse(vector< vector<int> > &arr,int curI,int curJ)
{
	//cout<<curI<<curJ<<" "<<chk[curI][curJ]<<" "<<endl;
	int left=1,right=1;
	if(chk[curI][curJ]>-1){return chk[curI][curJ]; }
	for(int j=curJ+1;j<n;j++)
	{ 	
		//cout<<j<<n<<endl;
		if(arr[curI][j]>=arr[curI][curJ]){
		right=max(right,1 + traverse(arr,curI,j));
	
		}
	}
	
	for(int i=curI+1;i<m;i++)
	{ if(arr[i][curJ]<=arr[curI][curJ]){
		left=max(left,1 + traverse(arr,i,curJ));
		}
	}
	chk[curI][curJ] = max(left,right);
	//cout<<curI<<curJ<<" "<<chk[curI][curJ]<<" "<<endl;
	return chk[curI][curJ];
}
int main()
{
	int no;
	cin>>no;
	int temp=0;
	vector< int > tempvec;
	vector< int > tempvec2;
	for(int x=0;x<no;x++)
	{
	

	maxlen=1;arr.clear();chk.clear();temp=0;
	cin>>m>>n;
	
	
	for(int i=0;i<m;i++)
	{
		tempvec.clear();tempvec2.clear();
		for(int j=0;j<n;j++)
		{
			scanf("%d",&temp);
			tempvec.push_back(temp);
			tempvec2.push_back(-1);
		}
		arr.push_back(tempvec);
		chk.push_back(tempvec2);
	}
	
	for(int i=m-1;i>=0;i--)
	{
		for(int j=n-1;j>0;j--)
		{
			 maxlen = max(maxlen,traverse(arr,i,j));
		}
	}
	/*
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<chk[i][j]<<" ";
		}cout<<endl;
	}*/
	cout<<maxlen<<endl;
	}
}
