#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
using namespace std;
ofstream myfile("Data.txt", ios::app);
struct product
{
	int product::product_code;
	string product::product_name;
	int product::quantity;
	float product::product_price;
};
void add()
{
	system("cls");
	cout << "How many products do you wanna add?\n";
	int size;
	cin >> size;
	product *ptr = new product[size];
	int num = 0;
	for (int i = 0; i < size; i++)
	{
		system("cls");
		num = num +1;
		cout << "Product number " << num << endl;
		
		myfile << "===============================================\n";
		myfile << "Product number " << num << endl;

		cout << "Enter your product code.\n";
		cin >> ptr->product_code;

		myfile << "Product code: " << ptr->product_code << endl;

		cout << "Enter your product name.\n";
		cin >> ptr->product_name;

		myfile << "Product name: " << ptr->product_name << endl;

		cout << "Enter your product quantity.\n";
		cin >> ptr->quantity;

		myfile << "Product quantity: " << ptr->quantity << endl;

		cout << "Enter your product price.\n";
		cin >> ptr->product_price;

		myfile << "Product price: " << ptr->product_price << endl;

		myfile << "===============================================\n";
	}


	system("cls");

	cout << "Your product added successfully.\n" << endl;
	cout << "Wanna add one more?\n";
	cout << "y or n \n";
	char x;
	cin >> x;
	if (x == 'y' || x == 'Y')
	{
		add();
	}
	if (x == 'n' || x == 'N')
	{
		cout << "Let's do another thing ;) \n";
		system("pause");
	}
	else
	{
		cout << "Enter 'y' for yes or 'n' for no\n";
	}
}
product display_product()
{
	while (!myfile.eof())
	{
		for (int i = 0; ; i++)
		{

		}

	}
	
}
void modify()
{
	system("cls");
	cout << "1. Search by code.\n";
	cout << "2. Search by name.\n";

	int input;
	cin >> input;
	// --> Actions depends on user input for main menu
	switch (input)
	{

	case 1:;
		system("cls");
		

		break;


	case 2:;
		system("cls");
		

		break;
	}
}