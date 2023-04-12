#include <iostream>
#include <cstring>
using namespace std;

int main(){
//	char nama[15];
//	char npm[15];
//	cin.get(nama,15);
//	cin.ignore();
//	cin.get(npm,15);
//	
//	cout << "Nama : " << nama << endl;
//	cout << "NPM : " << npm << endl;

//	char chara;
//	while (cin.get(chara)){
//		if (chara = 'a'){
//			cin.putback('x');
//		}
//		else{
//			cout << chara;
//		}
//	}

//	char str[]={'Y', 'O', '\0'};
//	cout << str << endl;
//	cout << strlen(str) << endl;

//	char awal[20]="yo";
//	char akhir[20]="yo";
//	char *full = strcat(awal, akhir);
//	cout << full;

//	char* endptr;
//	char str1[]= "10101010K" ;
//	long value1 = strtol(str1, &endptr, 2); //angka diakhir adalah indeks bilangan
//	//strtoul sama, namun menggunakan unsigned long
//	cout << "The converted: " << value1 << endl;
//	cout << "Uncovered part: " << endptr << endl;

//	char* endptr;
//	char str1[]= "10K" ;
//	double value1 = strtod(str1, &endptr); //hanya memiliki dua parameter
//	cout << "The converted: " << value1 << endl;
//	cout << "Uncovered part: " << endptr << endl;

	char data[2][100]={"2217051021jun", "2217051073far"};
	char* endptr;
	for(int i = 0; i < 2; i++){
		long value = strtod(data[i], &endptr);
		cout << "Nama : " << endptr << endl;
		cout << "NPM  : " << endptr << endl;
		cout << endl;
	
}}
