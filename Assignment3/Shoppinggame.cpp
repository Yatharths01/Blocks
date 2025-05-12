// Faculty at CodingBlocks loves to purchase smartphones and decides to play a game. Aayush and Harshit decides to shop for smartphones. Aayush purchases 1 smartphone, then Harshit purchases 2 smartphones, then Aayush purchases 3 smartphones, then Harshit purchases 4 smartphones, and so on. Once someone can't purchase more smartphones, he loses.
// Aayush can purchase at most M smartphones and Harshit can purchase at most N smartphones. Who will win ? Print "Aayush" and "Harshit" accordingly.
// Sample Input
// 2
// 9 3    
// 8 11
// Sample Output
// Aayush
// Harshit
// Constraints
// 1 ≤ T ≤ 1000 1 ≤ M, N ≤ 10^6
#include<iostream>
using namespace std;
int main() {
	int n, A , H;
	cin >> n;
	while(n){
		cin >> A >> H;
		int num = 1;
		while(A>=0 && H>=0){
			A -= num;
			num++;
			H -= num;
			num++;
		}
		if(A < 0) cout << "Harshit" << endl;
		else if(H < 0) cout << "Aayush" << endl;
		n--;
	}
	return 0;
}