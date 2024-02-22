/*
*Convert Tempreture between Cesius to Fahrenheit;
*/
#include<iostream>
using namespace std;

int main() {
  double Celsius,Fahrenheit;
  //Celsius to Fahrenheit;
  cout<<"Enter the value of Celsius :";
  cin>>Celsius;
  Fahrenheit = Celsius*9.0/5.0+32.0;
  cout<< Celsius << " degree in C"<<" ->= " << Fahrenheit << " degree in F " <<endl<<endl;
  //Fahrenheit to Celsius;
  cout<<"Enter the value of Fahernheit :";
  cin>>Fahrenheit;
  Celsius = (Fahrenheit-32.0)*5.0/9.0;
  cout<<Fahrenheit << " degree in F"<<" ->= " << Celsius << " degree in C " <<endl;

  return 0;

}