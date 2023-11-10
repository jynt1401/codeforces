#include<bits/stdc++.h>
using namespace std;
int main(){
   int testcase; 
   cin>>testcase;
   for(int testcase_val=0;testcase_val<testcase;testcase_val++){
         int x,y,k;
         cin>>x>>y>>k;
         if(x==y){
            cout<<x<<endl;
         }
         else if(x<y){
            int time=x;
            if(x+k>=y){
                cout<<time+(y-x)<<endl;
            }
            else{
                // cout<<time+k+(y-(x+k))<<endl;
                time=time+k;
                int pos=time;
                time=time+2*(y-pos);
                cout<<time<<endl;
            }

         }
         else{
            cout<<x<<endl;
         }
    }       
  return 0;
}