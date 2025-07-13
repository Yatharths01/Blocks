#include<bits/stdc++.h>
using namespace std;

//TC : O(n)
//SC : O(1)
int circularSubarraySum(vector<int>& v){
    int msf = v[0];
    int x = v[0];
    int lsf = v[0];
    int y = v[0];
    int total = v[0];
    for(int i=1; i< v.size(); i++){
        x = max(x+v[i], v[i]);
        y = min(y+v[i], v[i]);
        msf = max(x, msf);
        lsf = min(y, lsf);
        total += v[i];
    }

    if(msf > 0){
        msf = max(msf, total - lsf);
        return msf;
    }else return msf;
}

//TC : O(n)
//SC : O(1) 
int main()
{
    //Input
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n; i++){
        cin >> v[i];
    }
    //Main Call
    cout << circularSubarraySum(v);
    return 0;
}