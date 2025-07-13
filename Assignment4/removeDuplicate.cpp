#include<bits/stdc++.h>
using namespace std;

//BruteForce
//TC : O(n^2)
//SC : O(1)
void removeDuplicate1(vector<int>& v){
    for(int i=1; i<v.size(); i++){
        while(v[i]==v[i-1]){
            v.erase(v.begin()+i);
            i--;
        }
    }
}

//Optimized
//TC : O(n)
//SC : O(n)
vector<int> removeDuplicate2(vector<int>& v){
    vector<int> ans;
    ans.push_back(v[0]);
    int idx = 0;
    for(int i=1; i<v.size(); i++){
        if(v[i] == ans[idx]) continue;
        else{
            ans.push_back(v[i]);
            idx++;
        }
    }
    return ans;
}

//TC : O(n)
//SC : O(1)
void printOutput(const vector<int>& v){
    cout << v.size() << endl;
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
}

//TC : O(n)
//SC : O(n)
int main()
{
    //Input
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    //Main Call
    vector<int> ans;
    ans = removeDuplicate2(v);
    //Print
    printOutput(ans);
    return 0;
}