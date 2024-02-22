/*
*Sum Harmonic Series: harmonic series is the infinite series formed by summing all positive unit fractions:
*1/n=1,1+1/2,1+3......to finite.(HERE n is Denominator)
*/
#include<iostream>
using namespace std;

int main() {
  int maxDenominator;
  double sum = 0.0;
  int counter =0;
  cout<<"Enter maxDenominator :";
  cin >> maxDenominator;
  int n = 1;
  while(n<=maxDenominator){
    counter++;
    sum = sum + n;
    n++;
    counter++;
  }
  cout<<" Sum of Harmonic series is :"<<sum<<endl;
  cout<<counter;
  return 0;
}