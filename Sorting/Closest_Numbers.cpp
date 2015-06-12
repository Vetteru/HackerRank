#include<bits/stdc++.h>

using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> vec(N), res;
  for(int i = 0; i < N; i++) cin >> vec[i];
  sort(vec.begin(), vec.end());
  int diff = INT_MAX;
  for(int i = 0; i+1 < (int)vec.size(); i++) diff = min(diff, abs(vec[i+1]-vec[i]));
  for(int i = 0; i+1 < (int)vec.size(); i++){
    if(diff == abs(vec[i+1]-vec[i])){
      res.push_back(vec[i]);
      res.push_back(vec[i+1]);
    }
  }

  for(int i = 0; i < (int)res.size(); i++){
    if(i) cout << " ";
    cout << res[i];
  }
  cout << endl;
  return 0;
}
