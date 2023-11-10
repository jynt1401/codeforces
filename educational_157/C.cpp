#include <bits/stdc++.h>
using namespace std;
 int  main()
{
   long long int  n;
   cin >> n;
   vector<string> v(n);
   for (long long int  i = 0; i < n; i++)
   {
      cin >> v[i];
   }
   map<pair<long long int , long long int >, long long int > m;
   for (long long int  i = 0; i < n; i++)
   {
      long long int  temp=0;
      for(auto ch:v[i]){
         temp+=(ch-'0');
      }
      long long int  len=v[i].length();
      m[{len,temp}]++;
   }
   long long int  cnt = 0;
   for (auto i : v)
   {
      string temp = i;
      long long int  len = i.length();
      long long int  val = 0;
      for(auto ch:i){
         val+=(ch-'0');
      }
      long long int  tempval = 0;
      long long int  hf = i.length() / 2;
      for (long long int  j = 1; j <= i.length(); j++)
      {
         tempval += (i[j - 1] - '0');
         if (j <= hf)
         {
         long long int  rest = val - (2*tempval) ;
         long long int  restlen = len -(2*j);
            if (m.find({restlen, rest}) != m.end())
            {
               cnt = cnt + m[{restlen, rest}];
            }
         }
         else
         {
             long long int  rest = (2*tempval)-val;
         long long int  restlen = (2*j)-len;
            if (m.find({restlen, rest}) != m.end())
            {
               cnt = cnt + m[{restlen, rest}];
            }
         }
      }
   }
   cout <<cnt<<endl;
   return 0;
}