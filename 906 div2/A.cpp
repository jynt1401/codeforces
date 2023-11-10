#include<bits/stdc++.h>
using namespace std;
bool solve(vector<int>&v){
    int n=v.size();
    sort(v.begin(),v.end());
         vector<int>ans(n,-1);
         int low=0;
         int high=n-1;
         int ind=0;
         while(low<=high){
            ans[ind]=v[low];
            low++;
            ind++;
            ans[ind]=v[high];
            high--;
            ind++;
         }
        //  for(auto i:ans){
        //     cout<<i<<" ";
        //  }cout<<endl;
         int sum=ans[0]+ans[1];
         for(int i=1;i<n;i++){
            if(ans[i]+ans[i-1]!=sum){
                return false;
            }
         }
         return true;
         
}
bool solvee(vector<int>&v){
    int n=v.size();
    sort(v.rbegin(),v.rend());
         vector<int>ans(n,-1);
         int low=0;
         int high=n-1;
         int ind=0;
         while(low<=high){
            ans[ind]=v[low];
            low++;
            ind++;
            ans[ind]=v[high];
            high--;
            ind++;
         }
        //  for(auto i:ans){
        //     cout<<i<<" ";
        //  }cout<<endl;
         int sum=ans[0]+ans[1];
         for(int i=1;i<n;i++){
            if(ans[i]+ans[i-1]!=sum){
                return false;
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
         vector<int>v;
         for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            v.push_back(temp);
         }
         if(solve(v) || solvee(v)){
            cout<<"YES"<<endl;
         }
         else{
            cout<<"NO"<<endl;
         }
         

    }       
  return 0;
}