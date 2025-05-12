// Sample Input
// 5
// Sample Output
// 1 2 3 4 5
// 1 2 3 4 * 
// 1 2 3 * * *
// 1 2 * * * * *
// 1 * * * * * * *
#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		for(int j=1; j<=n-i; j++){
			cout << j << " ";
		}
		for(int j=1; j<= (2*i-1); j++){
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}