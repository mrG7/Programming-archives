#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
#include<string>
#include<stack>
using namespace std;
vector<string> arr;
int l,d,n;
vector<string> lang;

int traverse(string token,vector<string> &aalang,int posn)
{
	//for(int i=0;i<aalang.size();i++)cout<<aalang[i]<<" ";cout<<endl;
	
	token = arr[posn];int ct=0;
	//cout<<token<<" "<<aalang.size()<<endl;
	vector<string> newlang;
	for(int i=0;i<token.length();i++)
	{
		
		for(int j=0;j<aalang.size();j++)
		{
				if(token[i]==aalang[j][posn])
				{newlang.push_back(aalang[j]);}
		}
		
	}if(newlang.size()==0){cout<<"0\n";return 0;}
	//for(int i=0;i<aalang.size();i++)cout<<aalang[i]<<" ";cout<<endl;
	if(posn==l-1){cout<<aalang.size()<<endl;return 0;}
	traverse(arr[posn+1],newlang,posn+1);
}	
//a(ab)(bc)
void procc(string temp)
{
	int i=0;string str;
	
	while(i!=((int)temp.length()))
	{
		
		str="";
		if(temp[i]=='(')
		{	i++;
			while(temp[i]!=')')
			{str=str+temp[i];i++;}
			
		}else if(temp[i]!='('){str=str+temp[i];}
		arr.push_back(str);
		i++;
	}
	//for(int i=0;i<arr.size();i++)cout<<arr[i]<<" ";cout<<endl;
	
	traverse(arr[0],lang,0);
}

			
int main()
{
	string temp;
	scanf("%d%d%d",&l,&d,&n);
	for(int i=0;i<d;i++)
	{
		cin>>temp;
		lang.push_back(temp);
		
	}
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		arr.clear();
		cout<<"Case #"<<i+1<<": ";
		procc(temp);
	}
	return 0;
}
