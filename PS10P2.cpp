#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
//the problem asks us to determine weight charge and area charge based on given values, two IF functions will be necessary in this problem 
//the void function will compute those and pass them on

void func_postprice(float weight, float Zcode, float& Wcharge, float& Acharge, float& Wtotal, float& total)
{
	//starting with the IF functions 
	if (weight > 100)
		Wcharge = 0.02;
	else if (weight >= 50)
		Wcharge = 0.03;
	else
		Wcharge = 0.05;

	if (Zcode == 60171)
		Acharge = 2.00;
	else if (Zcode == 60172)
		Acharge = 2.50;
	else if (Zcode == 60635)
		Acharge = 3.00;
	else
		Acharge = 5.00;

// now we can compute postal charges
	Wtotal = Wcharge * weight;

	total = Wtotal + Acharge;
}

//now for the main script

int main()
{
	float weight, Zcode;
	float Wcharge, Acharge, Wtotal, total, nposts, posttotal;

	posttotal = 0;
	nposts = 0;

	cout << "if at any point in the process you would like to cancel, please press ctrl+z ";
	system("pause");

	cout << "enter the weight of the package in ounces";
	cin >> weight;
	cout << "enter the zip code (EG. 60526, 61801)";
	cin >> Zcode;

	while (!cin.eof())
	{


		//now we use the function 
		func_postprice(weight, Zcode, Wcharge, Acharge, Wtotal, total);
			
			
		cout << setprecision(2) << fixed;
		cout << "weight charge per ounce is found to be: $" << setw(8) << Wcharge << endl;
		cout << "area charge: $" << setw(8) << Acharge << endl;
		cout << "total postage cost is set at: $" << setw(8) << total << endl;
		posttotal = posttotal + total;
		nposts = nposts + 1;


		cout << "enter the weight of the package in ounces";
		cin >> weight;
		cout << "enter the zip code (EG. 60526, 61801)";
		cin >> Zcode;

	}

	// after loop

	cout << endl;
	cout << "Number of orders processed: " << setw(8) << nposts << endl;
	cout << "total postage processed: $" << setw(8) << posttotal << endl;




	system("pause");

	return 0;
}
