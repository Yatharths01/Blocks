// Sample Input
// 101010
// Sample Output
// 42
// Explanation
// For binary number fedcba , Decimal number = f * 25 + e * 24 + d * 23 + …..+ a * 20.
#include<iostream>
#include<cmath>
using namespace std;

int BinaryToDecimal(int n){
	int decNo = 0;
	int base = 1;
	while(n){
		int digit;
		n % 10 == 1 ? digit = 1 : digit = 0; 
		decNo += base * digit;
		base <<= 1;
		n /= 10;
	}
	return decNo;
}
int main() {
	int n;
	cin >> n;
	cout << BinaryToDecimal(n);
	return 0;
}