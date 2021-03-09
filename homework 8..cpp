#include<iostream>
using namespace std;

int main(){
	int y;
	cout<<"Enter any year: ";
	cin>>y;
	
	if (((y % 100 == 0)&& (y % 4 == 0)) || (y % 400 == 0)){
		cout<<"This year is a leap year.";
	}else{
		cout<<"This year is a normal year.";
	}
	
	return 0;
}
