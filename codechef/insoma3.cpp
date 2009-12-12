#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
using namespace std;

int main()
{
	int no=0,temp=0,i;
	cin>>no;
	
	
	int dist=0;
	set<int> seta;
	set<int>::iterator it;
	vector<int> arr;
	pair<set<int>::iterator,bool> ret;

	while(scanf("%d",&temp)==1)
	{
	
		arr.push_back(temp);
	
		
	}
	//1 4 5 8 3 2 11 6 23
	for(i=(int)arr.size()-1;i>=0;i--)
	{
		
		ret=seta.insert(arr[i]);
		it=ret.first;
		dist =dist + (int)(it - seta.begin());
	}
	printf("%d\n",dist);
}
