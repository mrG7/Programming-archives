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
vector<int> split(int to,int num)
{
	vector<int> temp;
	for(int i=0;i<num;i++)
	{
		temp.push_back((int)to%2);
		to/=2;
	}
	return temp;
}
		
void print(string str,vector<int> &temp)
{
	for(int i=temp.size()-1;i>=0;i--)
	{
		if(temp[i]==1)
		cout<<str[i];
	}cout<<endl;
}

void gensubset(string &str,int num)
{
	vector<int> temp;
	for(int i=0;i<num;i++)
	{
		temp.clear();
		temp = split(i,num);
		print(str,temp);
	}
}

int main()
{
	
	string str;
	cin>>str;
	int len=(int)str.length();
	int num=(int)pow(2,len);
	gensubset(str,num);
	return 0;
}
