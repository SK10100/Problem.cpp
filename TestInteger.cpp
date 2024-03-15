/*test integer din <climits> header */
#include<iostream>
#include<climits>
using namespace std;
int main(){
  cout<<"int max= "<<INT_MAX<<endl;
  cout<<"int min= "<<INT_MIN<<endl;
  cout<<"usigned int max= "<<UINT_MAX<<endl;
  cout<<"long long max= "<<LLONG_MAX<<endl;
  cout<<"long long min= "<<LLONG_MIN<<endl;
  cout<<"Bits in char= "<<CHAR_BIT<<endl;
  cout<<"Char max= "<<CHAR_MAX<<endl;
  cout<<"Char min= "<<CHAR_MIN<<endl;
  cout<<"signed Char max= "<<SCHAR_MAX<<endl;
  cout<<"signed Char min= "<<SCHAR_MIN<<endl;
  cout<<"unsined Char max= "<<UCHAR_MAX<<endl;

  return 0;

}