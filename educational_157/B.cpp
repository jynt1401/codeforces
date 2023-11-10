#include<bits/stdc++.h>
using namespace std;
 int main(){
   long long int testcase; 
   cin>>testcase;
   for(long long int testcase_val=0;testcase_val<testcase;testcase_val++){
         long long int n;
         cin>>n;
         n=2*n;
         vector<int>v(n,0);
         for(long long int i=0;i<n;i++){
            cin>>v[i];
         }
         sort(v.begin(),v.end());
         long long int low=0;
         long long int high=n-1;
         vector<pair<int,int>>pt;
         while(low<=high){
            pt.push_back({v[low],v[high]});
            low++;
            high--;
         }
         long long int ans=0;
         for(long long int i=1;i<pt.size();i++){
            ans=ans+(abs(pt[i].first-pt[i-1].first)+abs(pt[i].second-pt[i-1].second));
         }
         cout<<ans<<endl;
         for(auto i:pt){
            cout<<i.first<<" "<<i.second<<endl;
         }
    }       
  return 0;
}