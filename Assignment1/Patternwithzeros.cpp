// Sample Input
// 5
// Sample Output
// 1  
// 2	2  
// 3	0	3    
// 4	0	0	4  
// 5	0	0	0	5
#include<iostream>
int main() {
	int n;
	std::cin >> n;
	for(int i=1; i<=n; i++){
		std::cout << i << "	";
		for(int j=2; j<i; j++) std::cout << "0	";
		if(i>1) std::cout << i;
		std::cout << std::endl;
	}
	return 0;
}