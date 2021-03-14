#include<iostream>
using namespace std;

int main(){
	double x, y, z;
	cout<<"Enter a cost price: ";
	cin>>x;
	cout<<"Enter a selling price: ";
	cin>>y;
	
	if(y < x){
		z = x - y;
		cout<<"The profit is "<< z; 
	}else if(y > x){
		z = y - x;
		cout<<"The loss is "<< z;
	}else{
		cout<<"There is no loss or profit";
	}
	
	return 0;
}
