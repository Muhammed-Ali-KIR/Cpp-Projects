#include<iostream>
using namespace std;
//Fakt�riyel fonksiyonu
int fakt�riyel(int);
int main() {
	
	cout << fakt�riyel(5) << endl;




	system("pause");
}
int fakt�riyel(int sayi) {
	int sonuc = 1;
	for (int i = 1; i <= sayi; i++) {
		sonuc *= i;


	}
	return sonuc;
}



