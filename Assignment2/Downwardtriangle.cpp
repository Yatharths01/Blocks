// Sample Input
// 6
// Sample Output
// * * * * * * 
//  * * * * * 
//   * * * * 
//    * * * 
//     * * 
//      * 
#include<iostream>
using namespace std;
int main () {
	int n;
	cin >> n;
	for(int i=1; i<=n; i++){
		//Spaces
		for(int j=1; j<i; j++){
			cout << " ";
		}
		//Stars
		for(int j=n-i+1; j>0; j--){
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}