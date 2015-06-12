#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
  ll r,c,t=0; cin >> r >> c;

  if(r%2==0){
    r--;
    t++;
  }
  
  cout << (r/2LL)*10LL+(c-1)*2LL+t << endl;
  return 0;
}
