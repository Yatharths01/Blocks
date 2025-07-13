#include<bits/stdc++.h>
using namespace std;


//TC : O(n+m)
//SC : O(1) <-- excluding input and output array
void addTwoArray(const vector<int>& u, const vector<int>& v, vector<int>& ans){
    int i = u.size() - 1;
    int j = v.size() - 1;
    int carry = 0;
    while(i>=0 && j>=0){
        int sum = u[i] + v[j] + carry;
        int digit = sum % 10;
        ans.push_back(digit);
        carry = sum / 10;
        i--; j--;
    }
    while(j>=0){
        int sum = v[j] + carry;
        int digit = sum % 10;
        ans.push_back(digit);
        carry = sum / 10;
        j--;
    }
    while(i>=0){
        int sum = u[i] + carry;
        int digit = sum % 10;
        ans.push_back(digit);
        carry = sum / 10;
        i--;
    }
    if(carry>0){
        ans.push_back(carry);
    }
}

//TC : O(n)
//SC : O(n) <-- Input array
void inputAndSort(vector<int>& v, int n){
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
}

//TC : O(n)
//SC : O(1)
void printOutput(vector<int>& ans){
    for(int i = ans.size()-1; i>=0; i--){
        cout << ans[i] << ", ";
    }
    cout << "END";
}


//TC : n + (n+m) + n ~ O(n+m)
//SC : O(1) <--- excluding input and output array
int main()
{
    //Input
    int n, m;
    cin >> n;
    vector<int> u(n);
    inputAndSort(u, n);
    cin >> m;
    vector<int> v(m);
    inputAndSort(v, m);
    //Main Call
    vector<int> ans;
    addTwoArray(u, v, ans);
    //Print 
    printOutput(ans);
    return 0;
}