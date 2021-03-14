#include<iostream>
using namespace std;

int main(){
	char a;
	cout<<"Enter any letter(including uppercases): ";
	cin>>a;
	
	switch(a){
		case 'a' || 'e' || 'i' || 'o' || 'u' || 'A' || 'E' || 'I' || 'O' || 'U':
			cout<<"This is a consonant";
		default:
			cout<<"This is a vowel";
	}
		
	return 0;
}

