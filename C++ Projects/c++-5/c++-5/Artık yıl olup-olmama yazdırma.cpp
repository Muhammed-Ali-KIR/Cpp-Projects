#include<iostream>
using namespace std;
//Girilen y�l�n art�k y�l olup olmad���n� yazd�rma
//4e tam b�l�nen yillar artik yildir.
//100e tam b�l�nen yillar artik yil de�ildir
//400e tam b�l�nen yillar artik yildir

int main() {

	int yil;

	cout << "Lutfen bir yil giriniz: "; 
	cin >> yil;

	if (yil % 400 == 0) {
		cout << yil << " yili  artik yildir." << endl;
	}

	else if (yil % 100 == 0) {
		cout << yil << " yili artik yil degildir." << endl;
	}
	else if (yil % 4 == 0) {
		cout << yil << " yili  artik yildir." << endl;

	}
	else {
		cout << yil << " yili artik yil degildir." << endl;
	}






	cout << endl;
	system("pause");
}
