#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "ENter number of items in array : ";
  cin >> n;
  int *arr = new int[n];
  int i = 0;
  cout << "Enter Values inside Array : \n";
  while (i < n) {
    cout << "Enter value of " << i << "th term : ";
    cin >> arr[i];
    i++;
  }
  cout << "Arry : [";
  for (int i = 0; i < n; i++) {
    cout << arr[i];
    if (i != n - 1) {
      cout << ", ";
    }
  }
  cout << "]\n";
  delete[] arr;
  return 0;
}