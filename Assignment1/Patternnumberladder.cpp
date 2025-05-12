//Pattern Number Ladder
// Sample Input
// 4
// Sample Output
// 1  
// 2	3  
// 4	5	6  
// 7	8	9	10

#include<iostream>
int main() {
	int n;
	std::cin >> n;
	int num = 1;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			std::cout << num << "	";
			num++;
		}
		std::cout << std::endl;
	}
	return 0;
}