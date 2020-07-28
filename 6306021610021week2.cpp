#include <iostream>
#include <string>
#include <math.h>
using namespace std ;
int main ()
{
	string Name,Surname;
	float Salary,Sale;
	short Commission;
	float Total;
	cout << "***************************************" << endl ;
	cout << "Enter Name    : ";
	cin >> Name >> Surname;
	cout << "Enter Salary : ";
	cin >> Salary;
	cout << "Enter Sale   : " ;
	cin >> Sale;
	cout << "Enter Commission Percent : ";
	cin >> Commission;
	cout << "-----------------------------------------" << endl ;
	cout << "Your Name = " << Name << " " << Surname << endl ;
	cout << "Total Revenue " << (Sale*Commission/100)+Salary <<" "<< "Bath" << endl ;
	cout << "-----------------------------------------" << endl ;
	system ("pause");
	return (0) ;
}