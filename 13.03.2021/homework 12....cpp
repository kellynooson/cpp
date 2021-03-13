#include<iostream>
using namespace std; 

int main(){
	int m;
	cout<<"Enter any number between 1 through 12: ";
	cin>>m;
	
	if(m == 1){
		cout<<"This month has 31 days";
	}else if(m == 2){
		cout<<"This month has 30 days";
	}else if(m == 3){
		cout<<"This month has 31 days";
	}else if(m == 4){
		cout<<"This month has 30 days";
	}else if(m == 5){
		cout<<"This month has 31 days";
	}else if(m == 6){
		cout<<"This month has 30 days";
	}else if(m == 7){
		cout<<"This month has 31 days";
	}else if(m == 8){
		cout<<"This month has 30 days";
	}else if(m == 9){
		cout<<"This month has 31 days";
	}else if(m == 10){
		cout<<"This month has 30 days";
	}else if(m == 11){
		cout<<"This month has 31 days";
	}else if(m == 12){
		cout<<"This month has 30 days";
	}else{
		cout<<"WHOOPS! You didn't enter a number from 1 - 12";
	}
	
	return 0;
}
