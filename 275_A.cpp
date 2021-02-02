#include<bits/stdc++.h>
using namespace std;
int main(){
  int input[3][3];
  int output[3][3];
for (int i = 0; i < 3; i++) {
  for (int j = 0; j < 3; j++) {
    cin>>input[i][j];
    output[i][j]=1;
  }
}
if (input[1][1]%2==0 && input[1][1]>0 ) {
  output[1][1]=1;
  output[1][0]=1;
  output[1][2]=1;
  output[0][1]=1;
  output[2][1]=1;
}
else{
  output[1][1]=0;
  output[1][0]=0;
  output[1][2]=0;
  output[0][1]=0;
  output[2][1]=0;
}
if (input[0][0]%2==0 && input[0][0]>0) {
  output[0][0]=1;
  output[1][0]=1;
  output[0][1]=1;

}
else{
  output[0][0]=0;
  output[1][0]=0;
  output[0][1]=0;
}
if (input[2][0]%2==0&& input[2][0]>0) {
  output[2][0]=1;
  output[1][0]=1;
  output[2][1]=1;

}
else{
  output[2][0]=0;
  output[1][0]=0;
  output[2][1]=0;
}
if (input[0][2]%2==0&& input[0][2]>0) {
  output[0][2]=1;
  output[1][2]=1;
  output[0][1]=1;

}
else{
  output[0][2]=0;
  output[1][2]=0;
  output[0][1]=0;
}
if (input[2][2]%2==0&& input[2][2]>0) {
  output[2][1]=1;
  output[1][2]=1;
  output[2][2]=1;

}
else{
  output[2][2]=0;
  output[1][2]=0;
  output[2][1]=0;
}
if (input[0][1]%2==0&& input[0][1]>0) {
  output[0][0]=1;
  output[1][1]=1;
  output[0][2]=1;
  output[0][1]=1;
}
else{
  output[0][0]=0;
  output[1][1]=0;
  output[0][2]=0;
  output[0][1]=0;
}
if (input[1][0]%2==0&& input[1][0]>0) {
  output[0][0]=1;
  output[1][1]=1;
  output[2][0]=1;
  output[1][0]=1;
}
else{
  output[0][0]=0;
  output[1][1]=0;
  output[2][0]=0;
  output[1][0]=0;
}
if (input[1][2]%2==0&& input[1][2]>0) {
  output[1][2]=1;
  output[1][1]=1;
  output[0][2]=1;
  output[2][2]=1;
}
else{
  output[1][2]=0;
  output[1][1]=0;
  output[0][2]=0;
  output[2][2]=0;
}
if (input[2][1]%2==0&& input[2][1]>0) {
  output[2][0]=1;
  output[1][1]=1;
  output[2][2]=1;
  output[2][1]=1;
}
else{
  output[1][1]=0;
  output[2][1]=0;
  output[2][0]=0;
  output[2][2]=0;
}
for (int i = 0; i < 3; i++) {
  for (int j = 0; j < 3; j++) {
    cout<<output[i][j];
  }
  cout<<endl;
}
  return 0;
}
