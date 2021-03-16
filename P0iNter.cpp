#include<iostream>
using namespace std;

int main() {
    
  int a=3;
  int* b;
  b=&a;
  


  cout<<"Address of A " <<b<<endl;
  cout<<"Address of A " <<&a<<endl;

  cout<<"The value of Address " <<*b<<endl;
  
  int** c=&b;
  cout<< "Address of b "<<c<<endl;
  cout<< "Address of b " << b<<endl;
  cout<<" The value of Address of b " <<*c<<endl;
  cout<<"The value of Address of value_at(value_at c) " << **c<<endl; 
  return 0;
  }