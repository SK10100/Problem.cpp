//sum all the odd number between 1 to an upperbound
#include<iostream>
using namespace std;
int main() {
  int upperbound;
  int sum = 0;
  cout<<"Enter The Upper Bound : " ;
  cin>>upperbound;
  int number = 1 ;
  while(number<=upperbound) {
  sum = sum + number ;
  number = number + 2 ;
  }
   cout<<"sum of odd number 1 to " << upperbound <<" : " << sum;
   
   return 0;

}