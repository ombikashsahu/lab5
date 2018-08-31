#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter a positive number to find a multiplication table";
cin>>n;
int a=1;
while(a<=10){
	cout<<n<<"*"<<a<<"="<<n*a<<endl;
	a++;
}


return 0;
}
