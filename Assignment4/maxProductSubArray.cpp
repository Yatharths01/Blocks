#include<bits/stdc++.h>
using namespace std;

//TC : O(n)
//SC : O(1)
int maxPrdctSubArray(vector<int>& v){
    int x = v[0];
    int xmin = x;
    int maxP = x;
    for(int i=1; i<v.size(); i++){
        int temp = x;
        x = max({x*v[i], v[i], xmin*v[i]});
        xmin = min({v[i]*temp, v[i], xmin*v[i]});
        maxP = max(x, maxP);

    }
    return maxP;
}

//TC: n + n ~ O(n)
//SC: O(1)
int main() {
    // vector<int> v = {-1,-2,-9,-6};
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    cout << maxPrdctSubArray(v);
    return 0;
}