#include <iostream>

using namespace std;

int sum(int x) {
	if(x == 1)
	return(1);
	
	return x + sum(x - 1);
}

int main () {
	int n;
	int x;
	int result = 0;
	
	cout<<"Masukan angka >10 : ";
	cin>>n;
	
	if(n > 10) {
		for(int i= 0; i < n; i++) {
			if(i <= n) {
				x = i + 1;
			}

			cout<<"nilai indeks ke ["<<i<<"]= "<<x;
			result = result + x;
			cout<<endl;
		}
	} else {
		cout<<"Data tidak sesuai";
	}
	
	cout<<"===================================================="<<endl;
	cout<<"Jumlah TANPA Fungsi Rekursif : "<<result<<endl;
	result = sum(x);
	cout<<"Jumlah Menggunakan Fungsi Rekursif: "<<result;
}
