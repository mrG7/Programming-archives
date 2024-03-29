#include<iostream>
#include<cstdlib>
using namespace std;
long long mulmod(long long a,long long b,long long c){
    long long x = 0,y=a%c;
    while(b > 0){
        if(b%2 == 1){
            x = (x+y)%c;
        }
        y = (y*2)%c;
        b /= 2;
    }
    return x%c;
}

int modulo(int a,int b,int c){
    long long x=1,y=a; // long long is taken to avoid overflow of intermediate results
    while(b > 0){
        if(b%2 == 1){
            x=mulmod(x,y,c);
        }
        y = mulmod(y,y,c); // squaring the base
        b /= 2;
    }
    return x%c;
}

bool Fermat(long long p,int iterations){
    if(p == 1){ // 1 isn't prime
        return false;
    }
    for(int i=0;i<iterations;i++){
        // choose a random integer between 1 and p-1 ( inclusive )
        long long a = rand()%(p-1)+1; 
        // modulo is the function we developed above for modular exponentiation.
        if(modulo(a,p-1,p) != 1){ 
            return false; /* p is definitely composite */
        }
    }
    return true; /* p is probably prime */
}

int main()
{

	long long j,one,two;
	int no;
	scanf("%d",&no);
	for(int i=0;i<no;i++)
	{
	scanf("%lld%lld",&one,&two);
		for(j=one;j<=two;j++)
		{
		if(Fermat(j,2))
		printf("%lld\n",j);
		}
	if(i!=no-1)printf("\n");
	}

}
