#include<bits/stdc++.h>

using namespace std;

int main(){
  int T; cin >> T;
  while(T--){
    int N; cin >> N;
    vector<int> vec(N+1, 0);
    for(int i = 0; i < N; i++){
      int a; cin >> a;
      vec[a]++;
    }
    long long ans = 1, cand = 0;
    for(int i = 0; i < N; i++){
      cand += vec[i];
      ans = (ans*cand)%1000000007;
      cand--;
    }
    cout << ans << endl;
  }
  return 0;
}
