#include<iostream>
using namespace std;

int main(){
	int a, b;
	cout<<"Enter any number: ";
	cin>>a;
	cout<<"All the odd numbers til that number is: ";
	
	for(b = 1; b <= a; b += 2){
		if(b % 2 == 0){
			cout<<"Oops. something went wrong";
		}else{
			cout<<b;
		}
	}
	
	
	return 0;
}
