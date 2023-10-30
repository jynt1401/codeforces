#include<bits/stdc++.h>
using namespace std;
int main(){
   int t; 
   cin>>t;
   multiset<int>left;
   multiset<int>right;
   for(int g=0;g<t;g++){
         string op;
         cin>>op;
         int l,r;
         cin>>l>>r;
         if(op=="+"){

         left.insert(l);
         right.insert(r);
         }
         else{
            left.erase(left.find(l));
            right.erase(right.find(r));

         }
         if(left.size() && right.size() && *(--left.end())>*(right.begin())){
            cout<<"YES"<<endl;

         }
         else{
            cout<<"NO"<<endl;
            // cout<<"YES"<<endl;

         }
    }       
  return 0;
}