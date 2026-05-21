#include <iostream>//programm to print Albhabet (A,B,C,D)square.
using namespace std;
int main(){

  int n;//n->rows,n->cols(number)
cout<<"Enter the side of square:";//input n;
cin>>n;
for(int i=1;i<=n;i++){ 

for(int j=1;j<=n;j++){

  cout<<(char)(j+64);//typecasting and 64 is added because in ASCII table A=65,B=66,C=67,D=68 and so on. so j+64 will give us the required alphabet.
}

cout<<endl;

  }
  //dry & run in c++key notes..









}