#include<iostream>
using namespace std;

int main(){
	int a, b;
	cout<<"Enter any number: ";
	cin>>a;
	cout<<"The even numbers to that number is: ";
	
	for(b = 1; b <= a; b++){
		if(b % 2 == 0){
			cout<<b;
		}
	}
	
	return 0;
}
