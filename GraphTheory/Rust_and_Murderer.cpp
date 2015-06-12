#include<bits/stdc++.h>

using namespace std;

const int SIZE = 500001;
set<int> E[SIZE];

int main(){
  int T; cin >> T;
  while(T--){
    int N,M; cin >> N >> M;
    while(M--){
      int a,b;
      cin >> a >> b;
      E[a-1].insert(b-1);
      E[b-1].insert(a-1);
    }

    vector<int> T(N, INT_MAX);
    int S; cin >> S; S--;

    queue< pair<int,int> > Q;
    for(int i = 0; i < N; i++){
      if(E[S].count(i)) continue;
      T[i] = 1;
      Q.push(pair<int,int>(1,i));
    }
    set<int> remain = E[S];
    
    while(!Q.empty()){
      const pair<int,int> now = Q.front(); Q.pop();
      if(T[now.second] < now.first) continue;
      
      remain.erase(now.second);

      for(set<int>::iterator ite = remain.begin(); ite != remain.end(); ite++){
        if(E[now.second].count(*ite)) continue;
        pair<int,int> nex = now;
        nex.first++;
        nex.second = *ite;

        if(T[nex.second] > nex.first){
          T[nex.second] = nex.first;
          Q.push(nex);
        }
      }
    }

    bool first = true;
    for(int i = 0; i < (int)T.size(); i++){
      if(i == S) continue;
      if(!first) cout << " ";
      else first = false;
      cout << T[i];
    }
    cout << endl;

    for(int i = 0; i < N; i++) E[i].clear();
  }
  return 0;
}
