#include<iostream>
using namespace std;

int main(){
	int a, b, c, d, e, av;
	cout<<"Enter your grade marks: ";
	cin>>a>>b>>c>>d>>e;
	
	av = (a + b + c + d + e) / 5;
	
	if(av >= 90){
		cout<<"This is grade is an A";
	}else if(av >= 80){
		cout<<"This grade is a B";
	}else if(av >= 60){
		cout<<"This grade is a C";
	}else if(av >= 30){
		cout<<"This grade is a D";
	}else{
		cout<<"This grade is an F";
	}
	
	return 0;
}
