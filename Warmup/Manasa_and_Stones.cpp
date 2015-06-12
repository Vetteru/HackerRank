#include<bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n,a,b;
    set<int> S;
    cin >> n >> a >> b;
    for(int i = 0; i < n; i++) S.insert(i*a + (n-i-1)*b);
    for(set<int>::iterator ite = S.begin(); ite != S.end(); ite++){
      if(ite != S.begin()) cout << " ";
      cout << *ite;
    }
    cout << endl;
  }
  return 0;
}
