#include<bits/stdc++.h>
using namespace std;

//TC : n + nlogn ~ O(nlogn) 
void squareSortedArray(vector<int>& v){
    for(int i=0; i<v.size(); i++){
        v[i] = v[i]*v[i];
    }
    sort(v.begin(), v.end());
}

//TC: O(n)
//SC : O(1)
void printOutput(vector<int>& v){
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
}

//TC : n + nlogn + n ~ O(nlogn)
//SC : O(1)
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
    squareSortedArray(v);
    //Print
    printOutput(v);
    return 0;
}