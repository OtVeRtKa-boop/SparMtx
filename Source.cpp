#include "sparsematrix_t.h"

using namespace std;

int main()
{
	setlocale(0, "rus");
	
	sparsematrix_t<double> S;

	S.readMatrixFromFile("sssssss.mtx");

	cout << S << endl;

	sparsematrix_t<double>  D(S);
	
	//D.set(5, 0, 1);
	cout << "S" << endl << S << endl;
	cout << "D" << endl << D << endl;


	S -=  D  - S;
	cout << S;

	system("pause");
	return(0);

	
}



