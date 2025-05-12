// Sample Input
// 5
// Sample Output
// 1 2 3 4 5 
// 2 2 3 4 5 
// 3 3 3 4 5 
// 4 4 4 4 5 
// 5 5 5 5 5
#include<iostream>
using namespace std;
int main () {
	int n;
	cin >> n;
	for(int i=1; i<=n; i++){
		int j=i;
		while(j>0){
			cout << i << " ";
			j--;
		}
		for(j=i+1; j<=n; j++){
			cout << j << " "; 
		}
		cout << endl;
	}
	return 0;
}
