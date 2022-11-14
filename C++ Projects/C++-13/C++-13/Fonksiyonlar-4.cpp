#include<iostream>
using namespace std;
int ustal(int, int);
int main() {
	int sayi, ust, sonuc;
	cout << "Bir tam sayi giriniz: ";
	cin >> sayi;
	cout << "Ustu girin: ";
	cin >> ust;
	sonuc = ustal(sayi, ust);
	cout << "Sonuc: " << sonuc << endl;

	
	system("pause");
}
int ustal(int sayi, int ust) {
	int sonuc = 1;
	for (int i = 0; i < ust; i++) {
		sonuc *= sayi;

	}
	return sonuc;
}





