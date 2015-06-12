#include<bits/stdc++.h>

using namespace std;

int main(){
  int T;
  cin >> T;
  while(T--){
    int n, res = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
      int in; cin >> in;
      long long conb = (i+1LL) * (n-i);
      if(conb%2LL) res ^= in;
    }
    cout << res << endl;
  }
  return 0;
}
