#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int salary[3][4];
	
	//Looping for Input value to array
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<"Salary["<<i<<"]["<<j<<"]:";
			cin>>salary[i][j];
		}
	}
	
	//Looping output data from Array
	
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			//cout<<"Salary["<<i<<"]["<<j<<"]:";
			cout<<salary[i][j]<<" ";
		}
		cout<<endl;
	}	
	
	getch();
	return(0);
}