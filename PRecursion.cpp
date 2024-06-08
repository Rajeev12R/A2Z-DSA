/*
#include<bits/stdc++.h>
using namespace std;
 void solve(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
      sum += i;
    }
    cout<<"The sum of the first "<<n<<" numbers is: "<<sum<<endl;
  }
 int main() {

    solve(5);
    solve(6);
  }



#include<bits/stdc++.h>
using namespace std;
void fact(int m){
  int mul = 1;
  for(int i = 1; i <=m; i++){
    mul *= i;
  }
  cout << "The factorial of the number "<<m<<" is: " << mul <<endl;
}
int main(){
  int m;
  cin >> m;
  fact(m);

return 0;
}

#include <bits/stdc++.h>
using namespace std;

void printArray(int ans[], int n) {
  cout << "The reversed array is:- " << endl;
   for (int i = 0; i < n; i++) {
      cout << ans[i] << " ";
   }
}

void reverseArray(int arr[], int n) {
   int ans[n];
   for (int i = n - 1; i >= 0; i--) {
      ans[n - i - 1] = arr[i];
   }
   printArray(ans, n);
}
int main() {
   int n = 5;
   int arr[] = {5,4,3,2,1};
   reverseArray(arr, n);
   return 0;
}
*/