#include <iostream>  
using namespace std;  

int main(){
	int a = 1;
	int b;
	cout << "Enter an interger: ";
	cin >> b;
	
	if (b>=0){
		for(int y = 1; y <= b; y++){
			a = a*y;
		}	
		cout << a;
	}else{
		cout<<"Error, interger shouldn't be less than 0.";
	}
}  
