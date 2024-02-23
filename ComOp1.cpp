/*
*The program return the boolen value like: true = 1 and false = 0;
*/
#include<iostream>
using namespace std;

int main() {
  int x;
  cout<<"x is :";
  cin>>x;
  if(x>=0 && x<=100){
    cout<<true;
}else{
  cout<< false;
}
  
  return 0;
}