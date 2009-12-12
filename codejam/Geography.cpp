#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<map>
#include<algorithm>
#include<set>
using namespace std;
int m=0,n=0;
vector< vector<int> > arr;
vector< vector<char> > final;
map<string,int> mapp;
int alpha=97;
char lexico=':';
void mark(vector< vector<int> > &arr,int i,int j,string dirn)
{
			
			
			if(i-1>=0 && dirn=="N")
			{
				if(final[i][j]=='*' && final[i-1][j]=='*')
				{if(lexico!=':')final[i-1][j]=lexico;
				else{
				++alpha;final[i-1][j]=alpha;final[i][j]=alpha;}}
				else if(final[i][j]=='*' && final[i-1][j]!='*')
				final[i][j]=final[i-1][j];
				else if(final[i][j]!='*')
				final[i-1][j]=final[i][j];
			}
			if(i+1<m && dirn=="S"){
				if(final[i][j]=='*' && final[i+1][j]=='*')
				{if(lexico!=':')final[i+1][j]=lexico;
				else{
				++alpha;final[i+1][j]=alpha;final[i][j]=alpha;}}
				else if(final[i][j]=='*' && final[i+1][j]!='*')
				final[i][j]=final[i+1][j];
				else if(final[i][j]!='*')
				final[i+1][j]=final[i][j];
			}
			if(j+1<n && dirn=="E"){
				if(final[i][j]=='*' && final[i][j+1]=='*')
				{if(lexico!=':')final[i][j+1]=lexico;
				else
				{++alpha;final[i][j+1]=alpha;final[i][j]=alpha;}}
				else if(final[i][j]=='*' && final[i][j+1]!='*')
				final[i][j]=final[i][j+1];
				else if(final[i][j]!='*')		
				final[i][j+1]=final[i][j];
			}
			if(j-1>=0 && dirn=="W"){
				if(final[i][j]=='*' && final[i][j-1]=='*')
				{if(lexico!=':')final[i][j-1]=lexico;
				else ++alpha;final[i][j-1]=alpha;final[i][j]=alpha;}
				else if(final[i][j]=='*' && final[i][j-1]!='*')
				final[i][j]=final[i][j-1];
				else if(final[i][j]!='*')				
				final[i][j-1]=final[i][j];
			}
}
int traverse()
{
			mapp.clear();
			//set <char> surround;if(arr[i-1][j]<arr[i][j])surround.insert(final[i-1][j]);
			if(i-1>=0){mapp["N"] = arr[i-1][j];}
			if(i+1<m){mapp["S"] = arr[i+1][j];}
			if(j+1<n){mapp["E"] = arr[i][j+1];}
			if(j-1>=0){mapp["W"] = arr[i][j-1];}
			map<string,int>::iterator it;
			string flow="crap";int maxx=10000000;cout<<"\nMAP: ";
			for(it=mapp.begin();it!=mapp.end();it++)
			{     cout<<it->second<<" ";
				if(it->second<arr[i][j])
				{if(it->second<maxx)
					{maxx = it->second;flow=it->first;}
					if( (it->second) == maxx )
					{
						//flow=it->first;
						if((flow=="W" || flow=="S" || flow=="E")  && it->first=="N" )
						flow="N";
						else if((flow=="E" || flow=="S") && (it->first=="N" || it->first=="W") )
						flow=it->first;
						else if( (flow=="S") && (it->first=="E" || it->first=="S" || it->first=="W"))
						flow=it->first;
					}
					
					

				}
			}
			//cout<<flow;
			if(flow=="crap" && final[i][j]=='*')
			{++alpha;final[i][j]=alpha;}
			else
			if(i-1>=0 && dirn=="N")
			{	
			final[i-1][j]=final[i][j];
			traverse(arr,i-1,j,flow);
			}
			if(i+1<m && dirn=="S"){
				final[i+1][j]=final[i][j];
				traverse(arr,i+1,j,flow);
			}
			if(j+1<n && dirn=="E"){
				final[i][j+1]=final[i][j];
			}
			if(j-1>=0 && dirn=="W"){				
				final[i][j-1]=final[i][j];
			}
			//mark(arr,i,j,flow);cout<<endl;print(cc+1);cout<<"flow:"<<flow<<" max: "<<maxx<<" lex: "<<lexico<<endl;
}
void print(int no)
{
	cout<<"Case #"<<no<<":\n";
	for(int i=0;i<m;i++)
	{
		
		for(int j=0;j<n;j++)
		{
			cout<<(char)final[i][j]<<" ";
		}
		cout<<endl;
	}
}
void cls()
{
 	int m=0,n=0;
	arr.clear();
	final.clear();
	mapp.clear();
	alpha=97;
}
int main()
{
	int no;
	cin>>no;
	for(int cc=0;cc<no;cc++){
	cls();
	vector<int> tempvec;
	vector<char> tempvec2;
	int temp;
	cin>>m>>n;
	for(int i=0;i<m;i++)
	{
		tempvec.clear();
		for(int j=0;j<n;j++)
		{
			cin>>temp;
			tempvec.push_back(temp);tempvec2.push_back('*');
		}
		arr.push_back(tempvec);final.push_back(tempvec2);
	}
	final[0][0]=(char)alpha;
	
	for(int i=0;i<m;i++)
	{
		
		for(int j=0;j<n;j++)
		{
			while(traverse())
			{}
		
	 	}
	 }
	 print(cc+1);
	 }
	return 0;			
}
			
