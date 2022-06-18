#include <iostream>
#include <vector>
#include <cmath>
#include "matr_classes.h"
#include <fstream>
#include <locale.h>



int main(){
	setlocale(LC_ALL, "ru_RU.utf8");
	try{
		Matrix a1(3, 3);
		a1.SetMij(1, 1, 1);
		a1.SetMij(1, 2, 2);
		a1.SetMij(1, 3, 3);
		a1.SetMij(2, 1, 4);
		a1.SetMij(2, 2, 5);
		a1.SetMij(2, 3, 6);
		a1.SetMij(3, 1, 7);
		a1.SetMij(3, 2, 9);
		a1.SetMij(3, 3, 9);
		cout << a1;
		cout << a1.Inverse() ;

		/*ifstream in("D:\\2 курс\\јиѕ\\ п4.1\\file1.txt");
		Matrix a3;
		if (!in)
		cout << "Ќе открыт";
		else
		in >> a3;
		cout << a3 << endl;
		//cout << a3.Inverse() << endl;

		Matrix a2;
		a2 = a3.Inverse();
		ofstream out("D:\\2 курс\\јиѕ\\ п4.1\\file2.txt");
		if (!out)
		cout << "Ќе открыт";
		else
		out << a2;

		char fname[] = "bin_file.bin";

		Matrix a1(3, 4);
		a1.SetMij(1, 1, 1);
		a1.SetMij(1, 2, 2);
		a1.SetMij(1, 3, 3);
		a1.SetMij(2, 1, 4);
		a1.SetMij(2, 2, 5);
		a1.SetMij(2, 3, 6);
		a1.SetMij(3, 1, 7);
		a1.SetMij(3, 2, 9);
		a1.SetMij(3, 3, 9);

		cout << a1;

		//cout << Transpose(a1);

		a1.WriteBin(fname);
		Matrix a4;
		a4.ReadBin(fname);
		cout << a4;*/
/*		Matrix a1(3, 3);
		a1.SetMij(1, 1, 1);
		a1.SetMij(1, 2, 2);
		a1.SetMij(1, 3, 3);
		a1.SetMij(2, 1, 4);
		a1.SetMij(2, 2, 5);
		a1.SetMij(2, 3, 6);
		a1.SetMij(3, 1, 7);
		a1.SetMij(3, 2, 8);
		a1.SetMij(3, 3, 9);
		Matrix a2(3, 3);
		cout << a1;*/
		//a2 = a1.Inverse();
		cout << a1.Rank() << endl;
		//cout << a2*a1;

		Matrix a3(3, 4);
		a3.SetMij(1, 1, 1);
		a3.SetMij(1, 2, 3);
		a3.SetMij(1, 3, 3);
		a3.SetMij(2, 1, 4);
		a3.SetMij(2, 2, 4);
		a3.SetMij(2, 3, 6);
		a3.SetMij(3, 1, 7);
		a3.SetMij(3, 2, 9);
		a3.SetMij(3, 3, 9);
		cout << a3;
		cout << a3.Transpose();


		
		ofstream out("D:\\2 курс\\јиѕ\\ п4.1\\file2.txt");
		if (!out)
			cout << "Ќе открыт";
		else
			out << a3;
		out.close();
		//in.close();
	}
	catch(Exception1 ex){
		cout << ex.what() << endl;
	}
	catch (...){
		cout << "Unknown error" << endl;
	}


	return 0;
}