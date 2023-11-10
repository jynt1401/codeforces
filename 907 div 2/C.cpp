#include <bits/stdc++.h>
using namespace std;
bool comp(int a, int b){
	return a > b;
}
void check(){
    int n;cin>>n;
 
    vector<long long> arr(n);
    for(auto i= 0; i<n; i++) cin>>arr[i];
 
    sort(arr.begin(), arr.end(), comp);
 
    long long all = accumulate(arr.begin(), arr.end(), 0ll);
    long long tot = 0, sol = all;
	int j = 0;
    while(j<n){
        tot += arr[j];
        all -= arr[j];
        long long t = 0;
        if (tot > all){
            t = tot - all;
            t = (t + 1) / 2;
        }
        sol = min(sol, j + 1 + all + t);
		j++;
    }
    cout<<sol <<"\n";
}
 
int main(){
    int t; cin>>t;
    while(t--){
        check();
    }
    return 0;
}