#include<iostream>
#include<fstream>
#include<algorithm>
#include<string>
#include"Functions.h"

using namespace std;
void main()
{
	for (;;)
	{
	
#pragma region(main menu)
		// --> Showing the main options <-- //
		system("cls");
		cout << "1) Administrator.\n";
		cout << "2) Customer.\n";
		cout << "3) Exit.\n";
#pragma endregion
		int input; // --> user input for main menu [Declaration]
		char char_input; // --> user input for secound menu [Declaration]
		cin >> input;

		// --> Actions depends on user input for main menu
		switch (input)
		{

		case 1:;
			system("cls");
			cout << "a. Add Product.\n";
			cout << "b. Modify Product.\n";
			cout << "c. Delete Product.\n";
			cout << "d. Disply Product.\n";

			break;


		case 2:;
			system("cls");
			cout << "e. Buy.\n";
			cout << "f. Return.\n";

			break;

		case 3:;
			exit(0);
			break;

		}

		cin >> char_input;
		// --> Actions depends on user input for secound menu
		switch (char_input)
		{

			//If administrator wanna add product
		case 'a':;
			system("cls");
			add();
			break;
			//If administrator wanna modify product
		case 'b':;
			system("cls");


			break;
			//If administrator wanna delete product
		case 'c':;
			system("cls");

			break;
			//If administrator wanna display product
		case 'd':;
			system("cls");

			break;
			//If customer wanna buy product
		case 'e':;
			system("cls");

			break;
			//If customer wanna return product
		case 'f':;
			system("cls");

			break;
		}
	}
}