// Sample Input
// 4 
// 6
// Sample Output
// 12
// Explanation
// The smallest number that is divisible by both N1 and N2 is called the LCM of N1 and N2.
#include<iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int minNum = a < b ? a : b;
	int maxNum = a > b ? a : b;
	int i=1;
	while(true){
		if((minNum * i) % maxNum == 0){
			cout << minNum * i;
			break;
		}
		i++;
	}
	return 0;
}