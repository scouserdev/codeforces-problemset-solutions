#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  string s;
  cin>>s;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n-1; j++) {
      if (s[j]=='B' && s[j+1]=='B') {
        s.erase(s.begin()+j+1);
      }
      else if (s[j]=='R' && s[j+1]=='R') {
        s.erase(s.begin()+j+1);
      }
      else if (s[j]=='G' && s[j+1]=='G') {
        s.erase(s.begin()+j+1);
      }
    }
}
  cout<<n-s.size();
  return 0;
}
