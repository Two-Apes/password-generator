#include<iostream>
#include<stdlib.h>
#include<windows.h>

//using namespace std;
using std::cout;
using std::cin;
using std::string;
using std::terminate;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
// SetConsoleTextAttribute(hConsole, number - http://mypccourse.com/cosc1436/book/colors.jpg);

void purple() {
	SetConsoleTextAttribute(hConsole, 13);
}
void white() {
	SetConsoleTextAttribute(hConsole, 7);
}

// Difficulty - Easy
void geneasy(int rana) {
	int temp;
	string passwd = "0123456789abcdefghijklmnopqrstuvwxyz";
	for (int i = 0; i < rana; i++) {
		temp = rand() % passwd.length();
		cout << passwd[temp];
	}
}

// Without Symbols | Difficulty - Normal
void gensym(int ranb) {
	int temp;
	string passwd = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for (int i = 0; i < ranb; i++) {
		temp = rand() % passwd.length();
		cout << passwd[temp];
	}
}

// All | Difficulty - Hard
void genall(int ranc) {
	int temp;
	string passwd = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%^&*()./;'[]{}+-=";
	for (int i = 0; i < ranc; i++) {
		temp = rand() % passwd.length();
		cout << passwd[temp];
	}
}


int main() {
	int choice;
	purple();
	cout << R"( _____                             _    _____                     _           
|  _  |___ ___ ___ _ _ _ ___ ___ _| |  |   __|___ ___ ___ ___ ___| |_ ___ ___ 
|   __| .'|_ -|_ -| | | | . |  _| . |  |  |  | -_|   | -_|  _| .'|  _| . |  _|
|__|  |__,|___|___|_____|___|_| |___|  |_____|___|_|_|___|_| |__,|_| |___|_|  
                                                                              
)";
	SetConsoleTextAttribute(hConsole, 5);
	cout << "\t\t\t   _____ _ _   _____     _   \n";
	cout << "\t\t\t  |   __|_| |_|  |  |_ _| |_ \n";
	cout << "\t\t\t  |  |  | |  _|     | | | . |\n";
	cout << "\t\t\t  |_____|_|_| |__|__|___|___|\n";

	white();
	cout << "\n\nEnter your choice:\n[";
	purple();
	cout << "1";
	white();
	cout << "] Generate a new password ";
	purple();
	cout << "|";
	white();
	cout << " Custom\n[";
	purple();
	cout << "2";
	white();
	cout << "] Generate a new password ";
	purple();
	cout << "|";
	white();
	cout << " Difficulty\n[";
	purple();
	cout << "3";
	white();
	cout << "] Exit\n";
	cout << "\n[";
	purple();
	cout << "+";
	white();
	cout << "] ";
	cin >> choice;
	switch(choice)
	{
		case 1:
			int length;
			int sym;
			cout << "\nEnter the length of your password:\n";
			cout << "\n[";
			purple();
			cout << "+";
			white();
			cout << "] ";
			cin >> length;
			cout << "\nDo you want symbols in your password:\n[";
			purple();
			cout << "1";
			white();
			cout << "] Yes (y)\n[";
			purple();
			cout << "2";
			white();
			cout << "] No  (n)\n";
			cout << "\n[";
			purple();
			cout << "+";
			white();
			cout << "] ";
			cin >> sym;
			if (sym == 1) {
				cout << "\nYour Password is: ";
				purple();
				genall(length);
				white();
			}
			else if (sym == 2) {
				cout << "\nYour Password is: ";
				purple();
				gensym(length);
				white();
			}
			else {
				return 0;
			}
			cout << "\n\n";
			system("pause");
			system("cls");
			main();
			break;

		case 2:
			system("cls");
			int choice2;
			purple();
			cout << R"( _____                             _    _____                     _           
|  _  |___ ___ ___ _ _ _ ___ ___ _| |  |   __|___ ___ ___ ___ ___| |_ ___ ___ 
|   __| .'|_ -|_ -| | | | . |  _| . |  |  |  | -_|   | -_|  _| .'|  _| . |  _|
|__|  |__,|___|___|_____|___|_| |___|  |_____|___|_|_|___|_| |__,|_| |___|_|  
                                                                              
)";
			SetConsoleTextAttribute(hConsole, 5);
			cout << "\t\t\t   _____ _ _   _____     _   \n";
			cout << "\t\t\t  |   __|_| |_|  |  |_ _| |_ \n";
			cout << "\t\t\t  |  |  | |  _|     | | | . |\n";
			cout << "\t\t\t  |_____|_|_| |__|__|___|___|\n";

			white();
			cout << "\n\nEnter your choice:\n[";
			purple();
			cout << "1";
			white();
			cout << "] Easy Password\n[";
			purple();
			cout << "2";
			white();
			cout << "] Normal Password\n[";
			purple();
			cout << "3";
			white();
			cout << "] Hard Password\n[";
			purple();
			cout << "4";
			white();
			cout << "] Back\n";
			cout << "\n[";
			purple();
			cout << "+";
			white();
			cout << "] ";
			cin >> choice2;

			if (choice2 == 1) {
				cout << "\nYour Password is: ";
				purple();
				geneasy(6);
				white();
				cout << "\n\n";
				system("pause");
				system("cls");
			}
			else if (choice2 == 2) {
				cout << "\nYour Password is: ";
				purple();
				gensym(10);
				white();
				cout << "\n\n";
				system("pause");
				system("cls");
			}
			else if (choice2 == 3) {
				cout << "\nYour Password is: ";
				purple();
				genall(14);
				white();
				cout << "\n\n";
				system("pause");
				system("cls");
			}
			else if (choice2 != 1 && choice2 != 2 && choice2 != 3) {
				system("cls");
			}
			main();
			break;


		case 3:
			return 0; // terminate // abort()
			break;

		default:
			cout << "\nWrong Input\n";
			Sleep(500);
			system("cls");
			main();
			break;
	}
}