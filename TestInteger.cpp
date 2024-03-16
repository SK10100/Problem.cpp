/*test integer in <climits> and <cfloat> header */
#include<iostream>
#include<climits>
#include<cfloat>
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
  cout<<"unsigned int min= "<<SHRT_MIN<<endl;
  cout<<"unsigmed long max= "<<ULONG_MAX<<endl;
  cout<<"-----------------------NOW for <cfloat>------------------------"<<endl;
  cout<<"float min integer Digits= "<<FLT_DIG<<endl;
  cout<<"double min integer Digits= "<<DBL_DIG<<endl;
  cout<<"long double min integer digits= "<<LDBL_DIG<<endl;
  cout<<"float max integer digits= "<<FLT_MANT_DIG<<endl;
  cout<<"double max integer digits= "<<DBL_MANT_DIG<<endl;
  cout<<"long double max integer digitas= "<<LDBL_MANT_DIG<<endl;
  return 0;

}
