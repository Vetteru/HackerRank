#include<bits/stdc++.h>

using namespace std;

int main(){
  int cnt[26] = {};
  string s; cin >> s;
  for(int i = 0; i < (int)s.length(); i++) cnt[s[i]-'a']++;
  int even = 0, odd = 0;
  for(int i = 0; i < 26; i++){
    if(cnt[i]%2) odd++;
    else even++;
  }
  cout << (odd<2?"YES":"NO") << endl;
  return 0;
}
