#include<iostream>
using namespace std;

int main(){
	int a;
	cout<<"Enter any number: ";
	cin>>a;
	
	switch (a % 2){
		case 0:
			cout<<"This number is even";
			break;
		case 1:
			cout<<"This number is odd";
			break;
	}
	
	return 0;
}
