#include<bits/stdc++.h>
using namespace std;


//TC : O(n)
//sC : O(1) <-- excluding input and output array
void sumArrayTarget(const vector<int>& v, vector<int>& ans, int t){
    int i = 0;
    int j = v.size()-1;
    while(i<j){
        int sum = v[i] + v[j];
        if (sum == t){
            ans.push_back(v[i]);
            ans.push_back(v[j]);
            i++; j--;
        }else if(sum > t){
            j--;
        } else{
            i++;
        }
    }
}


//TC : n + nlogn = O(nlogn)
//SC : O(n) <-- Input array
void inputAndSort(vector<int>& v, int n){
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
}


//TC : O(n)
//SC : O(1)
void printOutput(const vector<int>& ans){
    for(int i = 0; i<ans.size(); i += 2){
        cout << ans[i] << " and " << ans[i+1] << endl;
    }
}

 
//TC : nlogn + n + n ~ O(nlogn)
int main()
{
    //Input
    int n, t;
    cin >> n;
    vector<int> v(n);
    inputAndSort(v, n);
    cin >> t;
    //Main Call
    vector<int> ans;
    sumArrayTarget(v, ans, t);
    //Print
    printOutput(ans);
    return 0;
}