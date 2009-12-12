#include<iostream>
#include<vector>
using namespace std;int arr[101][101];int getpath(vector< vector<int> > &input,int len,int count,int i,int j)
{if(len==0)return count;if(arr[i][j]==-1)arr[i][j]=count + max(getpath(input,len-1,input[i+1][j],i+1,j),getpath(input,len-1,input[i+1][j+1],i+1,j+1));return arr[i][j];}int main(){vector< vector<int> > input,map;int num,i,j,inp=0,posn,k;scanf("%d",&posn);for(k=0;k<posn;k++){scanf("%d",&num);vector<int> temp;for(i=0;i<num;i++){temp.clear();temp.resize(i+1);for(j=0;j<i+1;j++){scanf("%d",&inp);temp[j]=inp;}input.push_back(temp);}for(i=0;i<=100;i++){for(j=0;j<=100;j++)arr[i][j]=-1;}printf("%d\n",getpath(input,num-1,input[0][0],0,0));input.clear();}return 0;}
