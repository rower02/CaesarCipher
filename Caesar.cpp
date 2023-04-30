#include <iostream>
#include <string>
using namespace std;

void szyfruj(string tekst, int klucz) {
	string zaszyfrowany;
	for (int i = 0; i < tekst.length(); i++) {
		if (tekst[i] != '\0') {
			if (isupper(tekst[i]))
			{
				if (tekst[i] + klucz > 90) {
					char znak = tekst[i] + klucz - 26;
					zaszyfrowany += znak;
				}
				else
				{
					char znak = tekst[i] + klucz;
					zaszyfrowany += znak;
				}
			}
			else {
				if (tekst[i] + klucz > 122) {
					char znak = tekst[i] + klucz - 26;
					zaszyfrowany += znak;
				}
				else
				{
					char znak = tekst[i] + klucz;
					zaszyfrowany += znak;
				}
			}
		}
	}
	cout << zaszyfrowany << endl;
}

void odszyfruj(string tekst, int klucz) {
	string odszyfrowany;
	for (int i = 0; i < tekst.length(); i++) {
		if (tekst[i] != '\0') {
			if (isupper(tekst[i]))
			{
				if (tekst[i] - klucz < 65) {
					char znak = tekst[i] - klucz + 26;
					odszyfrowany += znak;
				}
				else
				{
					char znak = tekst[i] - klucz;
					odszyfrowany += znak;
				}
			}
			else {
				if (tekst[i] + klucz < 122) {
					char znak = tekst[i] - klucz + 26;
					odszyfrowany += znak;
				}
				else
				{
					char znak = tekst[i] - klucz;
					odszyfrowany += znak;
				}
			}
		}
	}
	cout << odszyfrowany << endl;
}

int main()
{
	string tekst;
	int klucz;
	cout << "Podaj tekst do zaszyfrowania: ";
	cin >> tekst;
	cout << "Podaj klucz(o ile miejsc ma byc przesuniety tekst): ";
	cin >> klucz;
	szyfruj(tekst, klucz);
	cout << "Podaj tekst do odszyfrowania: ";
	cin >> tekst;
	cout << "Podaj klucz(o ile miejsc byl przesuniety tekst): ";
	cin >> klucz;
	odszyfruj(tekst, klucz);
}
