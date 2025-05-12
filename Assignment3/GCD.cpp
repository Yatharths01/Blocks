// Constraints
// 0 < N1 < 1000000000
// 0 < N2 < 1000000000
// Sample Input
// 16 
// 24
// Sample Output
// 8
#include<iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int x = a < b ? a : b;
	int y = a < b ? b : a;
	while(true){
		if(y % x == 0){
			break;
		}
		int r = y % x;
		y = x;
		x = r;
	}
	cout << x;
	return 0;
}