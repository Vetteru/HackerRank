#include<bits/stdc++.h>

using namespace std;

int main(){
  int T; cin >> T;
  while(T--){
    string s; cin >> s;
    int l = 0,r = (int)s.length()-1, res = 0;
    while(l < r) res += abs(s[l++]-s[r--]);
    cout << res << endl;
  }
  return 0;
}
