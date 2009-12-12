#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;
map< char,int> mapa;
int main()
{
	string xx;
	int no=48;
	map< char,int>::iterator it;
	
	for(int i=97;i<123;i++)
	mapa[(char)i]= i -97 +1;
	
	cin>>no;
	vector< vector<int> > arr(no);
	
	for(int j=0;i<no;j++)
	{
		cin>>temp;
		
		arr[mapa[temp[0]]].push_back(temp);
	}
		
	return 0;
}
	/*
	for(i=0;i<no;i++)
	{
		cin>>temp;
		arr.push_back(temp);
		mapa[temp[0]]=i;
		
	}
	for(int i=0;i<arr.size();i++)
	{
		for(int j=0;j<;j++)
		{
	*/		
