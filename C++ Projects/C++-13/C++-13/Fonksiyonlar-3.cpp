#include<iostream>
using namespace std;
void ucgenbastir(int);

int main() {

	ucgenbastir(5);
	ucgenbastir(6);
	ucgenbastir(7);
	ucgenbastir(8);


	system("pause");		
}
void ucgenbastir(int yukseklik) {
	for (int i = 0; i < yukseklik; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}

}
