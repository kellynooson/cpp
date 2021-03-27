#include<iostream>
using namespace std;

int main(){
	int a, f, l, sum = 0;
	cout<<"Enter any number: ";
	cin>>a;
	
	l = a % 10;
	f = a;
	
	while(a >= 10){
		a = a / 10;
	}
	
	f = a;
	sum = f + l;
	cout<<"The sum of the first and last digits is "<<sum;
	
	return 0;
}
