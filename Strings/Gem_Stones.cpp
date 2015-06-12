#include<bits/stdc++.h>

using namespace std;

int main(){
  int T; cin >> T;
  vector<int> vec(26, 0);
  for(int i = 0; i < T; i++){
    string s; cin >> s;
    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());
    for(int i = 0; i < (int)s.length(); i++) vec[s[i]-'a']++;
  }
  int res = 0;
  for(int i = 0; i < (int)vec.size(); i++)
    if(vec[i] == T) res++;
  cout << res << endl;
  return 0;
}
