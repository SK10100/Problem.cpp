#include<iostream>
using namespace std;

int main() {
  int Denominator;
  double sum = 0.0 ;
  cout<<"Enter Denominator :";
  cin>>Denominator;
  
  int n = 1;
  while(n<=Denominator){
    Denominator=Denominator*2;
    sum = sum+n;
    n++;
  }
  cout <<" sum is :"<<sum<<endl;

  return 0;
}