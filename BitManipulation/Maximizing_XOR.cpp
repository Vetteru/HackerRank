#include<bits/stdc++.h>

using namespace std;

int main(){
  int L,R,ans=0;
  cin >> L >> R;
  for(int i = L; i <= R; i++)
    for(int j = i; j <= R; j++)
      ans = max(ans, i^j);
  cout << ans << endl;
  return 0;
}
