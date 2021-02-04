//accepted
#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int inside=0;
  int max=0;
  for (int i = 0; i < n; i++) {
    int exit,enter;
    cin>>exit>>enter;
    inside=(inside-exit)+enter;
    if(inside>max) max=inside;
  }
  cout<<max;
  return 0;
}
