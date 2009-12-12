#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main()
{
	int inp=0,temp=0;
	vector<int> arr;
	
	while(1){

	scanf("%d",&inp);
	if(inp==0)return 0;
	arr.clear();
	stack<int> stk;
	
	for(int i=0;i<inp;i++)
	{
		scanf("%d",&temp);
		arr.push_back(temp);
		
	}
	int next=1,flag=1;
	for(int i=0;i<(int)arr.size();i++)
	{
		
		if(!stk.empty()){
		if((int)stk.top() == next)
		{
			while((int)stk.top() == next)
			{
				//cout<<"POP:"<<stk.top()<<endl;
				stk.pop();
				next++;
				if(stk.empty())break;
			}
		}
		}
		
		if(arr[i]==next){//cout<<arr[i]<<endl;
		next++;	continue;}
		
		if(!stk.empty())
		{
			if(arr[i]>stk.top()){flag=0;break;}
		}
		//cout<<"PUSH: "<<arr[i]<<endl;
		stk.push(arr[i]);
			
	}
	
	if(flag==0){printf("no\n");continue;}
	
	if(!stk.empty()){
	if(stk.top() ==next)
		{
			
			while(stk.top()==next)
			{
				//cout<<"POP:"<<stk.top()<<endl;
				stk.pop();
				next++;
				if(stk.empty())break;
				
			}
		}
	}
	
	if(next==(inp+1)){printf("yes\n");continue;}
	else{printf("no\n");continue;} 
		
	}
	return 0;
}		
