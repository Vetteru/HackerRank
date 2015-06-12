#include<bits/stdc++.h>

using namespace std;

int main(){
  int T; cin >> T;
  while(T--){
    int K; cin >> K;
    long long a = K/2;
    long long b = K-a;
    cout << a*b << endl;
  }
  return 0;
}
