#include<iostream>
using namespace std;
//Faktöriyel fonksiyonu
int faktöriyel(int);
int main() {
	
	cout << faktöriyel(5) << endl;




	system("pause");
}
int faktöriyel(int sayi) {
	int sonuc = 1;
	for (int i = 1; i <= sayi; i++) {
		sonuc *= i;


	}
	return sonuc;
}



