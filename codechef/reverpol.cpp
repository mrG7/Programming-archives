#include<iostream>
#include<stack>

using namespace std;

void reverpol(std::string &str)
{
	int i=0;
	stack<char> x;
	for(i=0;i<str.size();i++)
	{
		if(str[i]=='*'||str[i]=='+'||str[i]=='/'||str[i]=='^'||str[i]=='-')
		x.push(str[i]);
		else if(str[i]==')')
		{
			if(x.empty())break;
			else {cout<<x.top();x.pop();}
		}
		else if(str[i]=='(')continue;
		else cout<<str[i];
	}
	cout<<endl;
	x.empty();
}

int main()
{
	;
	std::string str;
	int input=0,j=0;
	cin>>input;
	for(j=0;j<input;j++)
	{
	cin>>str;
	reverpol(str);
	}
return 0;
}
