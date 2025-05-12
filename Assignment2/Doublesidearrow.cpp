// Sample Input
// 7
// Sample Output
//             1 
//         2 1   1 2 
//     3 2 1       1 2 3 
// 4 3 2 1           1 2 3 4 
//     3 2 1       1 2 3 
//         2 1   1 2 
//             1 
#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int m = n- n/2;
	for(int i=1; i<=m; i++){
		//Space1
		for(int j=1; j<= 2*(m-i); j++){
			cout << "  ";
		}
		//Number1
		int num = i;
		for(int j=1; j<=i; j++){
			cout << num << " ";
			num--;
		}
		//Space2
		for(int j=1; j<= 2*i - 3; j++){
			cout << "  ";
		}
		num++;
		//Number2
		for(int j=1; j<=i; j++){
			if(i==1) continue;
			cout << num << " ";
			num++;
		}
		//Space3
		for(int j=1; j<= 2*(m-i); j++){
			cout << "  ";
		}
		cout << endl;
	}
	for(int i=1; i<= n-m; i++){
		//Space1
		for(int j=1; j<=2*i; j++){
			cout << "  ";
		}
		//Numbers1
		int num = n-m-i+1;
		for(int j=n-m-i+1; j>=1; j--){
			cout << num << " ";
			num--;
		}
		//Space2
		for(int j= 2*(n-m-1)-i; j>0; j -= 2){
			cout << "  ";
		}
		//Numbers2
		num++;
		for(int j=n-m-i+1; j>=1; j--){
			if(i == n-m) continue;
			cout << num << " ";
			num++;
		}
		//Space3
		for(int j=1; j<=2*i; j++){
			cout << "  ";
		}
		cout << endl;
	}
	return 0;
}