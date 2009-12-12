#include<iostream>
#include<cstdio>
#include<map>
#include<vector>
#include<string>
#include<cstdlib>
#include<algorithm>
#define whilst(X,Y,Z) for(X=Y;X<Z;X++)

using namespace std;

class dict{

	private:
	map< string,string > dict;
	
	public:
	
	void procc(char *line)
	{
		int i=0,colon=0;
		string word;		
		whilst(i,0,100){
		if(*(line+i)==':')
		{
			string temp(line+0,line + i);
			word=temp;colon=i;
			continue;
		}
		else if(*(line+i)=='\n' || *(line+i)=='\0')break;
		i++;
		}
		string mean(line+colon+1,line+i);
		cout<<word<<" "<<mean<<endl;
		dict.insert(make_pair(word,mean));
	}
	void getstuff(char* t,char *m)
	{
		char xy[100];
		FILE *wl;
		wl = fopen(t,m);
		while(fgets(xy,100,wl)!=NULL)
		{
			cout<<xy;procc(xy);
			//fgets(xy,100,wl);
			
		}
	}
	void print()
	{
		system("cat new.cpp");
	}
	void find(string s)
	{
		multimap< string,string >::iterator it;

		it = dict.find(s);
		if(it!=dict.end())
		cout<<it->second;
		else cout<<"No Such Meaning";
	}
	void debug()
	{
		map<string, string>::iterator it;
		for(it=dict.begin();it!=dict.end();it++)
		{
			cout<<it->first<<" "<<it->second<<endl;
		}
	}
			
		
};

int main(int argc,char* argv[])
{
	class dict a;
	a.getstuff("new.cpp","r");
	//a.debug();
	return 0;

}
