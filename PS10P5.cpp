#include<iostream>
#include<iomanip>
#include<string>
#include < math.h>
using namespace std;

void func_investment(float amt, float int_five, float int_ten, float& amt_five, float& amt_ten)
{
	//since it is asking to do it to a power, we need to do each amount seperately 
	//unsure if the pow function will bring an error since its supposed to take doubles


	amt_five = amt * pow(1 + int_five, 5);

	amt_ten = amt * pow(1 + int_ten, 10);

}

int main()
{
	float amt, int_five, int_ten;
	float amt_five, amt_ten, n_investments;

	n_investments = 0;
	//while the problem doesnt ask directly for number of investments, i'll still add in a counter value to account for the number of times 
	//the loop is active. 

	cout << "if at any point in the process you would like to cancel, please press ctrl+z ";
	system("pause");

	cout << "Enter amount invested: ";
	cin >> amt;
	cout << "Enter the five year investment rate (eg. 0.9 0.8 etc): ";
	cin >> int_five;
	cout << "Enter the ten year investment rate (eg. 0.9 0.8 etc): ";
	cin >> int_ten;

	while (!cin.eof())
	{


		//now we use the function 

		func_investment(amt, int_five, int_ten, amt_five, amt_ten);

		cout << setprecision(2) << fixed;
		cout << "base investment given: $" << amt << endl;
		cout << "five year interest rate: " << setw(8) << int_five << endl;
		cout << "five year interest rate: " << setw(8) << int_ten << endl;
		cout << "amount after five years: $" << setw(8) << amt_five << endl;
		cout << "amount after ten years: $" << setw(8) << amt_ten << endl;

		n_investments = n_investments + 1;
		cout << "Enter amount invested: ";
		cin >> amt;
		cout << "Enter the five year investment rate (eg. 0.9 0.8 etc): ";
		cin >> int_five;
		cout << "Enter the ten year investment rate (eg. 0.9 0.8 etc): ";
		cin >> int_ten;
	}

	cout << endl;
	cout << "Number of investments processed: " << setw(8) << n_investments << endl;

	system("pause");

	return 0;
}