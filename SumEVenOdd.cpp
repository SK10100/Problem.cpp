#include<iostream>
using namespace std;

int main() {
  int upperbound;
  int sumEven = 0;
  int sumOdd = 0;

  cout<<"Enter the upperbound :";
  cin>>upperbound;

  int number = 1;
  while(number<=upperbound) {
    if(number % 2 == 0){
     sumEven = sumEven + number;
    }else{
      sumOdd = sumOdd + number ;
    }
    number++;
  }
  cout<<"The sum of Odd number is :"<<sumOdd << endl;
  cout<<"The sum of Even Number is :"<<sumEven << endl;
  cout<<"The difference is :"<<sumOdd - sumEven <<endl;

  return 0;

}