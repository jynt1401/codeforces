#include<bits/stdc++.h>
using namespace std;
int main() {
  int testcase;
 cin>>testcase;
while(testcase--){
  int n;
  cin>>n;
  string s;
  cin>>s;
  unordered_map<char,int>m;
  for(auto ch:s){
    m[ch]++;
  }
  int ans=0;
  for(auto i:m){
    char ch=i.first;
    int feq=i.second;
    // cout<<ch<<" "<<ch-'A'+1<<" "<<feq<<endl;
    if(feq>=ch-'A'+1){
      ans++;
    }
  }
  cout<<ans<<endl;
 }
 return 0;
}