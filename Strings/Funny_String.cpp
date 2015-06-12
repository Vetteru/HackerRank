#include<bits/stdc++.h>

using namespace std;

string solve(const string& s){
  string r = s;
  reverse(r.begin(), r.end());
  for(int i = 0; i+1 < (int)s.length(); i++)
    if(abs(s[i+1]-s[i]) != abs(r[i+1]-r[i])) return "Not Funny";
  return "Funny";
}

int main(){
  int T; cin >> T;
  while(T--){
    string s; cin >> s;
    cout << solve(s) << endl;
  }
  return 0;
}
