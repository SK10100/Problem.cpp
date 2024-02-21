#include<iostream>
using namespace std;
int main()
{  //input
  int firstInt;
  int secondInt;
  int sum,sub,mul,div;
  cout<<"Enter the First Integer:";
  cin>>firstInt;
  cout<<"Enter the second Integer:";
  cin>>secondInt;
  //processing
  sum=firstInt+secondInt;
  sub=firstInt-secondInt;
  mul=firstInt*secondInt;
  div=firstInt/secondInt;
  //output
  cout<<"sum is ="<<sum<<endl;
  cout<<"sub is ="<<sub<<endl;
  cout<<"mul is ="<<mul<<endl;
  cout<<"div is ="<<div;
  return 0;
} 