#include<bits/stdc++.h>
using namespace std;


//TC : O(n)
//SC : O(1)
void sort0And1(vector<int>& v){
    int p = 0;
    for(int i=0; i< v.size(); i++){
        if(v[i] == 0){
            swap(v[i], v[p]);
            p++;
        }
    }
}


//TC : n + n + n ~ O(n)
//SC : O(1) <--- excluding input array
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
    sort0And1(v);
    //Print
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " "; 
    }
    return 0;
}