// Sample Input
// 5
// Sample Output
// *********
// **** ****
// ***   ***
// **     **
// *       *
// **     **
// ***   ***
// **** ****
// *********
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i=1; 
    while(i <= n){
        //Stars
        int j = 1;
        while(j <= (n-i+1)){
			if(i == 1 && j == (n-i+1)) break;
            cout << "*";
            j++;
        }
        //Spaces
        int k = 2;
        while(k <= 2*(i-1)){
            cout << " ";
            k++;
        }
        //Stars
        int l = 1;
        while(l <= (n-i+1)){
            cout << "*";
            l++;
        }
        cout << endl;
        i++;
    }
	i =2;
    while(i <= n){
        //Stars
        int j = 1;
        while(j <= i){
            cout << "*";
            j++;
        }
        //Spaces
        int k = 2;
        while(k <= (2*(n-i))){
            cout << " ";
            k++;
        }
        //Stars
        int l = 1;
        while(l <= i){
			if(i == n && l == i){
                l++;
                continue;
            }
            cout << "*";
            l++;
        }
        cout << endl;
        i++;
    }
    return 0;
}