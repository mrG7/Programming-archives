#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<map>
#include<string.h>
#include<algorithm>
using namespace std;
map< string,int > mapped;
map< char*,int > mappedaa;
int main()
{
	int n;scanf("%d",&n);
	for(int i=0;i<n;i++){
	int inp;
	mapped.clear();
	scanf("%d",&inp);
	char s[100];
	if(i!=0)printf("\n");
	string accno;
	for(int j=0;j<inp+1;j++)
	{
		gets(s);
		//cout<<s<<endl;
		accno="";
		accno.append(s,s+strlen(s));
		if(j!=0)mapped[accno]++;
		
	}
	map< string , int >::iterator it;
	
	for(it=mapped.begin();it!=mapped.end();it++)
	{
		for(int x=0;x<(it->first).size();x++)
		printf("%c",(it->first)[x]);
		printf(" %d\n",it->second);
	}
	
	}
	return 0;
}
