#include<iostream>
using namespace std;

int main(){
	int w;
	cout<<"Enter the day numbers (1,2,3,...,7)";
	cin>>w;
	
	if(w == 1){
		cout<<"This is Monday";
	}else if(w == 2){
		cout<<"This is Tuesday";
	}else if(w == 3){
		cout<<"This is Wednesday";
	}else if(w == 4){
		cout<<"This is Thursday";
	}else if(w == 5){
		cout<<"This is Friday";
	}else if(w == 6){
		cout<<"This is Saturday";
	}else if(w == 7){
		cout<<"This is Sunday";
	}else{
		cout<<"WHOOPS! You didn't enter a number 1-7";
	}
	
	return 0;
}
