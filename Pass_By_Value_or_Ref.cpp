#include <bits/stdc++.h>
using namespace std;

// pass by value
void doSomething(string s)
{
    s[0] = 't';
    cout << s << endl;
}
void ref(int arr2[], int n)
{
    arr2[0] += 100;
    cout << "Value of inside function " << arr2[0] << endl;
}

int main()
{
    string s = "raj";
    doSomething(s);
    cout << s << endl;

    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

    cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4];

    // pass by reference

    int n = 5;
    int arr2[n];
    for (int i = 0; i<=n; i++){
    cin >> arr2[i];
}
    ref(arr2,n);
    cout << "Value of inside function " << arr2[0] << endl;

    return 0;
}
