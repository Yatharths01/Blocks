#include<iostream>
#include<cstring>
using namespace std;

//Input : aaabbccds
//Output : a3b2c2ds


//TC : O(n)
//SC : O(1)
int main() {
    //Input
	char str[1001];
	cin >> str;
	int n = strlen(str);
    //Processing
	int count = 1;
	char temp = str[0];
	for(int i=1; i<=n; i++){
		if(str[i] == temp) count++;
		else{
			cout << str[i-1];
			if(count > 1) cout << count;
			count = 1;
			temp = str[i];
		}
	}
	return 0;
}