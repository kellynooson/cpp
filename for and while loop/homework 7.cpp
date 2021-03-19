#include<iostream>
using namespace std;

int main(){
	int a, b, c = 0;
	cout<<"Enter any number: ";
	cin>>a;
	
	for(b = 2; b <= a; b+=2){
		c += b;
	}
	cout<<"The sum to that number is: ";
	cout<<c;
	
	return 0;
}
