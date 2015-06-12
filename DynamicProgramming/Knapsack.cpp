#include<bits/stdc++.h>

using namespace std;

int main(){
  int T; cin >> T;
  while(T--){
    int n,k; cin >> n >> k;
    vector<bool> able(k+1, false);
    able[0] = true;
    for(int i = 0; i < n; i++){
      int a; cin >> a;
      for(int j = 0; j+a <= k; j++) able[j+a] = able[j+a]||able[j];
    }
    for(int i = k; i >= 0; i--){
      if(able[i]){
        cout << i << endl;
        break;
      }
    }
  }
  return 0;
}
