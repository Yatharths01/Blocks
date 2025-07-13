#include<iostream>
#include<cstring>
using namespace std;

//Input : abcg
//Output : badf


//TC : O(n)
//SC : O(1)
int main() {
    //Input
	char str[1001];
	cin >> str;
	int n = strlen(str);
    //Processing
	for(int i=0; i<n; i++){
		if(i%2==0) str[i] += 1;
		else str[i] -= 1;
	}
    //Print
	cout << str;
	return 0;
}