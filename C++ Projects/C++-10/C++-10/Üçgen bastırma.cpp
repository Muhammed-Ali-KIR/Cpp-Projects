#include<iostream>
using namespace std;

int main() {

	int sayi;
	cout << "Sayi giriniz: ";
	cin >> sayi;

	for (int i = 0; i < sayi; i++) {
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << endl;
	}







	system("pause");
}