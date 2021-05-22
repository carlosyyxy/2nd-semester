#include <iostream>
using namespace std;
int binarySearch(int arr[], int li, int ls, int x);
int main() {
  int arr[] = {1, 2, 3, 4, 5};
  cout << "Busqueda: " << binarySearch(arr, 0, 4, 5);
  return 0;
}

int binarySearch(int arr[], int li, int ls, int x) {
  if (ls >= li) {
    int mit = li + (ls - li + 1) / 2;
    if (arr[mit] == x)
      return mit;
    if (arr[mit] > x)
      return binarySearch(arr, li, mit - 1, x);
    return binarySearch(arr, mit + 1, ls, x);
  }
  return -1;
}