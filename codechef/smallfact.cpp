#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int arrsize=0;
unsigned long long int fact(int no)
{
	if(no==1) return 1;
	else return no*fact(no-1);
}
int findcarry(int val)
{
	if(val==10){return 1;}
	else if(val>10){return val/10;}
	else if(val<10){return 0;}
}
int finddigit(int val)
{
	int carry=0;
	if(val==10){return 0;}
	else if(val>10){ carry=val/10;return val-carry*10;}
	else if(val<10){ return val;}
}

vector<int> addn(vector<int> temp,vector<int> old)
{
	vector<int> tempo(temp.size(),0);
	int carry=0;
	for(int i=temp.size()-1;i>=0;i--)
	{
			
		tempo[i]=temp[i] + old[i] + carry;
		carry=findcarry(tempo[i]);
		tempo[i]=finddigit(tempo[i]);
		if(i==0)tempo[i]=carry;
	}
	return tempo;
}

vector<int> convert(int no)
{
	int n,count=0,i;
	vector<int> conv;
	n=no;
	
	if(no%10==0)
	{
		while(no%10==0)
		{
			no=no/10;
			count++;
		}
		if(no<10){conv.push_back(no);no=no/10;}
		while(n!=0)
		{
			n=no%10;
			//cout<<n<<endl;
			if(n==0)break;
			conv.push_back(n);
			//cout<<n<<endl;	
			no=no/10;
		
		}
		reverse(conv.begin(),conv.end());
		for(i=0;i<count;i++)
		conv.push_back(0);
		
		return conv;
		
		
	}
	
	if(no<10){conv.push_back(no);return conv;}
	while(n!=0)
	{
		n=no%10;
		//cout<<n<<endl;
		if(n==0)break;
		conv.push_back(n);
		//cout<<n<<endl;	
		no=no/10;
		
	}
	reverse(conv.begin(),conv.end());
	return conv;
}


vector<int> pad(vector<int> temp)
{
	int i=0,j,k=0;
	for(i=0;i<temp.size();i++)
	{if(temp[i]==0){temp.erase(temp.begin());i--;}else break;}
	return temp;
}

vector<int> genrow(vector<int> no,vector<int> mul)
{
	//int x[]={3,2,3};
	//int y[]={5.6};
	
	//vector<int> no(x,x+sizeof(x)/sizeof(int));
	//vector<int> mul;

	
	int totalsize=no.size()+mul.size();
	arrsize=totalsize -1;
	vector<int> temp,old;
	
	int carry=0,val=0,digit=0,tempsize=0;
	int i=0,j=0,k=0;
	/*
	cout<<endl;
	for(i=0;i<no.size();i++)
	cout<<no[i];cout<<"    ";
	cout<<"total:"<<totalsize<<endl;
	*/
	
	for(j=mul.size() -1;j>=0;j--)	
	{
	//for(k=0;k<(mul.size()-1 - j);k++)
	//temp.push_back(0);
	temp.resize(totalsize,0);
	old.resize(totalsize,0);
	tempsize=arrsize;
	arrsize--;
	carry=0;
	for(i=no.size()- 1;i>=0;i--)
	{	
		val=mul[j]*no[i] + carry;//cout<<val<<" ";
		carry=0;
		carry=findcarry(val);//cout<<mul[j]<<"*"<<no[i]<<"="<<" carry:"<<carry<<" digit"<<finddigit(val)<<endl;
		temp[tempsize]=finddigit(val);
		//cout<<finddigit(val)<<endl;
		tempsize--;
		if(i==no.size()-1)temp[tempsize]=carry;
		
		//temp.push_back(0);
		
	}	
		
		//reverse(temp.begin(),temp.end());
		//for(k=0;k<temp.size();k++)
		//cout<<temp[k];cout<<endl; 
		//if(j=mul.size()-1)old=temp;	
		old=addn(temp,old);
		//for(k=0;k<old.size();k++)
		//cout<<old[k];cout<<endl;
		//cout<<endl;
		temp.clear();
	}
	//for(k=0;k<old.size();k++)
		//cout<<old[k];cout<<endl;	
		
	return old;
}	


void calc(int no)
{
	
	int i=0,k=0;
	vector<int> div1=convert(no);
		
	vector<int> div2,temp;//temp=genrow(div1,div2);
	
	//temp=genrow(div1,div2);return;
	
	//for(k=0;k<temp.size();k++)
	//	cout<<temp[k];cout<<endl;return;
	
	temp=convert(1);
	for(i=1;i<=no;i++)
	{
		div2=convert(i);
		//cout<<"i: "<<i<<" temp:";
		temp=genrow(temp,div2);
		//for(k=0;k<temp.size();k++)
		//cout<<temp[k];	cout<<endl;		
	}
	temp=pad(temp);
	for(k=0;k<temp.size();k++)
		cout<<temp[k];	cout<<endl;
}


	


int main()
{
	short int no,input,i;
	//convert(400);return 0;
	//genrow();
	
	cin>>input;
	
	for(i=0;i<input;i++)
	{
	cin>>no;
	calc(no);
	//cout<<endl;
	}
}

	
		
		
			
	
