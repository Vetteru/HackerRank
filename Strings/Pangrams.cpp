#include<bits/stdc++.h>

using namespace std;

int main(){
  vector<bool> used(26, false);
  string s;
  getline(cin,s);
  for(int i = 0; i < (int)s.length(); i++){
    if(s[i] == ' ') continue;
    s[i] = tolower(s[i]);
    used[s[i]-'a'] = true;
  }

  bool ans = true;
  for(int i = 0; i < (int)used.size(); i++) ans &= used[i];
  cout << (ans?"":"not ") << "pangram" << endl;
  return 0;
}
