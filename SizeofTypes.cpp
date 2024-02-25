/*
*Print size of fundamental types
*/
#include<iostream>
using namespace std;
int main() {
  cout<<"Size of char : "<<sizeof(char)<< " Bytes "<<endl;
  cout<<"Size of int : "<<sizeof(int)<< " Bytes "<<endl;
  cout<<"Size of float : "<<sizeof(float)<<" Bytes "<<endl;
  cout<<"size of double : "<<sizeof(double)<<" Bytes "<<endl;
  cout<<"size of long : "<<sizeof(long)<<" Bytes " <<endl;
  cout<<"Size of long long : "<<sizeof(long long)<<" Bytes "<<endl;
  cout<<"Size of long double : "<<sizeof(long double)<< " Bytes "<<endl;
  cout<<"Size of bool : "<<sizeof(bool)<<" Bytes "<<endl;
  cout<<"Siz of void* : "<<sizeof(void*)<<" Bytes "<<endl;
  return 0;
}