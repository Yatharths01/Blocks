// Pattern Numbers & Stars - 2
#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout << j;
		}
		for(int j=1; j<= n-i; j++){
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}

//Input : 7
//Output:
//  1******
//  12*****
//  123****
//  1234***
//  12345**
//  123456*
//  1234567