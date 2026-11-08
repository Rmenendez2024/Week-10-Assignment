#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

void func_tuition(float hrs, float finaid, float& tuition_owed, float& tuition_subtotal)
{
	tuition_subtotal = hrs * 250;

	tuition_owed = tuition_subtotal - finaid;

}

int main()
{
	string lname;
	float hrs, finaid;
	float nstudents, tuitionavg, tuition_owed, tuition_subtotal, t_tuition;
	tuitionavg = 0;
	nstudents = 0;
	t_tuition = 0;

	cout << "if at any point in the process you would like to cancel, please press ctrl+z ";
	system("pause");

	cout << "enter the student's last name: ";
	cin >> lname;
	cout << "enter the credit hours taking: ";
	cin >> hrs;
	cout << "enter any financial aid given";
	cin >> finaid;

	while (!cin.eof())
	{


		//now we use the function 
		func_tuition(hrs, finaid, tuition_owed, tuition_subtotal);


		cout << setprecision(2) << fixed;
		cout << "student last name: " << setw(8) << lname << endl;
		cout << "tuition owed before financial aid: $" << setw(8) << tuition_subtotal << endl;
		cout << "tuition owed after applying financial aid: $" << setw(8) << tuition_owed << endl;
		t_tuition = tuition_owed + t_tuition;
		nstudents = nstudents + 1;

		cout << "enter the student's last name: ";
		cin >> lname;
		cout << "enter the credit hours taking: ";
		cin >> hrs;
		cout << "enter any financial aid given";
		cin >> finaid;

	}
	cout << endl;
	tuitionavg = t_tuition / nstudents;
	cout << "Number of students: " << setw(8) << nstudents << endl;
	cout << "tuition average of students entered: $" << setw(8) << tuitionavg << endl;
	cout << "total tuition of all students entered: $" << setw(8) << t_tuition << endl;



	system("pause");

	return 0;
}