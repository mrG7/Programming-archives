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
map< int,int> mapped;
int dec2base(int decimal,int base)
{
	vector<int> test;int sum=0;
	while(decimal!=0)
	{
		test.push_back(decimal%base);
		decimal=decimal/base;
	}		
	for(int j=0;j<(int)test.size();j++)
	{
		sum+=test[j]*(int)pow(10,j);
	}
	return sum;
}

int base2dec(string no,int base)
{
	int i=0,sum=0,val=0;
	for(int i=0;i<no.size();i++)
	{
		if(no[i]>='A')
		val=(int)no[i] - 55;
		else 
		val=(int)no[i] - 48;
		sum += ( val)*(int)pow(base,i);
		cout<<val<<" : "<<no[i]<<" : "<<sum<<endl;
	}
	return sum;	
}
int main()
{
	string s1;int from,to;
	cin>>s1>>from>>to;
	cout<<base2dec(s1,from);
	return 0;
}
