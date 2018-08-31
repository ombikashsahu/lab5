#include<iostream>
using namespace std;
int main() {
int num;
cout<<"enter the number";
cin>>num;
if ((num%5==0) && (num%11==0))
{
cout<<"the number is divisible by 5 and 11";
}
else
{
cout<< "the number is not divisible by 5 and 11";
}
return 0;
}
