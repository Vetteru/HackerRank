#include<bits/stdc++.h>

using namespace std;

int main(){
  string a,b; cin >> a >> b;
  vector<int> vec(26,0);
  for(int i = 0; i < (int)a.length(); i++) vec[a[i]-'a']++;
  for(int i = 0; i < (int)b.length(); i++) vec[b[i]-'a']--;
  int res = 0;
  for(int i = 0; i < (int)vec.size(); i++) res += abs(vec[i]);
  cout << res << endl;
  return 0;
}
