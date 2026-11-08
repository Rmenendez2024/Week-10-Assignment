#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

void func_widgets(float qty, float& Wcost, float& exprice, float& tax, float& total)
{
	if (qty > 10000)
		Wcost = 4.00;
	else if (qty >= 5000)
		Wcost = 5.00;
	else
		Wcost = 10.00;

	exprice = qty * Wcost;

	tax = exprice * 0.07;

	total = exprice + tax;

}

int main()
{
	float qty;
	float Wcost, exprice, tax, total, norders, torders;


	norders = 0;
	torders = 0;
	cout << "if at any point in the process you would like to cancel, please press ctrl+z ";
	system("pause");

	cout << "Enter quantity of widgets in order: ";
	cin >> qty;

	while (!cin.eof())
	{


		//now we use the function 

		func_widgets(qty, Wcost, exprice, tax, total);

		cout << setprecision(2) << fixed;
		cout << "number of widgets in the order: " << qty << endl;
		cout << "Cost per widgets based on quantity: $" << setw(8) << Wcost << endl;
		cout << "Order subtotal is: $" << setw(8) << exprice << endl;
		cout << "the tax assuming a 7% rate is: $" << setw(8) << tax << endl;
		cout << "the total with tax is: $" << setw(8) << total << endl;

		norders = norders + 1;
		torders = torders + total;
		cout << "Enter quantity of widgets in order: ";
		cin >> qty;
	}

	// after loop

	cout << endl;
	cout << "Number of orders processed: " << setw(8) << norders << endl;
	cout << "total of all orders: $ " << setw(8) << torders;




	system("pause");

	return 0;
}

