#include<iostream>
using namespace std;

int main(){
	int a, b, c;
	cout<<"Enter 3 sides of a triangle: ";
	cin>>a>>b>>c;
	
	if(a == b && b == c){
		cout<<"This is an equilateral triangle";
	}else if(a == b || a == c || b == c){
		cout<<"This is an isosceles triangle";
	}else{
		cout<<"This is a scalene triangle";
	}
	
	return 0;
}
