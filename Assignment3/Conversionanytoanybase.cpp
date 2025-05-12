// Take sb (source number system base), db (destination number system base) and sn (number in source format). Write a function that converts sn to its counterpart in destination number system. Print the value returned.
// Sample Input
// 8
// 2 
// 33
// Sample Output
// 11011
#include<iostream>
using namespace std;

int toDecimal(int n, int b){
	int result = 0;
	int power = 1;
	while(n){
		int digit = n % 10;
		result = digit * power + result;
		power *= b;
		n /= 10;
	}
	return result;
}
int toDestBase(int n, int b){
	int result = 0;
	int power = 1;
	while(n){
		int digit = n % b;
		result = digit * power + result;
		power *= 10;
		n /= b;
	}
	return result;
}