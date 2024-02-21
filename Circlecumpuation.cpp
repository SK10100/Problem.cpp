#include<iostream>
using namespace std;
int main() {
  //variable deceleare
     double radius;
     const double pi=3.14;
     double area,perimeter;
  //input take fro user(keyboard input)
     cout<<"Enter the Radius of Circle :";
     cin>>radius;
  //processing   
     area = radius*radius*pi;
     perimeter = 2*pi*radius;
  //output
  cout<<"Area="<<area<<endl;
  cout<<"perimeter="<<perimeter;   
 
 return 0;


}