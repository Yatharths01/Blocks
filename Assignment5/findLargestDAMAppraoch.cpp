#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

bool comparator(const char* a, const char* b) {
    char temp1[12], temp2[12];
    strcpy(temp1, a);
    strcat(temp1, b);
    strcpy(temp2, b);
    strcat(temp2, a);
    return strcmp(temp1, temp2) > 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        char* str[100];
        for (int i = 0; i < n; i++) {
            str[i] = new char[6];
            cin >> str[i];
        }

        sort(str, str + n, comparator);

        for (int i = 0; i < n; i++)
            cout << str[i];
        cout << endl;

        for (int i = 0; i < n; i++)
            delete[] str[i];  // cleanup
    }

    return 0;
}