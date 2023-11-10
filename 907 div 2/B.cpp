#include<bits/stdc++.h>
using namespace std;
int main(){
   int testcase; 
   cin>>testcase;
   for(int testcase_val=0;testcase_val<testcase;testcase_val++){
         int n,m;
         cin>>n>>m;
         vector<int>a(n,0);
         vector<int>b(m,0);
         for(int i=0;i<n;i++){
            cin>>a[i];
         }
         for(int i=0;i<m;i++){
            cin>>b[i];
         }
         int low=INT_MAX;
         for(int i=0;i<m;i++){
            int d=pow(2,b[i]);
            if(b[i]<low){
                low=b[i];
                for(int j=0;j<n;j++){
                    if(a[j]%d==0){
                        a[j]=a[j]+pow(2,b[i]-1);
                    }
                }
            }

            
         }
         for(auto i:a){
            cout<<i<<" ";
         }cout<<endl;
    }       
  return 0;
}