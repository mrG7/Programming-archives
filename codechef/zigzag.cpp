#include<iostream>
#include<vector>


int main()
{
	int arr[]={5,3,4,8,6,7}
	vector<int> inp(arr.begin(),arr.end())
	s[0]=0;
	s[1]=arr[0];
	for(i=0;i<inp.size();i++)
	{
		if(inp[i]<s[old])
		s[i]=s[old];
		else if(inp[i]>s[old])
		s[i]=s[old]+1;
	}	
