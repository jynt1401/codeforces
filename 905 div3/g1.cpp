#include<bits/stdc++.h>
using namespace std;
int main(){
   int testcase; 
   cin>>testcase;
   for(int testcase_val=0;testcase_val<testcase;testcase_val++){
         int n,m;
         cin>>n>>m;
         vector<int>a;
         vector<int>b;
         a.push_back(m);
         for(int i=0;i<n-1;i++){
            int temp;
            cin>>temp;
            a.push_back(temp);
         }
         for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            b.push_back(temp);
         }
         sort(a.begin(),a.end());
         sort(b.begin(),b.end());
        //  for(auto i:a){
        //     cout<<i<<" ";
        //  }cout<<endl;
        //  for(auto i:b){
        //     cout<<i<<" ";
        //  }cout<<endl;
        int low=0;
        int high=0;
        int cnt=0;
        while(low<n && high<n){
            if(a[low]<b[high]){
                cnt++;
                low++;
                high++;
            }
            else{
                high++;
            }
        }
        cout<<n-cnt<<endl;
        //  cout<<endl;

    }       
  return 0;
}