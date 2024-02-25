/*
*sum all the number between lowerbouund to upperbound
*/
#include<iostream>
using namespace std;
int main() {
  int upperbound;
  int lowerbound;
  int sum = 0;
  cout<<"Enter value of lowerbound:";
  cin>>lowerbound;
  cout<<"Enter the value of upperbound:";
  cin>>upperbound;
  int number=lowerbound;
  while(number<=upperbound) {
    sum = sum + number;
    number++;
  }
  cout<<"The sum from "<<lowerbound<<" to "<< upperbound <<","<< sum << endl;
  return 0;

}