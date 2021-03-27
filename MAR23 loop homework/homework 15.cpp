#include<iostream>
using namespace std;

int main(){
	int num, last, pro = 1;
	cout<<"Enter any number: ";
	cin>>num;
	
	while(num != 0){
		last = num % 10;
		num = num / 10;
		pro = pro * last;
	}
	cout<<"The product of the digits is: ";
	cout<<pro;
	
	return 0;
}
