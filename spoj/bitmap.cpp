#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
#include<utility>
#include<cstdlib>
#include<string.h>
using namespace std;

int main()
{
	
	unsigned long long a;
	scanf("%llu",&a);
	cout<<a;
	return 0;
	int inp;scanf("%d",&inp);
	for(int k=0;k<inp;k++){
	int i,j,x,y,temp;
	vector<int> tempvec,setofones;
	map< pair<int,int>,int> s;
	vector< vector<int> > arr;
	char str[192];
	scanf("%d %d",&i,&j);
	for(x=0;x<i;x++)
	{
		tempvec.clear();
		scanf("%s",str);
		for(y=0;y<(int)strlen(str);y++)
		{
			if(str[y]=='0')temp=0;
			else temp=1;
			tempvec.push_back(temp);
			if(temp==1)
			s.insert(make_pair( make_pair(x,y) , 1 ) );
			
			
		}
		arr.push_back(tempvec);
	}
	map< pair<int,int>,int>::iterator it;

	for(x=0;x<i;x++)
	{
		for(y=0;y<j;y++)
		{
			if(arr[x][y]==0){
			int minim=1000;
			for(it=s.begin();it!=s.end();it++)
			{
			if(x==(it->first).first && y == (it->first).second)continue;
			int dist =0;dist= abs(x - (it->first).first) + abs(y - (it->first).second);
			minim=min(dist,minim);
			}
			arr[x][y]=minim;
			}
			else arr[x][y]=0;		
		}
	}	
	for(x=0;x<i;x++)
	{
		for(y=0;y<j;y++)
		{ printf("%d",arr[x][y]);if(y!=j-1)printf(" ");}
	printf("\n");
	}
	//printf("\n");
	}
	return 0;
}
