#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	vector<int> xx(28,1);
	xx[0]=0;xx[27]=0;
	for(int i=1;i<27;i++)xx[i]=i;
