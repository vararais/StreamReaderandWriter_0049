#include <iostream>
using namespace std;

int main()
{
	try {
		cout << "selamat belajar di prodi TI UMY" << endl;
		cout << "Pernyataan tidak akan diresekusi" << endl;
	}
	catch (int a) {
		cout << " Pengecualian akan dieksekusi" << endl;
	}
	catch (...) {
			cout << "Default Pengecualian dieksekusi" << endl;
	}
	return 0;
}