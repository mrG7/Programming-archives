#include<iostream>
#include<cstdio>
#include<map>
#include<string>
#include<vector>

using namespace std;
vector<int> primes;
vector<int> sieve(int no){
	vector<int> arr(no+1,1);
	for(unsigned long long i=2;i<no;i++)
	{
		if(arr[i]==1)
		{
			for(unsigned long long j=i;j*i<=no;j++)
			{
				arr[j*i]=0;
			}
		}
	}
	return arr;
}
int square(int x){return x * x ;}
int power(int a,int p,int m)
{
	if (p == 0)
  	return 1;
	else if (p%2 == 0)
 	 return square(power(a,p/2,m)) % m; // square(x) = x * x
	else
  	return ((a % m) * power(a,p-1,m)) % m;
}

bool modd(int i,int n)
{

	if(power(i,n,n)==i)
	return true ;
	else return false;	
}
int main()
{
	int n;
	//scanf("%d",&n);
	primes=sieve(65000);
	
	for(n=2;n<=65000;n++)
	{
	int flag=1;
	for(int i=0;i<n;i++)
	{	
		if(!modd(i,n))
		{
			flag=0;break;
		}	
	}	
	if(flag==1)
	{
		if(primes[n]!=1)printf("%d\n",n);
	}
	}
	return 0;
}
