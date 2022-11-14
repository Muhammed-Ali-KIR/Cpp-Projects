#include<iostream>
using namespace std;
// faktöriyel hesabý
// 5!=5*4*3*2*1
int main() {

	int sayi, sonuc = 1;
	cout << " Bir sayi giriniz: ";
	cin >> sayi;
	for (int i = 1; i <= sayi; i++) {
		sonuc *= i; 
	}

	cout << sayi << " ! = " << sonuc << endl;




	system("pause");
}