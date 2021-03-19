#include<iostream>
using namespace std;

int main(){
	int a, b, c, d = 0;
	cout<<"Enter 1st number: ";
	cin>>a;
	cout<<"Enter 2nd number: ";
	cin>>b;
	
	for (c = a; c <= b; c++){
		d += c;
		cout<<"The sum is: ";
		cout<<d;
	}
	
	return 0;
}
