#include <iostream>

using namespace std;

int main () {
	int X [3][5] = {
		19,
		11,
		81,
		25,
		79,
		16,
		7,
		9,
		13,
		25,
		30,
		10,
		12,
		40,
		22
	};
	
	int i;
	int j;
	int max;
	int total;
	int flag;
	int n;
	
	/*
		Kode di bawah ini untuk
		menentukan nilai terbesar
	*/
	max = X[0][0];

	for(i= 0; i <= 2; i++) {
		for(j= 0; j <= 4; j++) {
			if(X[i][j] > max) {
				max = X[i][j];
			}
		}
	}

	/*
		Kode di bawah ini berfungsi
		untuk mencari banyak nilai dari 
		sebuah array
	*/
	total = 0;
	for(i = 0; i <= 2; i++) {
		for(j= 0; j <= 4; j++) {
			if(X[i][j] == max) {
				total=total+1;
			}
		}
	}				
				
	cout<<"The max array value is : "<<max<<endl;
	cout<<"Count of array is : "<<total<<endl;
		
	flag=0;

	cout<<"Input the value  : ";
	cin>>n;

	for(i = 0; i <= 2; i++) {
		for(j = 0; j <= 4; j++) {
			if(X[i][j] == n)
			flag = 1;
		}
	}
	if(flag == 1) {
		cout<<"ADA";
	} else {
		cout<<"TIDAK ADA";
	}
}
