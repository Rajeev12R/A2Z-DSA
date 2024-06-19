#include <bits/stdc++.h>
using namespace std;
int main()
{

    // 1D Array

    int arr[5];

    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    arr[2] *= 10;
    cout << arr[2];

    // 2D Array

    int arr2[3][5] ;
    arr2[1][5] = 14;
    cout << arr2[1][2];

    //String 

    string r = "Rajeev";
    int len = r.size();
    cout << r[len-1] << endl;
    r[len-1] = 'j';
    cout << r[len-1] << endl;
    cout << r[0] << endl;
    cout << r[1] << endl;
    cout << r[2] << endl;
    cout << r[3] << endl;
    cout << r[4] << endl;
    cout << r[5] << endl;

        return 0;
}