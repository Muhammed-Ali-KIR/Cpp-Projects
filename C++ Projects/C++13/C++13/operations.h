#pragma once
#include<iostream>
#include<conio.h> // getch fonkisoyunun kullanmak için eklendi.
using namespace std;
double addition(double number1, double number2) {
	return number1 + number2;
}
double subtraction(double number1, double number2) {
	return number1 - number2;
}
double division(double number1, double number2) {
	return number1 / number2;
}
double multiplication(double number1, double number2) {
	return number1 * number2;
}
void menu() {
	char choice;
	double number1, number2, result;
	while (true) {
		cout << "\t MENU \n";
		cout << "\n\t ADDITION - [A]";
		cout << "\n\t SUBTRACTION - [S]";
		cout << "\n\t DIVISION - [D]";
		cout << "\n\t MULTIPLICATION - [M]";
		cout << "\n\t EXIT - [E]";
		cout << "\n\n Make a choice";
		choice = _getch();
		if (choice == 'E' || choice == 'e') {
			exit(0);
		}

		system("cls"); //konsol ekranını temizlemek için kullanılır.
		cout << "Enter first number: ";
		cin >> number1;
		cout << "Enter second number: ";
		cin >> number2;
		if (choice == 'A' || choice == 'a') {
			result = addition(number1, number2);
			cout << number1 << "+" << number2 << "=" << result;
		}
		else if (choice == 'S' || choice == 's') {
			result = subtraction(number1, number2);
			cout << number1 << "-" << number2 << "=" << result;
		}
		else if (choice == 'D' || choice == 'd') {
			result = division(number1, number2);
			cout << number1 << "/" << number2 << "=" << result;
		}
		else if (choice == 'M' || choice == 'm') {
			result = multiplication(number1, number2);
			cout << number1 << "*" << number2 << "=" << result;
		}
		cout << endl << "Press any key to return back to menu!" << endl;
		_getch();
		system("cls");

	}