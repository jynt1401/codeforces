#include<bits/stdc++.h>
using namespace std;
int main(){
   long long t; 
   cin>>t;
   for(long long g=0;g<t;g++){
         long long n;
         cin>>n;
         vector<int>v(n,0);
         for(long long i=0;i<n;i++){
            cin>>v[i];
         }
         long long op=0;
         long long ans=0;
            long long temp=0;
         for(long long i=1;i<n;i++){
            if(v[i-1]>v[i]){
                long long curr=v[i];
                while(v[i-1]>curr){
                    curr=curr*2;
                    temp++;
                }
            }
            else{
                long long curr=v[i-1];
                while(v[i]>=curr*2 && temp){
                    curr=curr*2;
                    temp--;
                }
            }
            ans=ans+temp;
            
         }
         cout<<ans<<endl;
    }       
  return 0;
}