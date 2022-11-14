#include<iostream>
using namespace std;
//gecme notu 40
char gectimikaldimi(float, float);
int main() {
	
	char sonuc = gectimikaldimi(40, 50);
	if (sonuc == 'K') {
		cout << "Kaldiniz..." << endl;
	}
	else if (sonuc == 'G') {
	
	cout << "Tebrikler Gectiniz..." << endl;
	
	}
	system("pause"); 
}
char gectimikaldimi(float vizenotu, float finalnotu) {
	float ort = (vizenotu + finalnotu) / 2;
	if (ort < 40 && ort > 0) {
		return 'K';
		 
	}
	else if (ort >= 40 && ort <= 100) {
		return 'G';

	}

}

