#include<iostream>
using namespace std;
int main() {
int i,n,sum;
cout<<"enter a number n ";
cin>>n;

i= 0;
while (i<=n)
{
sum=sum+i;
i= i+2;
}
cout<<"sum of first n natural numbers is"<<sum;
return 0;
}
