#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<map>
#include<stack>
#include<set>
#include<cstdlib>
#include<cmath>

#define FOR(X,Y,Z) for(X=Y;X<Z;X++)
using namespace std;
vector< set<string> > perm;
set< string > aaa;
int len=0;
void permute(string &str,int count)
{
	aaa.clear();
	string before,after;
	for(int i=0;i<len;i++)
	{
		for(set<string>::iterator it=perm[count-1].begin();it!=perm[count-1].end();it++)
		{
			before="";
			before =before  + str[i] + *(it);
			after = *(it) + str[i];
			aaa.insert(after);aaa.insert(before);
		}
	}
	perm.push_back(aaa);
	set<string>::iterator it;
	for(it= aaa.begin();it!=aaa.end();it++)
	{
		cout<<*(it)<<endl;
	}
	return;
	if(count==str.length())return;
	permute(str,count+1);
	return;
}	   
			
			

int main()
{
	string str;
	cin>>str;
	set< string > temp;
	len=str.length();
	string ss="";
	for(int i=0;i<len;i++)
	{
		ss="";
		ss=ss + str[i];		
		temp.insert(ss);
	}
	set<string>::iterator itt;
	
	perm.push_back(temp);
	
	permute(str,1);	
	return 0;
}
