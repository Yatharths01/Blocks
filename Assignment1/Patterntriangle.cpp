//Pattern Triangle
#include<iostream>
int main() {
	int n;
	std::cin >> n;
	// int j=1;
	for(int i=1; i<=n; i++){
		int num = i;	
		for(int j=n-i; j>0; j--){
			std::cout << " 	";
		}
		for(int j=1; j<=i; j++){
			std::cout << num <<  "	";
			num++;
		}
		num--;
		for(int j=2; j<=i; j++){
			num--;
			std::cout << num << "	";
		}
		std::cout << std::endl;
	}
	return 0;
}

//Input : 4
//Output:
//          1
// 		2	3	2
// 	3	4	5	4	3
// 4	5	6	7	6	5	4 