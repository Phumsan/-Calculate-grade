/*6206021630031 phumsan thongkum it1RA*/
#include<iostream>
using namespace std;
void main()
{
	int grade;
	cout << "==========Calculate grade==========\n";
	cout << "Enter your score : ";
	cin >> grade;
	if(grade >= 90 && grade <=100){
		cout <<"Your grade : A\n";
	}
	else if(grade >= 80 && grade <= 89){
		cout <<"Your grade : B\n";
	}
	else if(grade >= 70 && grade <= 79){
		cout <<"Your grade : C\n";
	}
	else if(grade >= 60 && grade <= 69){
		cout <<"Your grade : D\n";
	}
	else if(grade <= 59 && grade >= 0 ){
		cout <<"Your grade : F\n";
	}
	else{
		cout <<"Error!!!\n";
	}
	cout << "===================================\n";
}