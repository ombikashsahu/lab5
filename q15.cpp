#include<iostream>
using namespace std;
int main() {
int n,count;
cout<< "enter a number";
cin>>n;
while (n>0){
n=n/10;
count++;
}
cout<<"number of digits in a number is"<<count;
return 0;
}
