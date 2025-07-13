#include<iostream>
#include<cstring>
using namespace std;

//Input : acb
//Output : a2c-1b

//TC : O(n)
//SC : O(1)
int main() {
    //Input
	char str[1001];
	cin >> str;
	int n = strlen(str);
    //Processing
	for(int i=0; i<n; i++){
		cout << str[i];
		if(i == n-1) continue;
		cout << str[i+1]-str[i];
	}
	return 0;
}