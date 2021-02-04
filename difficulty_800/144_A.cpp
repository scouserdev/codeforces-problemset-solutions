//accepted
#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int soldiers[n];
  for (int i = 0; i < n; i++) {
    cin>>soldiers[i];
  }
  int max=soldiers[0];
  int min=soldiers[0];
  for (int i = 0; i < n-1; i++) {
    if (max<soldiers[i+1]){
      max=soldiers[i+1];
    }
if (soldiers[i+1]<min) {
  min=soldiers[i+1];
}
  }
  int max_index,min_index;
  for (int i = 0; i < n; i++) {
    if (max==soldiers[i]) {
      max_index=i;
      break;
    }
  }
  for (int i = n-1; i >=0; i--) {
    if (min==soldiers[i]) {
      min_index=i;
      break;
    }
  }

  if(max_index>min_index) cout<<max_index+(n-1-min_index)-1;
  else cout<<max_index+(n-1-min_index);

  return 0;
}
