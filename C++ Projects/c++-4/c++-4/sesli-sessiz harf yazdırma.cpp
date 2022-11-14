#include<iostream>
using namespace std;
//girilen harfin sesli mi sessiz mi olduðunu ekrana yazdýrma
int main() {

	char ch;
	cout << "Bir harf giriniz: ";
	cin >> ch;
	// a-e-o-u-i
	if (ch == 'a' || ch == 'e' || ch =='o'|| ch =='u'|| ch =='i') {
		cout << ch << " harfi sesli bir harftir.";
	}
	else {
		cout << ch << " harfi sessiz bir harftir.";


	}



	system("pause");

}