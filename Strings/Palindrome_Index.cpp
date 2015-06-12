#include<bits/stdc++.h>

using namespace std;

bool is_ok(const string& s){
  for(int l = 0, r = (int)s.length()-1; l < r; l++, r--) if(s[l]!=s[r]) return false;
  return true;
}

int solve(const string& s){
  int r = (int)s.length()-1, l = 0;
  while(l < r){
    if(s[l] != s[r]){
      if(is_ok(s.substr(0,l) + s.substr(l+1))) return l;
      if(is_ok(s.substr(0,r) + s.substr(r+1))) return r;
    }
    l++; r--;
  }
  return -1;
}

int main(){
  int T; cin >> T;
  while(T--){
    string s; cin >> s;
    cout << solve(s) << endl;
  }
  return 0;
}
