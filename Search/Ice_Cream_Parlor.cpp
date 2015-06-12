#include<bits/stdc++.h>

using namespace std;

typedef pair<int,int> P;

const int SIZE = 10001;

int main(){
  int T; cin >> T;
  while(T--){
    int N,M; cin >> M >> N;
    vector<int> vec[SIZE], in(N);
    for(int i = 0; i < N; i++){
      cin >> in[i];
      vec[in[i]].push_back(i+1);
    }
    for(int i = 0; i < N; i++){
      if(M-in[i] < 0) continue;
      vector<int> p = vec[M-in[i]];
      for(int j = 0; j < (int)p.size(); j++)
        if(i+1 < p[j]) cout << i+1 << " " << p[j] << endl;
    }
  }
  return 0;
}
