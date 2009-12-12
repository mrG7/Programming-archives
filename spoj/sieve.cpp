#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<map>
#include<stack>
#include<set>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#define FOR(X,Y,Z) for(X=Y;X<Z;X++)
using namespace std;

int main()
{
	int no;
	cin>>no;
	vector<int> arr(no+1,1);
	for(int i=2;i<no;i++)
	{
		if(arr[i]==1)
		{
			for(int j=i;j*i<=no;j++)
			{
				arr[j*i]=0;
			}
		}
	}
	for(int i=2;i<arr.size();i++)
	{
		if(arr[i]==1)
		cout<<i<<" ";
	}
	return 0;
}
