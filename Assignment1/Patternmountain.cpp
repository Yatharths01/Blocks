// Sample Input
// 4
// Sample Output
// 1						1
// 1	2				2	1
// 1	2	3		3	2	1
// 1	2	3	4	3	2	1
#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout << j << "	";
		}
		for(int j=0; j< (2*(n-i)-1); j++){
			cout << " 	";
		}
		for(int j=i; j>0; j--){
			if(i==n && j==i) {
				j--;
			}
			cout << j << "	";
		}
		cout << endl;
	}
	return 0;
}