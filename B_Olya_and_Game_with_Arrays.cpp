#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
     int t;
     cin >>t;
     while (t--)
     {
         int n;
         cin >>n;
         int mini = 9e18;
         int second_mini_sum=0;
         int second_mini = 9e18;
         for(int i=0;i<n;i++){
          int m;
          cin >>m;
          vector<int>v(m);
          for(auto &j:v) cin >>j;
          sort(v.begin(),v.end());
          mini=min(mini,v[0]);
          second_mini_sum += v[1];
          second_mini = min(second_mini,v[1]);

         }
        cout << (mini + second_mini_sum - second_mini)<<endl; 
     }
     
}