#include<iostream>
using namespace std;

int main() {
    
  int a=3;
  int* b;
  b=&a;


  cout<<"Address of A" <<b<<endl;
  cout<<"Address of A" <<&a<<endl;

  cout<<"the value of Address" <<*b<<endl;

  return 0;
  }