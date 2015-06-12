#include<bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n, h = 1;
    cin >> n;
    for(int i = 1; i <= n; i++){
      if(i%2) h*=2;
      else h++;
    }
    cout << h << endl;
  }
  return 0;
}
