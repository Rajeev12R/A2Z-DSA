#include <iostream> 

using namespace std;

void fun(int n, const int arr[]) { // Use const for array and size parameter
  int count = 0;
  for (int i = 0; i < 5; i++) { // Iterate through all elements (using size)
    if (n == arr[i]) {
      count++;
    }
  }
  cout << count << endl; // Add newline for better output formatting
}

int main() {
  int n;
  cin >> n;

  int arr[5] = {1, 2, 2, 2, 3}; // Array initialization


  fun(n, arr);

  return 0;
}
