#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

void calc(int);
int val(int);
int main()
{
	int input=0;

	cin>>input;
//	val(12345678);
	calc(input);

}

void calc(int input)
{
	int flag=0,i=0;
	int prod=1,final=1;
	while(flag!=1)
	{	
		for(i=1;i<input;i++)
		{
			if(input%i==0)
			{
//		cout<<"factor:"<<i<<endl;
			prod=final*i;			
			if(prod>9999)
			prod=val(prod);
			final=prod;
			}
		}
		//int j=(int)final;
		cout<<final;
		flag=1;
	}
//	return 0;
}

int val(int prod)
{
	int temp=0,newval=0,count=0;
	while(count<=3)
	{
		temp=prod/10;
		count++;
		newval=newval+ (prod - temp*10)*(int)pow(10.0,count-1);
		prod=temp;
	}
//	cout<<newval;
	return newval;
}
