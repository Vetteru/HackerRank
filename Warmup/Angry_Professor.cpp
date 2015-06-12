#include<bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n,k,s = 0;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
      int tmp;
      cin >> tmp;
      s += (tmp<=0?1:0);
    }
    cout << (s<k?"YES":"NO") << endl;
  }
  return 0;
}
