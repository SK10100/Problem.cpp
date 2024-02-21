#include<iostream>
using namespace std;

int main() {
  int upperbound;
  int sum = 0;
  cout<<"Enter the upper bound for number :";
  cin>>upperbound;
  
  int number = 1;
  while(number <= upperbound) {
    if(number%13==0 || number%15==0 || number%17==0 && number%30!=0) {
      //if(number%30 != 0) {
        sum= sum + number;
  }
    
    number++;
  
  }
  cout<<"The sum of  all the number between 1 to "<<upperbound<<" tha are dicisible by 13 ,15 or 17 :"<<sum;
  
  return 0;
}