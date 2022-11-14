#include<iostream>
using namespace std;
//Girilen yýlýn artýk yýl olup olmadýðýný yazdýrma
//4e tam bölünen yillar artik yildir.
//100e tam bölünen yillar artik yil deðildir
//400e tam bölünen yillar artik yildir

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
