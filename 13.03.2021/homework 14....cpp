#include<iostream>
using namespace std;

int main(){
	int x, y, z;
	cout<<"Enter 3 sides of a triangle: ";
	cin>> x, y, z;
	
	if((x + y) > z){
		cout<<"The triangle is correct"<<endl;	
	}	if((y + z) > x){
			cout<<"The triangle is correct"<<endl;
	}		if((x + z) > y){
				cout<<"The triangle is correct"<<endl;
	}		else if((x + z) < y){
				cout<<"The triangle isn't correct";
	}	else if((y + z) < x){
			cout<<"The triangle isn't correct";
	}else if((x + y) < z){
		cout<<"The triangle isn't correct";
	}
	
	return 0;
}
