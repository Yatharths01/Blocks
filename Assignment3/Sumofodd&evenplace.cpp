// Sample Input
// 2635
// Sample Output
// 11
// 5
// Explanation
// 5 is present at 1st position, 3 is present at 2nd position, 6 is present at 3rd position and 2 is present at 4th position.
// Sum of odd placed digits on first line. 5 and 6 are placed at odd position. Hence odd place sum is 5+6=11
// Sum of even placed digits on second line. 3 and 2 are placed at even position. Hence even place sum is 3+2=5
#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int oddSum = 0, evenSum = 0;
	int check = 1;
	while(n){
		int digit = n % 10;
		if(check) oddSum += digit;
		else evenSum += digit;
		n /= 10;
		check = !check;
	}
	cout << oddSum << endl << evenSum;
	return 0;
}