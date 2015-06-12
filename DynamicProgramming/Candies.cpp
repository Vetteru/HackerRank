#include<bits/stdc++.h>

using namespace std;

const int SIZE = 1e5+1;
long long num[SIZE];

long long find(int p, const vector<int>& vec){
  if(num[p] != -1) return num[p];
  long long res = 1;
  for(int i = -1; i <= 1; i+=2){
    int nex = p+i;
    if(nex < 0 || nex >= (int)vec.size() || vec[p] <= vec[nex]) continue;
    res = max(res, find(nex,vec)+1);
  }
  return num[p] = res;
}

int main(){
  int N; cin >> N;
  vector<int> vec(N);
  for(int i = 0; i < N; i++) cin >> vec[i];
  memset(num, -1, sizeof(num));
  long long res = 0;
  for(int i = 0; i < N; i++) res += find(i,vec);
  cout << res << endl;
  return 0;
}
