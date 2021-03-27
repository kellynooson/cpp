#include<iostream>
using namespace std;

int main(){
	int a, sum = 0;
	cout<<"Enter any number: ";
	cin>>a;
	
	while(a != 0){
		sum += a % 10;
		a = a / 10;
	}
	
	cout<<"The sum of the digits is "<<sum;
	
	return 0;
}
