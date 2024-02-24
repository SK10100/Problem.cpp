#include<iostream>
using namespace std;
int main() {
  //variable decelaration
  int length;
  int breadth;
  int area,perimeter;
  //input
  cout<<"Enter the value Of length:";
  cin>>length;
  cout<<"Enter the value of breadth:";
  cin>>breadth;
  //processing
  area = length*breadth;
  perimeter = 2*(length+breadth);
  cout<<"Rectangle Area="<<area<<endl;
  cout<<"Rectangle perimeter="<<perimeter;

return 0;

}