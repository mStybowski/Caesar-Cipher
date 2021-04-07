#include <iostream>
#include <string>

using namespace std;


int main() {
	
	string tekstDoZakodowania, szyfr, zakodowany, rozkodowany;
	cout << "Podaj tekst do zaszyfrowania (A): ";
	getline(cin, tekstDoZakodowania);
	cout << "Podaj szyfr (B): ";
	getline(cin, szyfr);

	cout << endl << "-------------------" << endl << endl;
	cout << "Twoj tekst do zakodowania (A) to: " <<tekstDoZakodowania << endl;
	cout << "Twoj kod (B) to: " << szyfr << endl;

	// ------------------------------ //
	int iterator = 0;
	for (char& c : tekstDoZakodowania) {
		if (iterator >= szyfr.length())
			iterator = 0;

		zakodowany.push_back(c + int(szyfr[iterator++])-64);
	}

	cout << "Tekst zakodowany: " <<zakodowany << endl;

	iterator = 0;
	for (char& c : zakodowany) {
		if (iterator >= szyfr.length())
			iterator = 0;

		rozkodowany.push_back(c - int(szyfr[iterator++]) + 64);
	}

	cout << "Tekst rozkodowany: " << rozkodowany << endl;

}