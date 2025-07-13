#include<bits/stdc++.h>
using namespace std;


//TC : O(n)
//sC : O(1) <-- excluding input and output array
vector<int> PairOfRoses(const vector<int>& v, int t){
    int i = 0;
    int j = v.size()-1;
    int ans1;
    int ans2;

    while(i<j){
        int sum = v[i] + v[j];
        if (sum == t){
            ans1 = v[i];
            ans2 = v[j];
            i++; j--;
        }else if(sum > t){
            j--;
        } else{
            i++;
        }
    }
    return {ans1, ans2};
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
    cout << "Deepak should buy roses whose prices are " <<ans[0] << " and " << ans[1] << "." << endl;
}

 
//TC : nlogn + n + n ~ O(nlogn)
int main()
{
    //Testcases
    int t;
    cin >> t;
    while(t>0){
        //Input
        int n, target;
        cin >> n;
        vector<int> v(n);
        inputAndSort(v, n);
        cin >> target;
        //Main Call
        vector<int> ans;
        ans = PairOfRoses(v, target);
        //Print
        printOutput(ans);
        t--;
    }
    return 0;
}