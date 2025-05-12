// Sample Input
// 5
// Sample Output
//  5 4 3 2 1 0 1 2 3 4 5
//    4 3 2 1 0 1 2 3 4 
//      3 2 1 0 1 2 3 
//        2 1 0 1 2 
//          1 0 1 
//            0 
//          1 0 1 
//        2 1 0 1 2 
//      3 2 1 0 1 2 3 
//    4 3 2 1 0 1 2 3 4 
//  5 4 3 2 1 0 1 2 3 4 5
#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for(int i=1; i<= n+1; i++){
		//Spaces
		for(int j=1; j<i; j++){
			cout << "  ";
		}
		int num = n-i+1;
		//Numbers1
		for(int j=1; j<= n+2-i; j++){
			cout << num << " ";
			num--;
		}
		num += 2;
		//Numbers2
		for(int j=1; j<= n+1-i; j++){
			cout << num << " ";
			num++;
		}
		cout << endl;
	}
	for(int i=1; i<=n; i++){
		//Spaces
		for(int j=1; j<= n-i; j++){
			cout << "  ";
		}
		//Numbers1
		int num = i;
		for(int j=1; j<= i+1; j++){
			cout << num << " ";
			num--;
		}
		num += 2;
		//Numbers2
		for(int j=1; j<=i; j++){
			cout << num << " ";
			num++;
		}
		cout << endl;
	}
	return 0;
}