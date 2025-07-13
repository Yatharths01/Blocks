// #include<bits/stdc++.h>
// using namespace std;

// //Input : 1
// // 4
// // 54 546 548 60

// //Output : 6054854654

// bool comparator(char str1[6], char str2[6]){
//     char temp1[12];
//     char temp2[12];
//     //Copy in temp var
//     strcpy(temp1, str1);
//     strcpy(temp2, str2);
//     //Concatenate
//     strcat(temp1, str2);
//     strcat(temp2, str1);

//     return strcmp(temp1, temp2) > 0 ? true : false ;
// }


// int main()
// {
//     //TestCases
//     int t;
//     cin >> t;
//     char str[100][6];
//     for(int i=0; i<t; i++){
//         //Input
//         int n;
//         cin >> n;
//         for(int j=0; j<n; j++){
//             cin >> str[j];
//         }
//         //Sorting with Custom Comparator
//         sort(str, str+n, comparator);
//         //Printing
//         for(int j=0; j<n; j++){
//             cout << str[j];
//         }
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;


bool compare(int a, int b){
    char temp_a[12];
    char temp_b[12];
    sprintf(temp_a, "%d", a);
    sprintf(temp_b, "%d", b);
    char temp_a1[12];
    sprintf(temp_a1, "%d", a);
    strcat(temp_a, temp_b);
    strcat(temp_b, temp_a1);
    return strcmp(temp_a, temp_b) > 0 ? true : false ;
}

int main()
{
    int t;
    cin >> t;
    int arr[100];
    while(t--){
        int n;
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr, arr+n, compare);
        for(int j=0; j<n; j++){
            cout << arr[j];
        }

    }
    return 0;
}