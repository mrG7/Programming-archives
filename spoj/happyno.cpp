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

int base2dec(int no,int base)
{
	int i=0,sum=0;
	while(no!=0)
	{
		sum += (no%10)*(int)pow(base,i);
		no=no/10;
		i++;
	}
	return sum;	
}
int mul(int no1,int no2,int base)
{
	int x=base2dec(no1,base)*base2dec(no2,base);
	return x;
}
	
bool chk(int no,int base,int comp)
{
	
	
	int digit=0;
	int sum=0;
	//cout<<no<<endl;comp++;
	mapped[no]=1;
	while(no!=0)
	{
		
		digit = no%10;
		//cout<<digit<<" * "<<digit<<" = "<<mul(digit,digit,base)<<" + ";
		sum += mul(digit,digit,base);
		no=no/10;
	}
	sum=dec2base(sum,base);
	if(mapped[sum])return false;
	if(sum==1)return true;	
	return chk(sum,base,comp);
}
int main()
{

	int base=4;
	int no=82;
	cout<<chk(dec2base(91,7),7,0);	
	//cout<<find(4,4);
	//cout<<chk(no,base);
	
}
