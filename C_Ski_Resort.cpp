#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
     int t;
     cin >>t;
     while(t--){
          int n,k,q;
          cin >>n >>k>>q;
          
          vector<int>a(n);
          for (int i = 0; i < n; i++) {
               cin >> a[i];
               a[i] = (a[i] <= q) ? 1 : 0;
          }
          int ans=0, len = 0;
          for (int i = 0; i < n; i++) {
               if (a[i] == 1) {
                    len += 1;
               } else {
                    if (len >= k) {
                         int m = (len - k + 1);
                         ans += (m * (m + 1)) / 2;
                    }
                    len = 0;
               }
          }

          if (len >= k) {
               int m = (len - k + 1);
               ans += (m * (m + 1)) / 2;
          }
          cout <<ans<<endl;
     }
}