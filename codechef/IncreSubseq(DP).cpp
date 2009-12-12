#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;
int main()
{
	vector<int> seq;
	int i,j,maxa=-3,temp=0;
	while(scanf("%d",&temp)==1)
	{
		seq.push_back(temp);
	}
	vector<int> longest(seq.size(),0);
	
	for(i=1;i<seq.size()+1;i++)
	{
		j=1;
		while(1)
		{
			if(seq[longest[j-1]]>seq[i -1] || j -1>=i-1)break;
			j++;
		}
		cout<<j;return 0;
		
		if((j - 1 )== maxa || seq[longest[j-1]] > seq[i])
		{
			longest[j]=i;
			maxa= max(maxa,j);
		}
		
	}	
	cout<<maxa;
	return 0;
}
