#include<iostream>
#include<vector>
#include<cmath>
#include<map>
using namespace std;
map< int,int > mapped;
int primes[] = 
{2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,227,229,233,239,241,251,257,263,269,271,277,281,283,293,307,311,313,317,331,337,347,349,353,359,367,373,379,383,389,397,401,409,419,421,431,433,439,443,449,457,461,463,467,479,487,491,499,503,509,521,523,541,547,557,563,569,571,577,587,593,599,601,607,613,617,619,631,641,643,647,653,659,661,673,677,683,691,701,709,719,727,733,739,743,751,757,761,769,773,787};
void sieve(int no)
{
	vector<int> temp(no,1);
	int j=0;
	for(int i=1;i<(int)temp.size();i++)
	{
		cout<<i<< " "<<temp[i]<<endl;
		if(temp[i]==1)
		{j=2;
		while((i+1)*j<=no)
		{
			temp[i*j -1 ]=0;
			//cout<<(i+1)*j<< " ";
			j++;
		}
		}
		
	}
	for(int i=1;i<(int)temp.size();i++)
	{
		if(temp[i]==1)cout<<i+1<<" ";
	}
	return;
}
void factor(int no,int i,int j)
{
	//cout<<primes[i]<<" :";cout<<no<<endl;
	int flag2=j;
	int sq=(int)sqrt(no);
	//cout<<i<<" "<<sq<<endl;
	while(no!=1)
	{
		if(primes[i]>sq){break;}
		
		if(no%primes[i]==0){
		while(no%primes[i]==0)
		{
			
			flag2=1;
			mapped[primes[i]]++;
			if(primes[i]>0)no=no/primes[i];
			cout<<no<<endl;
		}
		
		}
		
		if(flag2 ==1)
		{return;factor(no,i+1,0);}
		else i++;
		
		
	}
	if(flag2==0){
	mapped[no]++;
	return;
	}
}
int main()
{
	int i=0,no=0,inp=0;
	scanf("%d",&inp);
	inp=200000;
	
	for(int xx=1;xx<=inp;xx++){
	scanf("%d",&no);
	//no=xx;cout<<xx<<endl;
	if(no==1){
	printf("0\n");
	continue;}
	
	int orig=no;
//	int flag=0;
	
	i=0;
	mapped.clear();

	
	factor(no,0,0);
	map<int,int>::iterator it;
	unsigned long long int sum=1	;
	for(it=mapped.begin();it!=mapped.end();it++)
	{
		cout<<it->first<<" "<<it->second<<endl;
		if(it->first>1)
		sum = sum * (int)(( pow( (double)it->first , it->second + 1 ) - 1 )/ ( it->first - 1 ) )  ;
	}
	sum=sum-orig;
	printf("%lld\n",sum);
	}
	return 0;
}
