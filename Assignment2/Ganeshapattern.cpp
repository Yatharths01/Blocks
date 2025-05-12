// Sample Input
// 7
// Sample Output
// *  ****
// *  *
// *  *
// *******
//    *  *
//    *  *
// ****  *
#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int m = n/2;
	//First n/2
	for(int i=1; i<=m; i++){
		cout << "*";
		for(int i=0; i<(m-1); i++){
			cout << " ";
		}
		cout << "*";
		if(i == 1){
			for(int i=1; i<=m; i++){
				cout << "*";
			}
		}
		cout << endl;
	}
	//Middle
	for(int i=1; i<=n; i++) cout << "*";
	cout << endl;
	//Last n/2
	for(int i=1; i<=m; i++){
		if(i==m){
			for(int i=1; i<=m+1; i++){
				cout << "*";
			}
			for(int i=0; i<(m-1); i++){
				cout << " ";
			}
			cout << "*";
			break;
		}
		for(int i=0; i<m; i++){
			cout << " ";
		}
		cout << "*";
		for(int i=0; i<(m-1); i++){
			cout << " ";
		}
		cout << "*";
		cout << endl;
	}
	return 0;
}