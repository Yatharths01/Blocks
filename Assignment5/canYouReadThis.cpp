#include<iostream>
#include<cstring>
using namespace std;

//Input : IAmACompetitiveProgrammer
//Output : I
// Am
// A
// Competitive
// Programmer


//TC : O(n)
//SC : O(1)
void tokenizeAndPrint(char str[], int n){
	for(int i=0; i<n; i++){
		if(str[i] >='A' and str[i] <='Z'){
			cout << endl;
		}
		cout << str[i];
	}
}

//TC : O(n)
//SC : O(1)
int main() {
    //Input
	char str[1001];
	cin >> str;
	int n = strlen(str);
    //Tokens
	tokenizeAndPrint(str, n);
	return 0;
}