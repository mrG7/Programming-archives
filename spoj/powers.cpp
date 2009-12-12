#include<iostream>
#include<cmath>
#include<cstdlib>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int decipoint,precision;

vector< string > spl(vector<int> &arr,int prec)
{
	vector<string> ret;
	string temp,temp2;int start=0;
	if(arr.size()%2==1)
	{
		temp = '0' ;
		temp += (char)(arr[0] + 48);
		ret.push_back(temp);
		 start=1;
	}
	for(int i=start;i<arr.size();i+=2)
	 {
		 	temp2 = (char)(arr[i] + 48) ;
		 	temp2 += (char)(arr[i+1] + 48); 
		 	ret.push_back(temp2);
	 }decipoint=ret.size();
	 for(int i=0;i<prec;i++)
	 {ret.push_back("00");}
	return ret;
}
int str2int(string st)
{
	int sum=0;
	for(int i=st.size()-1,j=1;i>=0;i--,j*=10)
	{sum=sum + j*((int)st[i]-48);}return sum;
}
string int2str(int a)
{
	string st;
	while(a!=0)
	{st += (char)( a%10 + 48 );a /=10;}reverse(st.begin(),st.end());
	return st;
		
}
double findroot(vector<string> &ret)
{
	string str=ret[0];
	int pos=0;
	vector<int> ans;
	int x=0,y=0,z = str2int(ret[0]),ct=0;
	while(1)
	{
		ct++;
		
		while( (x+y)*y <= z ){y++;}y--;
		//cout<<y<<endl;
		ans.push_back(y);
		if(ct==decipoint+2) break;
		int diff= z - (x + y)*y;
		
		string temp = int2str(diff);
		temp = temp + ret[ct];
		
		z = str2int(temp);
		if(z==0){
		while(ct<=decipoint+precision){cout<<"0"<<endl;ans.push_back(0);ct++;}
		break;}
		x = (x + 2*y)*10;
		y=0;
		
	}
	double sum=0;
	for(int i=decipoint -1,j=1;i>=0;i--,j*=10)
	{
		sum += j*ans[i];
	}
	int i=0;
	float j=0.1;
	for(i=decipoint;i<ans.size();i++,j=j/10)
	{
		sum += j*ans[i];
	}
	return sum;
}

int main()
{
	unsigned long long int a;
	string e;
	cin>>a>>e;
	vector<int> arr;
	for(int i=0;i<e.size();i++)
	{
		arr.push_back((int)e[i] -48 );
	}
	vector<string> splitted;
	splitted= spl(arr,2);
	double root= findroot(splitted);
	double near = round((2* log(root))/log(2) );
	cout<<abs(pow(2,near) - str2int(e))+1;
	
	/*int no,temp;
	vector<int> arr;
	cin>>no;
	for(int i=0;i<no;i++)
	{
		cin>>temp;
		arr.push_back(temp);
	}
	vector<string> splitted;
	splitted= spl(arr,2);
	//for(int i=0;i<splitted.size();i++)
	//cout<<splitted[i]<<endl;
	cout<<findroot(splitted);
	*/
	return 0;
}
