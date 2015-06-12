#include<bits/stdc++.h>

using namespace std;

string toStr(int a){ostringstream oss; oss<<a; return oss.str();}
int toInt(string s){return atoi(s.substr(0,s.size()).c_str());}

int main(){
  int t;
  cin >> t;
  while(t--){
    string n;
    cin >> n;
    int res = 0;
    for(int i = 0; i < (int)n.length(); i++){
      int d = n[i]-'0';
      if(d == 0) continue;
      if(toInt(n)%d == 0) res++;
    }
    cout << res << endl;
  }
  return 0;
}
