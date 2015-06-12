#include<bits/stdc++.h>

using namespace std;

const int SIZE = 300;
long long cnt[SIZE] = {};

int main(){
  int N,M;
  cin >> N >> M;
  cnt[0] = 1;
  for(int i = 0; i < M; i++){
    long long c; cin >> c;
    for(int j = 0; j+c <= N; j++) cnt[j+c] += cnt[j];
  }
  cnt[0] = 0;
  cout << cnt[N] << endl;
  return 0;
}
