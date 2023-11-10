#include<bits/stdc++.h>
using namespace std;
bool solve(vector<pair<int,int>>p,vector<int>v){
    for(auto i:p){
        int low=i.first;
        int high=i.second;
        // cout<<low+1<<" "<<high<<endl;
        for(int i=low+1;i<=high;i++){
            // cout<<i<<" "<<v[i]<<" "<<v[i+1]<<endl;
            if(i+1<=high && v[i]>v[i+1]){
                // cout<<i<<v[i]<<" "<<v[i+1]<<endl;
                return false;
            }
        }
    }
    return true;
}
int main(){
   int testcase; 
   cin>>testcase;
   for(int testcase_val=0;testcase_val<testcase;testcase_val++){
         int n;
         cin>>n;
         vector<int>v(n+1,0);
         for(int i=1;i<=n;i++){
            cin>>v[i];
         }
         vector<pair<int,int>>p;
        //  p.push_back({0,2});
         int val=2;
         while(val*2<=n){
            p.push_back({val,val*2});
            val=val*2;
         }
            p.push_back({val,n});

        //  for(auto i:p){
        //     cout<<i.first<<" "<<i.second<<endl;
        //  }
         if(solve(p,v)){
            cout<<"YES"<<endl;

         }
         else{
            cout<<"NO"<<endl;
         }

    }       
  return 0;
}