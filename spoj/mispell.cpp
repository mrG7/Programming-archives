#include<iostream>
#include<string.h>
#include<cstdio>
using namespace std;

int main()
{
	int inp,posn;
	char s[100];
	scanf("%d",&inp);
	for(int i=0;i<inp;i++)
	{
		scanf("%d",&posn);
		scanf("%s",s);
		printf("%d ",i+1);
		for(int j=0;j<strlen(s);j++)
		if(j+1!=posn)printf("%c",s[j]);
		printf("\n");
	}
	return 0;
}
