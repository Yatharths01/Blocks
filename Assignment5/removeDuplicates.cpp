#include<iostream>
#include<cstring>
using namespace std;

//Input : aabccba
//Output : abcba


//TC : O(n)
//SC : O(1)
int main() {
    //Input
	char str[1000];
	cin >> str;
	int n = strlen(str);
    //Processing
	int temp = 0;
	cout << str[0];
	for(int i=1; i<n; i++){
		if(str[i] == str[temp]) continue;
		else{
			temp = i;
			cout << str[temp];
		}
	}
	return 0;
}