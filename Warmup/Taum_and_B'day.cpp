#include<bits/stdc++.h>

using namespace std;

int main(){
  int T; cin >> T;
  while(T--){
    long long X,Y,Z,B,W; cin >> B >> W >> X >> Y >> Z;
    cout << B*min(X,Y+Z) + W*min(Y,X+Z) << endl;
  }
  return 0;
}
