#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	

	double initial_loan; 
	double rate_per_year;
	double amount_can_pay;

	
	cout << "Enter initial loan: ";
	cin >> initial_loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate_per_year;
	cout << "Enter amount you can pay per year: ";
	cin >> amount_can_pay;

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

	double PrevBalance = initial_loan;
	int year = 1;

	while (PrevBalance > 0) {
		double Interest = PrevBalance * rate_per_year/100;
		double Total = PrevBalance + Interest;
		double Payment = (Total <= amount_can_pay) ? Total : amount_can_pay;
		double  NewBalance = Total - Payment;
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year; 
	cout << setw(13) << left << PrevBalance;
	cout << setw(13) << left << Interest;
	cout << setw(13) << left << Total;
	cout << setw(13) << left << Payment;
	cout << setw(13) << left << NewBalance;
	cout << "\n";	

	PrevBalance = NewBalance;
	year++;

	}
	return 0;
}
