#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	while(1){
	int inp,temp,flag;
	scanf("%d",&inp);
	if(inp==0)break;
	vector<int> arr;arr.push_back(-1);
	for(int i=0;i<inp;i++)
	{	
		scanf("%d",&temp);
		arr.push_back(temp);
	}
	flag=1;
	for(int i=1;i<=inp;i++)
	{
		if(arr[arr[i]]!=i){flag=0;break;}
	}
	if(flag==0)printf("not ambiguous\n");
	else printf("ambiguous\n");
	}
	return 0;
}

	
