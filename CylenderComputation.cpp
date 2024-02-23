#include<iostream>
using namespace std;
int main() {
  //Decelare variable
  double radius;
  double height;
  const double pi=3.14;
  double volume,area;
  //input
  cout<<"Enter the value of radius:";
  cin>>radius;
  cout<<"Enterthe value of height:";
  cin>>height;
  //processing
  volume = pi*radius*radius*height;
  area = 2*pi*radius*height;
  //output
  cout<<"Volume of cylender="<<volume<<endl;
  cout<<"area of cylender="<<area;
return 0;

}