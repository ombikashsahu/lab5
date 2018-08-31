#include<iostream>
using namespace std;
int main(){
int num, remainder;
cout<<"enter the number:";
cin>>num;
remainder = num% 2;
if (remainder ==0)
cout <<num<< "is an even integer"<< endl;
else
cout<<num<<"is an odd integer"<<endl;
return 0;
}
