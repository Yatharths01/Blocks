// Sample Input
// 3
// Sample Output
//         1
// 	2	3	2
// 3	4	5	4	3
// 	2	3	2
// 		1
#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for(int i=1; i<=n; i++){
		//Space
		for(int j=1; j<= n-i; j++){
			cout << " 	"; 
		}
		//Number1
		int num = i;
		for(int j=1; j<=i; j++){
			cout << num << "	";
			num++;
		}
		//Number2
		num -= 2;
		for(int j=1; j<i; j++){
			cout << num << "	";
			num--;
		}
		cout << endl;
	}
	for(int i=1; i<n; i++){
		//Space
		for(int j=1; j<=i; j++){
			cout << " 	";
		}
		//Number1
		int num = n-i;
		for(int j=1; j<=n-i; j++){
			cout << num << "	";
			num++;
		}
		//Number2
		num -= 2;
		for(int j=1; j<n-i; j++){
			cout << num << "	";
			num--;
		}
		cout << endl;
	}
	return 0;
}