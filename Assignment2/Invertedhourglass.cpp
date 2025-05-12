// Sample Input
// 5
// Sample Output
// 5                   5 
// 5 4               4 5 
// 5 4 3           3 4 5 
// 5 4 3 2       2 3 4 5 
// 5 4 3 2 1   1 2 3 4 5 
// 5 4 3 2 1 0 1 2 3 4 5 
// 5 4 3 2 1   1 2 3 4 5 
// 5 4 3 2       2 3 4 5 
// 5 4 3           3 4 5 
// 5 4               4 5 
// 5                   5 
#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	//First n Rows
	for(int i=1; i<=n; i++){
		//Number1
		int num = n;
		for(int j=1; j<=i; j++){
			cout << num << " ";
			num--;
		}
		//Space
		for(int j=1; j<= 2*(n-i) + 1; j++){
			cout << "  ";

		}
		//Number2
		num++;
		for(int j=1; j<=i; j++){
			cout << num << " ";
			num++;
		}
		cout << endl;
	}
	//Middle Row
	int x = n;
	for(int i=1; i<=n+1; i++){
		cout << x << " ";
		x--;
	}
	x += 2;
	for(int i=1; i<=n; i++){
		cout << x << " ";
		x++;
	}
	cout << endl;
	//Last n Rows
	for(int i=1; i<=n; i++){
		//Number1
		int num = n;
		for(int j=1; j<= n-i+1; j++){
			cout << num << " ";
			num--;
		}
		//Space
		for(int j=1; j<= 2*i-1; j++){
			cout << "  ";
		}
		//Number2
		num++;
		for(int j=1; j<= n-i+1; j++){
			cout << num << " ";
			num++;
		}
		cout << endl;
	}
	return 0;
}