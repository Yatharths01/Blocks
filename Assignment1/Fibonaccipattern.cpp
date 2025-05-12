// Sample Input
// 4
// Sample Output
// 0 
// 1    1 
// 2    3     5 
// 8   13    21    34
#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	// int fib_n = n*(n+1)/2;
	int fib_1 = 0;
	int fib_2 = 1;
	int fib = fib_1 + fib_2;
	for(int i=1; i<=n; i++){
		if(i == 1) cout << fib_1 << endl;
		if(i == 2) cout << fib_2 << "	" << fib << endl;
		if(i >=3){
			for(int j=1; j<=i; j++){
				fib_1 = fib_2;
				fib_2 = fib;
				fib = fib_1 + fib_2;
				cout << fib << "	";
			}
			cout << endl;
		}
	}
	return 0;
}