#include<bits/stdc++.h>
using namespace std;

//TC : O(n)
//SC : O(n) <-- output array
void arrayIntersection(const vector<int>& v1, const vector<int>& v2, vector<int>& ans){
    int i = 0;
    int j = 0;
    while(i < v1.size() and j < v2.size()){
        if(v1[i] == v2[j]){
            ans.push_back(v1[i]);
            i++; j++;
        }else if(v1[i] < v2[j]){
            i++;
        }else {
            j++;
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
    cout << "[" << ans[0] << ", ";
    for(int i=1; i<ans.size()-1; i++){
        cout << ans[i] << ", ";
    }
    cout << ans[ans.size()-1] << "]" << endl;
}


//TC : nlogn + nlogn + n + n ~ O(nlogn)
//SC : O(1) <--- excluding input and output array 
int main()
{
    //Input
    int n;
    cin >> n;
    vector<int> v1(n), v2(n);
    inputAndSort(v1, n);
    inputAndSort(v2, n);
    //Main Call
    vector<int> ans;
    arrayIntersection(v1, v2, ans);
    //Print
    printOutput(ans);
    return 0;
}