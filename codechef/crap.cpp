#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;int arrsize=0;int findcarry(int val){if(val==10){return 1;}else if(val>10){return val/10;}else if(val<10){return 0;}}int finddigit(int val){int carry=0;if(val==10){return 0;}else if(val>10){ carry=val/10;return val-carry*10;}else if(val<10){ return val;}}vector<int> addn(vector<int> temp,vector<int> old){vector<int> tempo(temp.size(),0);	int carry=0;for(int i=temp.size()-1;i>=0;i--){	tempo[i]=temp[i] + old[i] + carry;carry=findcarry(tempo[i]);tempo[i]=finddigit(tempo[i]);if(i==0)tempo[i]=carry;}return tempo;}vector<int> convert(int no){int n,count=0,i;	vector<int> conv;n=no;if(no%10==0){while(no%10==0){no=no/10;count++;}if(no<10){conv.push_back(no);no=no/10;}while(n!=0){n=no%10;if(n==0)break;conv.push_back(n);no=no/10;}reverse(conv.begin(),conv.end());for(i=0;i<count;i++)conv.push_back(0);return conv;}if(no<10){conv.push_back(no);return conv;}while(n!=0){	n=no%10;conv.push_back(n);no=no/10;}reverse(conv.begin(),conv.end());return conv;}vector<int> pad(vector<int> temp){int i=0,j,k=0;for(i=0;i<temp.size();i++){if(temp[i]==0){temp.erase(temp.begin());i--;}else break;}return temp;}vector<int> genrow(vector<int> no,vector<int> mul){int totalsize=no.size()+mul.size();arrsize=totalsize -1;vector<int> temp,old;int carry=0,val=0,digit=0,tempsize=0;int i=0,j=0,k=0;for(j=mul.size() -1;j>=0;j--){temp.resize(totalsize,0);old.resize(totalsize,0);tempsize=arrsize;arrsize--;carry=0;for(i=no.size()- 1;i>=0;i--){val=mul[j]*no[i] + carry;carry=0;carry=findcarry(val);temp[tempsize]=finddigit(val);tempsize--;if(i==no.size()-1)temp[tempsize]=carry;}old=addn(temp,old);temp.clear();}return old;}void calc(int no){int i=0,k=0;vector<int> div1=convert(no);vector<int> div2,temp;temp=convert(1);for(i=1;i<=no;i++){div2=convert(i);temp=genrow(temp,div2);}temp=pad(temp);for(k=0;k<temp.size();k++)cout<<temp[k];cout<<endl;}int main(){short int no,input,i;cin>>input;for(i=0;i<input;i++){cin>>no;calc(no);}}