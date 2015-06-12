#include<bits/stdc++.h>

using namespace std;

typedef pair<int,int> P;
const int SIZE = 101;
int to[SIZE];

int main(){

  int T;
  cin >> T;
  while(T--){
    for(int i = 0; i < SIZE; i++) to[i] = i;
    int s,l;
    scanf("%d,%d",&s,&l);
    for(int i = 0; i < s+l; i++){
      int f,t;
      scanf("%d,%d",&f,&t);
      to[f] = t;
    }

    vector<int> T(SIZE, INT_MAX);
    priority_queue<P, vector<P>, greater<P> > Q;
    T[1] = 0;
    Q.push(P(0,1));
    while(!Q.empty()){
      const P now = Q.top();
      Q.pop();

      if(now.first > T[now.second]) continue;

      for(int i = 1; i <= 6; i++){
        P nex = now;
        nex.first++;
        nex.second += i;
        if(nex.first > 100) continue;
        nex.second = to[nex.second];
        if(nex.first < T[nex.second]){
          T[nex.second] = nex.first;
          Q.push(nex);
        }
      }
    }
    cout << T[100] << endl;
  }
  return 0;
}
