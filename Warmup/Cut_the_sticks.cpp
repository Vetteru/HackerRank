#include<bits/stdc++.h>

using namespace std;

int main(){
  int n; cin >> n;
  vector<int> vec(n);
  for(int i = 0; i < n; i++) cin >> vec[i];
  sort(vec.begin(), vec.end());
  
  vector<int>::iterator ite = vec.begin();
  while(ite < vec.end()){
    vector<int>::iterator n = upper_bound(vec.begin(), vec.end(), *ite);
    cout << vec.end()-ite << endl;
    ite = n;
  }
  return 0;
}
