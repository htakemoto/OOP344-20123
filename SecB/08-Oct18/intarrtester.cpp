#include <iostream>
using namespace std;
#include "intarr.h"

int main(){
  IntArr A(10);
  int i;
  for(i=0;i<120;i++){
    A[i] =  i;
   // A.operator[](i) = i* 100;
  }
  for(i=0;i<A.size();i++){
    cout<<A[i]<<", ";
  }
  cout<<endl;
  cout<<"Size of the array: "<<A.size()<<endl;

  return 0;
}