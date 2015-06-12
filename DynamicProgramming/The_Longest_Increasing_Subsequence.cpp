#include<bits/stdc++.h>

using namespace std;

int main(){
  int N; cin >> N;
  vector<int> dp(N,INT_MAX);
  for(int i = 0; i < N; i++){
    int in; cin >> in;
    *lower_bound(dp.begin(), dp.end(), in) = in;
  }
  cout << lower_bound(dp.begin(), dp.end(), INT_MAX)-dp.begin() << endl;
  return 0;
}
