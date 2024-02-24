#include<iostream>
using namespace std;
int main() {
  int number1 = 3;
  int number2 = 5;
  int number3 = 4;
  int a, b, c;
  int sum , product;
  cout<<"Enter the value of a, c and b :";
  cin>> a >> b >> c;
  product = number1+a * number2+b * number3+c;
  sum = number1*a + number2*b + number3*c;
  cout<<"product and sum are :"<< product <<" and "<< sum <<endl;
  cout<<"-----------------------------------------------------------"<<endl;
  //rewrite program
  int  r=31, s=17, t=87;
  int number4, number5, number6;
  cout<<"Enter the value of three numbers(number4<number5<number6) are : ";
  cin>>number4 >> number5 >> number6;
  product = number4+r * number5+s * number6+t;
  sum = number4*r + number5*s + number6*t;
  cout<<"product and sum are : "<< product <<" and "<< sum <<endl;

  return 0;

}