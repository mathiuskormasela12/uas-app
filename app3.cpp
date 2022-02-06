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
	
	cout<<"Input number  greater than 10 : ";
	cin>>n;
	
	if(n > 10) {
		for(int i= 0; i < n; i++) {
			if(i <= n) {
				x = i + 1;
			}

			cout<<"the index of value ["<<i<<"]= "<<x;
			result = result + x;
			cout<<endl;
		}
	} else {
		cout<<"The data is not match";
	}
	
	cout<<"===================================================="<<endl;
	cout<<"Result without recursive function : "<<result<<endl;
	result = sum(x);
	cout<<"Result with recursive function : "<<result;
}
