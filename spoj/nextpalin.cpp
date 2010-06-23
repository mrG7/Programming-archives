#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<map>
#include<stack>
#include<set>
#include<cstdlib>
#include<cmath>
#include<string.h>
#include<algorithm>
#define FOR(X,Y,Z) for(X=Y;X<Z;X++)
using namespace std;
char* test;
int flag=0;
char* increment(char str[],int len)
{
	int i=(len-1),val;
	
	
	if(str[i]=='9')
	{
		
		while(str[i]=='9'){
		str[i]='0';
		i--;
		}
	}
	val = (int)str[i] - 48;

	if(i>=0)str[i]=(char)(val + 49 );
	else { 
	flag=1;
	char newstr[10001];
	newstr[0]='1';
	for(int i=1;i<=len;i++)
	{
		newstr[i]=str[i-1];
		
	}
		test=newstr;
		return test;
	}
	
	return str;
}	
		
string genpalin(string sss)
{
	string temp=sss;
	reverse(sss.begin(),sss.end());
	return sss;
	
}
int main()
{
	int no=0;
	scanf("%d",&no);
	//string str;
	char s[1000002];
	string status="";
	for(int i=0;i<no;i++){
		
		scanf("%s",s);	
		flag=0;
		int len = strlen(s);
		string orig(s,s+len);
		if(len==1 && s[0]=='9'){printf("11\n");continue;}
		if(len%2==1){status="odd";}else status="even";
		
		
		string sssE,sssO;
		if(status=="even")
		{
			string sssE(s,s+ (len)/2);
			string palin = sssE + genpalin(sssE);
			if(palin<=orig){
			char *p;
			p = increment(s,len/2);
				if(strlen(p)%2==1)
				{
					string sss2(p,p+ (strlen(p))-1);
					
					string sss3=genpalin(sss2);
					sss2 = sss2 + p[strlen(p)-1] + sss3;
			
					cout<<sss2<<"\n";continue;
				}
				else {
					string sss2(p,p+ (strlen(p))/2);
					string sssF="";
					sssF=sss2 + genpalin(sss2);
					cout<<sssF<<"\n";continue;
				}
			}else {
			cout<<palin<<"\n";continue;}
			
		}
		else 
		{
			string sssE(s,s+ (len)/2);
			
			string palin = sssE + s[len/2] +  genpalin(sssE);
			if(palin<=orig){
			char *p;
			
			
			p = increment(s,len/2+1);
			
			if(flag==0)
			{
			string blah(p,p+len/2+1);cout<<":"<<blah;}
			else
			cout<<p;
			return 0;
			string blah;
			
				if((int)(blah.size())%2==1)
				{
					string sss2="";
					blah.resize(2);cout<<blah;return 0;
					string sssF="";
					sssF=sss2 + blah[blah.size()-1] + genpalin(sss2);
					cout<<sssF<<"\n";continue;
				}
				else {
					string sss2(p,p+ (strlen(p))/2);
					
					string sssF="";
					sssF=sss2 + blah[blah.size()-1] + genpalin(sss2);
					cout<<sssF<<"\n";continue;
				}
			}else {
			cout<<palin<<"\n";continue;}
			
		}
		
		cout<<sssE<<"  :  "<<sssO;
		
	}
		
	return 0;	
}
