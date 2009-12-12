#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<map>
#include<string.h>
#define ull unsigned long long int;
using namespace std;

//map< unsigned long long int , unsigned long long int > mapped;
bool valid(char a,char b)
{
	if(a=='0')return false;
	int val=10*( (int)a - 48 ) + ( (int)b - 48 );
	if(val<=26 && val>0)
	return true;
	else return false;	
}
int main()
{
	while(1){
	
	
	char str[5001];
	unsigned long long int mapped[5001];
	scanf("%s",str);
	if(str[0]=='0')break;
	int len=strlen(str);
	if(len==1){printf("1\n");continue;}
	mapped[0]=1;
	if(valid(str[0],str[1])){if(str[1]=='0')mapped[1]=1;else mapped[1]=2;}
	else mapped[1]=1;
	int flag=1;
	for(int i=2;i<(int)len;i++)
	{
		if(valid(str[i-1],str[i]))
		{
			if(str[i]=='0')mapped[i]=mapped[i-2];
			else
			mapped[i]=mapped[i-1] + mapped[i-2];
		}
		else{
			if(str[i]=='0'){printf("0\n");flag=0;break;}
			mapped[i]=mapped[i-1];
		}
	}
	
	if(flag==0){continue;}
	printf("%lld\n",mapped[len-1]);
	}
	return 0;
}
