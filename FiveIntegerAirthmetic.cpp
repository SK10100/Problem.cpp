#include<iostream>
using namespace std;
int main() {
  //Decelare variable
  int FirstInteger;
  int SecondInteger;
  int ThirdInteger;
  int FourthInteger;
  int FifthInteger;
  int Sum,Difference,Multiplication,Division,Module;
  // take input from user(keyboard input)
  cout<<"Enter the FirstInteger :";
  cin>>FirstInteger;
  cout<<"Enter the SecondInteger :";
  cin>>SecondInteger;
  cout<<"Enter the ThirdInteger :";
  cin>>ThirdInteger;
  cout<<"Enter the FourthInteger :";
  cin>>FourthInteger;
  cout<<"Enter the FifthInteger :";
  cin>>FifthInteger;
  //processsing
  Sum = FirstInteger + SecondInteger + ThirdInteger + FourthInteger + FifthInteger;
  Difference = (FirstInteger+SecondInteger+ThirdInteger) - (FourthInteger+FifthInteger);
  Multiplication = FirstInteger * SecondInteger * ThirdInteger * FourthInteger * FifthInteger;
  Division = (FirstInteger+SecondInteger+ThirdInteger) / (FourthInteger+FifthInteger); 
  Module = (FirstInteger+SecondInteger+ThirdInteger) % (FourthInteger+FifthInteger);
  //output
  cout<<"Sum ="<< Sum<<endl;
  cout<<"Difference ="<< Difference<<endl;
  cout<<"Multipliication ="<< Multiplication<<endl;
  cout<<"Division ="<< Division<<endl;
  cout<<"Module ="<< Module;
  return 0;

}