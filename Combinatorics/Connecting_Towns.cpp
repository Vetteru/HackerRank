#include<bits/stdc++.h>

using namespace std;

int main(){
  int T;
  cin >> T;
  while(T--){
    int n, res = 1;
    cin >> n;
    for(int i = 0; i < n-1; i++){
      int in;
      cin >> in;
      res = (res*in)%1234567;
    }
    cout << res << endl;
  }
  return 0;
}
