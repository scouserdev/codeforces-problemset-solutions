#include <iostream>
using namespace std;
int main(){
  int a,b;
  cin>>a>>b;
  for (int i = 0; i < 1000000; i++) {
    a=3*a;
    b=2*b;
    if (a>b) {
      cout<<i+1;
      break;
    }
  }
  return 0;
}
