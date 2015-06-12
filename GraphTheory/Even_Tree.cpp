#include<bits/stdc++.h>

using namespace std;

const int SIZE = 101;
int ans = 0;
vector<int> E[SIZE], rE[SIZE];

int count(int pos){
  int res = 1;
  for(int i = 0; i < (int)E[pos].size(); i++) res += count(E[pos][i]);
  if(res%2==0) ans++;
  return res;
}

int main(){
  int N,M;
  cin >> N >> M;
  while(M--){
    int a,b;
    cin >> a >> b;
    a--; b--;
    E[b].push_back(a);
    rE[a].push_back(b);
  }
  int root = N-1;
  while(!rE[root].empty()) root = rE[root][0];
  count(root);
  cout << ans-1 << endl;
  return 0;
}
