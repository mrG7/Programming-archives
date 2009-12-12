#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
#include<string>
#define FOR(X,Y,Z) for(X=Y;X<Z;X++)
using namespace std;
struct train
{
	pair<int,int> arrival;
	pair<int,int> dest;
};
int i=0;
pair<int,int> parse(string timee)
{
	int hours = ((int)timee[0]-48)*10 + ((int)timee[1]-48);
	int minutes = ((int)timee[3]-48)*10 + ((int)timee[4]-48);
	return make_pair(hours,minutes);
}
int main()
{
	
	int no,turn,numa,numb;
	struct train  trains[1000];
	scanf("%d",&no);
	vector< struct train > arr;
	pair< int,int > pra,prb;
	struct train *ptrs[1000];
	
	int i;
	cin>>turn;
	cin>>numa;
	cin>>numb;
	string tima,timb;
	FOR(i,0,turn)
	{	
		cin>>tima>>timb;
		pra =parse(tima);
		prb =parse(timb);
		
		
		trains[i].arrival=pra;
		trains[i].dest=prb;
		
	}
	FOR(i,0,turn)
	{
		cout<<trains[i].arrival.first<<":"<<trains[i].arrival.second<<"  "<<trains[i].dest.first<<":"<<trains[i].dest.second<<endl;
	}
	return 0;

}
