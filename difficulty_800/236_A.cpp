#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  int n=s.length();
  int count=n;
  bool visited[n];
  for (int i = 0; i < n; i++) {
  visited[i] = false;
  }
  for (int i = 0; i < n-1; i++) {
    if (visited[i]==true) continue;
     for (int j = i+1; j <n; j++) {
       if (s[i]==s[j]) {
         visited[j]=true;
         count--;
       }
     }
  }
  if (count%2==0) {
    cout<<"CHAT WITH HER!";
  }
  else cout<<"IGNORE HIM!";
  return 0;
}
