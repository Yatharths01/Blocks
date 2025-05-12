// Luke Skywalker gave Chewbacca an integer number x. Chewbacca isn't good at numbers but he loves inverting digits in them. Inverting digit t means replacing it with digit 9-t.
// Help Chewbacca to transform the initial number x to the minimum possible positive number by inverting some (possibly, zero) digits. The decimal representation of the final number shouldn't start with a zero.
// Sample Input
// 4545
// Sample Output
// 4444
// Constraints
// x <= 100000000000000000

#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll transformNum(ll n){
    ll result = 0, factor = 1;
    while(n > 10){
        int digit = n % 10;
        int inverted = 9 - digit;
        if(inverted < digit) digit = inverted;
        result = digit * factor + result;
        factor *= 10;
        n /= 10;
    }
    if(n != 9){
        int inverted = 9 - n;
        if(inverted < n) n = inverted;
        result = n * factor + result;
    }else{
        result = n * factor + result;
    }
    return result;
}

int main() {
    ll n;
    cin >> n;
    cout << transformNum(n);
    return 0;
}

//ALTERNATE APPROACH(BRUTE FORCE) :
// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main() {
// 	long long n;
// 	cin >> n;
// 	long long checker = 1;
// 	long long newDigit;
// 	long long Digit = 0;
// 	while(n > checker*10){
// 		newDigit = n % (10*checker);
// 		Digit = min(newDigit, (9*checker- newDigit + (2*Digit)));
// 		n = n - newDigit + Digit;
// 		checker *= 10;
// 	}
// 	if(((n - Digit)/ checker) == 9){
// 		cout << n;
// 	}else{
// 		newDigit = n % (10*checker);
// 		Digit = min(newDigit, (9*checker - newDigit + (2*Digit)));
// 		cout << Digit;
// 	}
// 	return 0;
// }
