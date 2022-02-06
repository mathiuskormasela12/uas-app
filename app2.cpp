#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main() {
	char X[3][5];
	int x;
	char *pN;
	
	for (int b = 0; b < 3; b++) {
		for (int k = 0; k <= 4; k++) {
			x = k % 2;

			if(x == 0) {
				cout<<"A["<<b<<"]["<<k<<"] = ";
				cin>>X[b][k];
			} else {
				X[b][k] = ' ';
			}
		}
		cout << endl;
	}
	
	for (int b = 0; b < 3; b++){
		for (int k = 0; k <= 4; k++){
			pN=&X[b][k];
			cout<<*pN<<" ";
		}
		cout << endl;
	}
	getch();
}
