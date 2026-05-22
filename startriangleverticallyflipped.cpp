//to print
//     *
//    **
//   ***
//  ****

#include <iostream>// 
using namespace std;
int main(){
  int m;
  cout<<"Enter the number of Rows:";//row number input nilam.
  cin>>m;
  
  for(int i=1;i<=m;i++){//  loop for rows
    for(int j=1;j<=m-i;j++){//loop for space
      cout<<" ";}
     for(int j=1;j<=i;j++){//loop for stars
    cout<<"*";
  } cout<<endl;



}}//oi dendiiii