#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	cin>>s;
	int j=0;
	
	for(int j=0;j<255;j++){cout<<"now "<<j<<" : \n";
	for(int i=0;i<s.length();i++)
	{
		s[i]= (char)( ((int)s[i] + j)%256 );
		
	}
	cout<<s<<endl;
	}
	return 0;
}
