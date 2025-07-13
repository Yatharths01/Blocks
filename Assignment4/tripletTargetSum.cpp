#include<bits/stdc++.h>
using namespace std;


//TC : n*n ~ O(n^2)
//SC : O(1) <---Excluding Output
void tripletTargetSum(const vector<int>& v, vector<int>& ans, int t){
    int i = 0;
    for(int i =0; i<v.size()-2; i++){
        int j = i+1;
        int k = v.size() - 1;
        while(j<k){
            int sum = v[i] + v[j] + v[k];
            if(sum == t){
                ans.push_back(v[i]);
                ans.push_back(v[j]);
                ans.push_back(v[k]);
                j++; k--;
            }else if(sum < t){
                j++;
            } else{
                k--;
            }
        }
    }
}

//TC : n + nlogn ~ O(nlogn)
//SC : O(n) <-- Input array
void inputAndSort(vector<int>& v, int n){
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
}

//TC : O(n)
//SC : O(1)
void printOutput (const vector<int>& ans){
    for(int i=0; i<ans.size(); i++){
        if(i%3 == 0){
            cout << ans[i] << ", ";
        }
        if(i%3 == 1){
            cout << ans[i] << " and ";
        }
        if(i%3 == 2){
            cout << ans[i] << endl;
        }
    }
}


//TC : nlogn + n^2 + n  ~ O(n^2) 
//SC : O(1) <--- excluding input and output array 
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
    tripletTargetSum(v, ans, t);
    //Print
    printOutput(ans);
    return 0;
}