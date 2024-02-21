/*
*print all the leap years between start year to endyear;
*/
#include<iostream>
using namespace std;

int main() {
  int start_year;
  int end_year;
  int leap_year_counter=0;
  cout<<"Enter the start_year : ";
  cin>>start_year;
  cout<<"Enter the end_yaer : ";
  cin>>end_year;
  int year =start_year;
  while(year<=end_year) {
    if(year % 4 == 0 && year % 100 !=0 || year % 400==0){
      cout<<year<<endl;
    ++leap_year_counter;
    }
    year++;
  }
  cout<<"Number of leap years:"<<leap_year_counter;

 return 0;

}