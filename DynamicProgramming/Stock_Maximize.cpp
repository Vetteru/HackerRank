#include<bits/stdc++.h>

using namespace std;

int main(){
  int T; cin >> T;
  while(T--){
    int n; cin >> n;
    vector<int> vec(n), dp(n);
    for(int i = 0; i < n; i++) cin >> vec[i];
    dp[n-1] = vec[n-1];
    for(int i = n-2; i >= 0; i--) dp[i] = max(vec[i], dp[i+1]);
    long long ans = 0, st = 0;
    for(int i = 0; i < n; i++){
      if(vec[i] == dp[i]){
        ans += st*vec[i];
        st = 0;
      }
      if(vec[i] < dp[i]){
        ans -= vec[i];
        st++;
      }
    }
    cout << ans << endl;
  }
  return 0;
}
