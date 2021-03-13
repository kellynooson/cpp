#include<iostream>
using namespace std;

int main(){
	int an1, an2, an3, sum;
	cout<<"Enter 3 angles of a triangle: ";
	cin>> an1, an2, an3;
	
	sum = an1 + an2 + an3;
	
	if(sum == 180){
		cout<<"Triangle isn't correct.";
	}else{
		cout<<"Triangle is correct";
	}
	
	return 0;
}
