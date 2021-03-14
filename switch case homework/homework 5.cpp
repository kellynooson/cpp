#include<iostream>
using namespace std;

int main(){
	int a, b;
	cout<<"Enter 2 numbers: ";
	cin>>a>>b;
	
	switch(a > b){
		case 1:
			cout<<"Your first number is maximum";
			break;
		case 0:
			cout<<"Your second number is maximum";
			break;
	}
	
	return 0;
}
