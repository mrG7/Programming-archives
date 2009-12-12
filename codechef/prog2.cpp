#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int nmap=0,ntrap=0;
	cin>>nmap>>ntrap;
	int temp=0;
	
	vector< vector<int> > kitchen(nmap,vector<int>(nmap,0));
	vector< vector<int> >::iterator it1;
	vector<int>::iterator it2,it3;

	for(it1=kitchen.begin();it1!=kitchen.end();it1++)
		for(it2=(*it1).begin();it2!=(*it1).end();it2++)
		{
			cin>>(*it2);
		}



	for(it1=kitchen.begin();it1!=kitchen.end() - 1;it1++)
              {
		if(it1==kitchen.end())
		break;

		it2=(*it1).begin();
		it3=(*(it1+1)).begin();
		

		while( it2 != ( (*it1).end() ))
		{
		if( it2 != ( (*it1).end()- 1 ) )
		{
			
			temp=min((min(*it2,*(it2+1))),min((*it3),*(it3+1)));

			cout<<temp<<" ";
			it2++;
			it3++;
		}else it2++;
		
	     	}
		cout<<endl;		
		}

return 0;
}
			
		
		
