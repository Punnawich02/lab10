#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
	double loan,rate,pay;
	
	cout << "Enter initial loan: ";
	cin >> loan;

	cout << "Enter interest rate per year (%): ";
	cin >> rate;

	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	double bal = loan ,interest ,total ,new_bal;
	int couter = 1;
	
	while(bal > 0.00){
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << couter;
		couter++;

		cout << setw(13) << left << bal;
		
		interest = (rate/100)*bal;
		cout << setw(13) << left << interest;

		total = bal + interest;
		cout << setw(13) << left << total;

		if(pay > total) pay = total;		
		cout << setw(13) << left << pay;

		new_bal = total - pay;
		cout << setw(13) << left << new_bal;
		bal = new_bal;

		cout << "\n";
	}	

	return 0;
}