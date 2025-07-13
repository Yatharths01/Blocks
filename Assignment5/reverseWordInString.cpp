#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

//Input : i.like.this.program.very.much
//Output : much.very.program.this.like.i


//TC : O(n)
//SC : O(1)
int main(){
    //Input
    char str[100001];
    cin >> str;
    int n = strlen(str);
    //Reversing(string)
    reverse(str, str + n);
    //Reversing(words)
    int s = 0, e = 0;
    for(int i=0; i<n; i++){
        if(str[i] == '.'){
            e = i;
            reverse(str + s, str + e);
            s = i+1;
        }
    }
    //Reversing(last word)
    reverse(str + s, str + n);
    //Print 
    cout << str;
}