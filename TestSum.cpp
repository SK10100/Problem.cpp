#include<iostream>
using namespace std;
int main() {
  //declear variable
  int number1,number2,number3;
  int sum,product;
  //Take input from user
  cout <<"Enter three integers : "<<endl;
  cin>> number1 >> number2 >> number3;
  //do airthmetic operation(processing)
  sum = number1 + number2 + number3;
  product = number1 * number2 * number3;
  //display the result
  cout<<"The sum and product of : " << number1<<" , " << number2 <<" and "<< number3 <<" are : "<< sum<<" and " << product << endl;
  //inctement and decrement
  ++number1;
  --number2;
  number3++;
  cout<<"The new integers after increment and decrement are : " << number1<<" , " << number2 <<" and "<< number3 <<endl;
  //after incretment decrement airthmetic operation
  sum = number1 + number2 + number3;
  product = number1 * number2 * number3;
  //dispaly the new result
  cout<<"The new sum and product of : "<< number1<<" , " << number2 <<" and "<< number3 <<" are : "<< sum<<" and " << product << endl;
   
   return  0;

}