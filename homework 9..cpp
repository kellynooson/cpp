#include<iostream>
using namespace std;

int main(){
	char a;
	cout<<"Enter any letter: ";
	cin>>a;
	
	if ((a >= 'a' && a <='z')||(a >= 'A' && a <= 'Z')){
		cout<<"This letter is an alphebet";
	}else{
		cout<<"This letter is NOT an alphebet";
	}
	
	return 0;
}
