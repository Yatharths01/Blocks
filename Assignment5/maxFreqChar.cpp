#include<iostream>
#include<cstring>
using namespace std;

//Input : aaabacB
//Output : a

//TC : O(n)
//SC : O(1)
int main() {
    //Input
	char str[1001];
	cin >> str;
	int n = strlen(str);
	//Freq
	int freq[128] = {0};
    int m = sizeof(freq)/sizeof(int);
	for(int i=0; i< n; i++){
		freq[str[i]]++;
	}
    //MaxSoFar
	int max = 0;
	for(int i=0; i<m; i++){
		if(freq[max] < freq[i]) max = i;
	}
    //Print
	cout << char(max);
	return 0;
}