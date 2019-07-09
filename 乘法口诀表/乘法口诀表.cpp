#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main(void) {
	cout << "----------¾Å¾Å³Ë·¨¿Ú¾÷±í----------"<<endl;
	int a = 9;
	int x;
	int y = 0;
	for (int a = 1; a < 10; a++) {

		for (int b = 1; b < a + 1; b++) {
			x = a * b;
			cout << a << "*" << b << "=" << x<<" ";


		}
		cout << endl;

	}





	system("pause");
	return 0;
}