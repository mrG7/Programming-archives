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
	vector<string> a;
	mapped.clear();
	scanf("%d",&inp);
	char s[100];
	//if(i!=0)printf("\n");
	string accno;
	for(int j=0;j<inp;j++)
	{
		cin>>accno;
		a.push_back(accno);
		
	}
	sort(a.begin(),a.end());
	for(int j=0;j<inp;j++)
	{
		
		cout<<a[j];
		printf("\n");
	}	
	//if(i!=0)printf("\n");	
	}
	return 0;
}
