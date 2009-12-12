#include<iostream>
#include<vector>

using namespace std;


vector<int>::iterator find_largest_mobile(vector<int> &input,vector<int> &dirn)
{
	vector<int>::iterator it1,it2,it3,temp;
	int i=0,flag=0;
	for(it1=input.begin(),it2=dirn.begin();it1!=input.end();it1++,it2++)
	{
		
		if(i<(*it1) && (*it2)==1)
		{it3=it1;flag=1;}
	}
	temp=it3;
	it3=(it3-1);
	it3--;
	it3=temp;
	return it3;
	
}

void revert(vector<int> &input,vector<int> &dirn,int chk)
{
	vector<int>::iterator it1,it2,it3,temp;
	int i=0,flag=0;
	for(it1=input.begin(),it2=dirn.begin();it1!=input.end();it1++,it2++)
	{
		if((*it2)==1 && (*it1)>chk)
		{*it2=0;}
		else if((*it2)==0 && (*it1)>(chk))
		{*it2=1;}
	}
}
void perm(vector<int> &input)
{
	vector<int> dirn(input.size(),1);
	int chk=*(find_largest_mobile(input,dirn));
	revert(input,dirn,chk);
	for(int i=0;i<input.size();i++)
	cout<<input[i]<<" ";cout<<endl;
}		

int main()
{

	vector<int> input;
	for(int i=0;i<3;i++)
	input.push_back(i);
	perm(input);
	return 0;
}











	
	
	

