#include<iostream>
using namespace std;
//girilen sayının tek çift olduğunu ekrana yazdır
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