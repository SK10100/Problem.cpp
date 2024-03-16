#include<iostream>
using namespace std;
int main(){
  int number1=123;
  int number2=01234;
  int number3=0x1abc;
  int number4=0b1000101;
  long number = 12345678L;
  long long sum=123;
  long long bigNUmber=987654321LL;
  cout<<"NUmber in Decimal:\n";
  cout<<number1<<endl<<number2<<endl<<number3<<endl<<number4<<endl<<number<<sum<<endl<<bigNUmber<<endl;
  cout<<"------------NOW float and char Literals--------------"<<endl;
  //float average=55.66;
  float average=55.66f;
  cout<<average<<endl;
  char letter='a';
  char anotherLetter=98;
  cout<<letter<<endl;
  cout<<anotherLetter<<endl;
  anotherLetter+=2;
  cout<<anotherLetter<<endl;
  cout<<(int)anotherLetter<<endl;
   return 0;
}
