Sample Input
5
Sample Output
      *
    * * *
  * * * * *
    * * *
      *
#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int i=1;
	int m = n-n/2; 
	while(i<=n){
		if(i<m){
			//Space
			for(int j=1; j<=m-i; j++){
				cout << " 	";
			}
			//Star
			for(int j=1; j<= 2*i-1; j++){
				cout << "*	";
			}
		}
		else if(i==m){
			for(int j=1; j<= 2*i-1; j++){
				cout << "*	";
			}
		}
		else if(i>m){
			//Space
			for(int j=1; j<= i-m; j++){
				cout << " 	";
			}
			//Star
			int iter = 4*m - 2*i -1;
			for(int j=1; j<= iter; j++){
				cout << "*	";
			}
		}
		cout << endl;
		i++;
	}
	return 0;
}