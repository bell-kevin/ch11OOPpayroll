// ch11OOPpayroll.cpp : Object-Oriented Programming approach to payroll
//

#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

class Employee
{
public:
	string employeeType;
	string employeeName;
	double employeePayRate;
public:
	// Constructor
	Employee(string type, string name, double payRate)
	{
		employeeType = type;
		employeeName = name;
		employeePayRate = payRate;
	}
	// Display function
	void displayEmployee()
	{
		cout << "Employee " << employeeName << " is " << employeeType << " and earns $" << employeePayRate;
			if (employeeType == "Hourly")
			{
				cout << " per hour." << endl;
			}
			else
			{
				cout << " per year." << endl;
			}
	}
};

class HourlyEmployee : protected Employee
{

private:
	double hoursWorked;
public:
	// Constructor
	HourlyEmployee(string name, double payRate, double hours) : Employee("Hourly", name, payRate)
	{
		hoursWorked = hours;
	}
	// Display function
	void displayHourlyEmployee()
	{
		Employee::displayEmployee();
	}
	// Calculate pay
	void calculatePay()
	{
		double grossPay = hoursWorked * employeePayRate;
		cout << "Gross pay for "<< hoursWorked <<" hours is $" << grossPay << endl;
	}
};

class SalariedEmployee : protected Employee
{

private:
	double weeksWorked;
public:
	// Constructor
	SalariedEmployee(string name, double payRate, double weeks) : Employee("Salaried", name, payRate)
	{
		weeksWorked = weeks;
	}
	// Display function
	void displaySalariedEmployee()
	{
		Employee::displayEmployee();
	}
	// Calculate pay
	void calculatePay()
	{
		double grossPay = employeePayRate / weeksWorked;
		cout << "Gross pay is $" << grossPay<< endl;
	}
};

int main()
{
	cout << "Chapter 11 Payroll by Kevin Bell\n\n";
	
	HourlyEmployee emp1("John Johnson", 10.00, 40);
	HourlyEmployee emp2("Mary Monson", 15.00, 35);
	SalariedEmployee emp3("Bob Beaver", 52000.00, 52);
	SalariedEmployee emp4("Sue Swanson", 60000.00, 52);

	emp1.displayHourlyEmployee();
	emp1.calculatePay();
	emp2.displayHourlyEmployee();
	emp2.calculatePay();
	emp3.displaySalariedEmployee();
	emp3.calculatePay();
	emp4.displaySalariedEmployee();
	emp4.calculatePay();

	system("pause");
	return 0;
}
	
