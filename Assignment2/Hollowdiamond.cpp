// Sample Input
// 5
// Sample Output
// *	*	*   *   *		  
// *	*	    *   *
// *               *
// * 	*       *   *
// * 	*	*   *   *
#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for(int i=1; i<=n; i++){
		cout << "*	";
	}
	cout << endl;
	int iRows = n-2;
	int m = iRows - iRows/2;
	for(int i=1; i<=m; i++){
		//Stars1
		for(int j=1; j<=m+1-i; j++){
			cout << "*	";
		}
		//Spaces1
		for(int j=1; j<=i; j++){
			cout << " 	";
		}
		//Spaces2
		for(int j=1; j<i; j++){
			cout << " 	";
		}
		//Stars2
		for(int j=1; j<=m+1-i; j++){
			cout << "*	";
		}
		cout << endl;
	}
	for(int i=1; i<=iRows-m; i++){
		//Stars1
		for(int j=0; j<=i; j++){
			cout << "*	";
		}
		//Space1
		for(int j=1; j<= (iRows-m)+1-i; j++){
			cout << " 	";
		}
		//Space2
		for(int j=1; j< (iRows-m)+1-i; j++){
			cout << " 	";
		}
		//Stars2
		for(int j=0; j<=i; j++){
			cout << "*	";
		}
		cout << endl;
	}
	for(int i=1; i<=n; i++){
		cout << "*	";
	}
	cout << endl;
	return 0;
}