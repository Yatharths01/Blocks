// Sample Input
// 5
// Sample Output
//     *****
//    *   *
//   *   *
//  *   *
// *****
#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for(int i=1; i<=n-1; i++){
		cout << " ";
	}
	for(int i=1; i<=n; i++){
		cout << "*";
	}
	cout << endl;
	for(int i=0; i<n-2; i++){
		//Space
		for(int j= n-2-i; j>0; j--){
			cout << " ";
		}
		//Pattern
		cout << "*";
		for(int j=1; j<=n-2; j++) cout << " ";
		cout << "*";
		cout << endl;
	}
	for(int i=1; i<=n; i++){
		cout << "*";
	}
	return 0;
}