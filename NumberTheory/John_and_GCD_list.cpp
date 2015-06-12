#include<bits/stdc++.h>

using namespace std;

#define lcm(a,b) (a)/__gcd(a,b)*(b)

int main(){
  int T; cin >> T;
  while(T--){
    int n; cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++) cin >> vec[i];
    cout << vec[0];
    for(int i = 0; i+1 < n; i++) cout << " " << lcm(vec[i], vec[i+1]);
    cout << " " << vec.back() << endl;
  }
  return 0;
}
