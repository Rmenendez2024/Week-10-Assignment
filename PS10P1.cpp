#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
//the problem asks us to determine subtotal, tax amount, and total price for the input of quantity and price. 
//the void function will compute those and pass them on
void func_pricecalc(float qty, float price, float& subtotal, float& tax, float& total)
{
	//step 1: compute subtotal
	subtotal = qty * price;

	//step 2: compute tax amount
	tax = 0.07 * subtotal;

	//step 3: total with tax

	total = subtotal + tax;

}

//now for the main code

int main()
{
	string lname;
	float qty, price;
	float subtotal, tax, total,norder, ordersub, ordertax, ordertotal;

	ordersub = 0;
	ordertax = 0;
	ordertotal = 0;
	norder = 0;
	//this is just to count the number of orders
	cout << "if at any point in the process you would like to cancel, please press ctrl+z ";
	system("pause");

	cout << "Enter quantity and price";
	cin >> qty >> price;

	while (!cin.eof())
	{
	

		//now we use the function 

		func_pricecalc(qty, price, subtotal, tax, total);

		cout << setprecision(2) << fixed;
		cout << "Order subtotal is: $" << setw(8) << subtotal << endl;
		cout << "the tax assuming a 7% rate is: $" << setw(8) << tax << endl;
		cout << "the total with tax is: $" << setw(8) << total << endl;

		norder = norder + 1;
		ordertax = ordertax +tax;
		ordersub = ordersub + subtotal;
		ordertotal = ordertotal + total;
		cout << "Enter next quantity and price";
		cin >> qty >> price;
	}

	// after loop

	cout << endl;
	cout << "Number of orders processed: " << setw(8) << norder << endl;
	cout << "total subtotal or all orders before discount: $" << setw(8) << subtotal << endl;
	cout << "Total tax amount: $ " << setw(8) << ordertax << endl;
	cout << "total of all orders: $ " << setw(8) << ordertotal;
	



	system("pause");

	return 0;
}

