//this file is a compilation for all functions used in the problem sets. im unsure if having them here will work the same way as in the main cpp file
//but this is so they can be accessed and reviewed easily.

//problem 1

void func_pricecalc(float qty, float price, float& subtotal, float& tax, float& total)
{
	//step 1: compute subtotal
	subtotal = qty * price;

	//step 2: compute tax amount
	tax = 0.07 * subtotal;

	//step 3: total with tax

	total = subtotal + tax;

}


//problem 2

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


//problem 3

void func_tuition(float hrs, float finaid, float& tuition_owed, float& tuition_subtotal)
{
	tuition_subtotal = hrs * 250;

	tuition_owed = tuition_subtotal - finaid;




//problem 4

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

//problem 5

void func_investment(float amt, float int_five, float int_ten, float& amt_five, float& amt_ten)
{
	//since it is asking to do it to a power, we need to do each amount seperately 
	//unsure if the pow function will bring an error since its supposed to take doubles

	amt_five = amt * pow(1 + int_five, 5);

	amt_ten = amt * pow(1 + int_ten, 10);

}
