#include<iostream>
using namespace std;

int main(){
	int a;
	cout<<"Enter any number: ";
	cin>>a;
	
	if(a % 5 == 0){
		cout<<"This number is divisible by 5"<<endl;
	}else{
		cout<<"This number isn't divisible by 5"<<endl;
	}
	
	
	if (a % 11 == 0){
		cout<<"This number is divisible by 11";
	}else{
		cout<<"This number isn't divisible by 11";
	}
	return 0;
}
