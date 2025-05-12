// A positive integer of n digits is called an Armstrong number of order n (order is number of digits) if:
// abcd… = pow(a,n) + pow(b,n) + pow(c,n) + pow(d,n) + ….
// 1634 is an Armstrong number as 1634 = 1^4 + 6^4 + 3^4 + 4^4
// 371 is an Armstrong number as 371 = 3^3 + 7^3 + 1^3
// Sample Input
// 371
// Sample Output
// true
#include<iostream>
#include<cmath>
using namespace std;

bool isArmstrong(int n){
	int NoOfDigits = 0;
	int num = n;
	int sum = 0;
	while(num){
		NoOfDigits++;
		num /= 10;
	} 
	num = n;
	while(num){
		int digit = num % 10;
		sum += pow(digit, NoOfDigits);
		num /= 10;
	}
	return sum == n;
}

int main() {
	int n;
	cin >> n;
	cout << boolalpha << isArmstrong(n);
	return 0;
}