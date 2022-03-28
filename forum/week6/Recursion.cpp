#include<iostream>
using namespace std;

int recursion(int a){
	if(a==1){
		return 1;
		
	}else if(a<0){
		cout<<"Error, shouldn't be less than 0.\n";
	}else if (a==0){
		return 1;
	}
	else {
		return a* recursion(a-1);
	}
}

int main(){
	int b;
	cout<<"Enter number: ";
	cin>>b;
	int c = recursion(b);
	if (b<0){
		cout<<"There is no result, error. " <<endl;
	}else{
		cout<<"Result = "<< c <<endl;
	}
	
}
