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
	int temp=0,i=0,j=0;
	
	

	vector< vector<int> > kitchen(nmap,vector<int>(nmap,0));
	vector< vector<int> >::iterator it1;
	vector<int>::iterator it2,it3;

	for(it1=kitchen.begin();it1!=kitchen.end();it1++)
		for(it2=(*it1).begin();it2!=(*it1).end();it2++)
		{
			cin>>(*it2);
		}

	if(ntrap==1)
	{
	       for(it1=kitchen.begin();it1!=kitchen.end();it1++)
                for(it2=(*it1).begin();it2!=(*it1).end();it2++)
                {
                        cout<<(*it2)<<" ";
                }
		cout<<endl;
	}

	for(it1=kitchen.begin();it1!=kitchen.end() - ntrap + 1;it1++)
              {
		if(it1==kitchen.end())
		break;

		it2=(*it1).begin();
		//it3=(*(it1+1)).begin()
		

		while( it2 != ( (*it1).end() - ntrap))
		{
		if( it2 != ( (*it1).end()- ntrap ) )
		{
			cout<<"comparing";
			temp=*(min_element(it2,(it2 + ntrap -1)));cout<<temp<<" ";
			for(i=1;i<ntrap;i++)
			{
			it3=(*(it1+i)).begin();
			it3=it3 + j;
			cout<<*(min_element(it3,(it3+ntrap -1)))<<" ";
			temp=min(temp,*(min_element(it3,(it3+ntrap -1))));
			}
			cout<<"MIN:"<<temp<<" "<<endl;
			it2++;
			it3++;
			j++;
		}else it2++;
		j=0;
	     	}
		cout<<endl;		
		}

return 0;
}
			
		
		
