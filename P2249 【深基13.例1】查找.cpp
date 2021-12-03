#include <iostream>
using namespace std;
const int N = 1e6 + 5;
int a[N];

int func(int a[], int k, int len) {
  int low = 0, high = len - 1; 
  while (low <= high) {
    int mid = (low + high) / 2;
    if (a[mid] == k) {
      for (int i = low; i <= mid; i++) {
        if (a[i] == k) {
          return i + 1;
        }
      }
    } else if (a[mid] > k) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return -1;
}

int main() {
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < m; i++) {
    int k;
    cin >> k;
    cout << func(a, k, n) << ' ';
  }
  return 0;
}
