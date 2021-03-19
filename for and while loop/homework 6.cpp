#include<iostream>
using namespace std;

int main(){
	int a, b, c = 0;
	cout<<"Enter any number: ";
	cin>>a;
	
	for(b = 1; b <= a; b++){
		c += b;
	}
	cout<<"The sum all the way to that number is: ";
	cout<<c;
	
	return 0;
}
