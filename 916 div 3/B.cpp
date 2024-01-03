#include<bits/stdc++.h>
using namespace std;
int main() {
  int testcase;
 cin>>testcase;
while(testcase--){
    int n,k;
    cin>>n>>k;
    int temp=1;
    for(int i=0;i<k;i++){
        cout<<temp<<" ";
        temp++;
    }
    for(int i=n;i>=temp;i--){
        cout<<i<<" ";
    }cout<<endl;
 }
 return 0;
}