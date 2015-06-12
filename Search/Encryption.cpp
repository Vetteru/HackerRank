#include<bits/stdc++.h>

using namespace std;

int main(){
  string s;
  cin >> s;
  int r = floor(sqrt(s.length())), c = ceil(sqrt(s.length()));
  if(r*c < (int)s.length()) r++;
  vector< vector<char> > vec(r, vector<char>(c,'?'));

  for(int i = 0; i < r; i++)
    for(int j = 0; j < c; j++)
      if(i*c+j < (int)s.length()) vec[i][j] = s[i*c+j];
  
  for(int j = 0; j < c; j++){
    if(j) cout << " ";
    for(int i = 0; i < r; i++)
      if(vec[i][j] != '?') cout << vec[i][j];
  }
  return 0;
}
