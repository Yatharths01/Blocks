#include<iostream>
#include<cstring>
using namespace std;

//Input : 4
// codingblocks
// abbac
// java
// ccdd

//Output : 
// d
// c
// j
// -1

//TC : O(n)
//SC : O(1)
int main() {
    //Testcases
	int q;
	cin >> q;
	int freq[128];
	for(int i=0; i <q; i++){
        //Frequency
		char str[100001];	
		cin >> str;
		memset(freq, 0, sizeof(freq)); 
		int n = strlen(str);
		for(int i=0; i < n; i++){
			freq[str[i]]++;
		}
        //Processing
		int flag = true;
		for(int i=0; i<n; i++){
			if(freq[str[i]] == 1) {
				flag = false;
				cout << str[i] << endl;
				break;
			}
		}
        //CornerCase
		if(flag) cout << -1 << endl;
	}
	return 0;
}