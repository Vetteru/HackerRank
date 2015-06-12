#include<bits/stdc++.h>

using namespace std;

int main(){
  int T;
  cin >> T;
  while(T--){
    int n;
    cin >> n;
    vector<int> vec(n), sum(n+1,0);
    bool flg = false;
    int ans[2] = {INT_MIN, 0};
    for(int i = 0; i < n; i++) cin >> vec[i];
    for(int i = 0; i < n; i++){
      sum[i+1] = (sum[i]>0?sum[i]+vec[i]:vec[i]);
      ans[0] = max(ans[0], sum[i+1]);
      if(vec[i] >= 0){
        flg = true;
        ans[1] += vec[i];
      }
    }

    if(!flg){
      ans[1] = INT_MIN;
      for(int i = 0; i < n; i++) ans[1] = max(ans[1], vec[i]);
    }
    cout << ans[0] << " " << ans[1] << endl;
  }
  return 0;
}
