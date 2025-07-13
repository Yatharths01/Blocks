#include<iostream>
using namespace std;

//Input : abC
//Output : ABc


//TC: O(n)
//SC : O(1)
int main() {
	//Input
	int diff = 'a'-'A';
	char str[1001];
	cin >> str;
	int n = sizeof(str)/ sizeof(char);
	//Processing
	for(int i=0; i<n; i++){
		if(str[i] <='Z' and str[i] >= 'A'){
			str[i] = str[i] + diff;
		}else if(str[i] <='z' and str[i] >= 'a'){
			str[i] = str[i] - diff;
		}
	}
	cout << str;
	return 0;
}