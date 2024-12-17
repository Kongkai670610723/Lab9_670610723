#include<iostream>
using namespace std;

//Write the function printO() here
void printO(int i,int j){
	if(i <= 0 || j <= 0){
		cout << "Invalid input";
	}else{
		for(int count = 0;count < i;count++){
			for(int count1 = 0;count1 < j;count1++){
				cout << "O";
			}
			cout << "\n";
		}
		
	}
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
