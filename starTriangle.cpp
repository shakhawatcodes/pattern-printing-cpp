#include <iostream>// programm to make Star Triangle.
using namespace std;
int main(){
  int m;
  cout<<"Enter the number of Rows:";//row number input nilam.
  cin>>m;
  
  for(int i=1;i<=m;i++){
     for(int j=1;j<=i;j++){//nested for loop
    cout<<"*";
  } cout<<endl;
}


}