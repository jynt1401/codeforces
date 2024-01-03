#include<bits/stdc++.h>
using namespace std;
int main() {
  int testcase;
 cin>>testcase;
while(testcase--){
    int n,k;
    cin>>n>>k;
    vector<int>a(n,0);
    vector<int>b(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int maxi=0;
    int ans=0;
    int tans=0;
    for(int i=0;i<min(n,k);i++){
        tans+=a[i];
        maxi=max(maxi,b[i]);
        ans=max(ans,tans+(k-i-1)*maxi);
    }
    cout<<ans<<endl;

 }
 return 0;
}