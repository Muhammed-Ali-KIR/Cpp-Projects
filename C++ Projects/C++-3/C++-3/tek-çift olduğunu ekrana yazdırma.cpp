#include<iostream>
using namespace std;
//girilen say�n�n tek �ift oldu�unu ekrana yazd�r
int main() {

	int sayi;
	cout << "Bir tam sayi giriniz";
	cin >> sayi;

	if (sayi % 2 != 0) {
		cout << sayi << " sayisi tek sayidir.'";

	}
	else {
		cout << sayi << " sayisi cift sayidir.'";

	}




	system("pause");
}