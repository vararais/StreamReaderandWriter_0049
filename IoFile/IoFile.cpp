#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string baris;

	ofstream outfile;

	outfile.open("Contohfile.txt");

	cout << ">= Menulis File, \'q\' untuk keluar" << endl;

	while (true) {
		cout << "- ";

		getline(cin, baris);

		if (baris == "q") break;

		outfile << baris << endl;
	}
}

