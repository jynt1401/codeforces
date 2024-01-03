#include<bits/stdc++.h>
using namespace std;
 int   main() {
  long long int    testcase;
 cin>>testcase;
while(testcase--){
    long long int    n;
    cin>>n;
   vector<vector<vector<long long int   >>>v(n);
   for(long long int    i=0;i<n;i++){
    for(long long int    j=0;j<n;j++){
        long long int    x;
        cin>>x;
        v[i].push_back({x,j});
        sort(v[i].rbegin(),v[i].rend());
    }
   }
   long long int    ans=0;
    for(long long int  i=0;i<3;i++){
        for(long long int  j=0;j<3;j++){
            for(long long int  k=0;k<3;k++){
                if(v[0][i][1]!=v[1][j][1] && v[0][i][1]!=v[2][k][1] && v[1][j][1]!=v[2][k][1]){
                    ans=max(ans,v[0][i][0]+v[1][j][0]+v[2][k][0]);
                }
            }
        }
    }
   cout<<ans<<endl;


    
    
 }
 return 0;
}