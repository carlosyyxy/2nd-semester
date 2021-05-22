#include <iostream>
using namespace std;
int collatz(int x);

int main() {
  int x;
  cout << "Numero: ";
  cin >> x;
  cout << "Resultado: " << collatz(x);
  return 0;
}

int collatz(int x) {
  if (x > 1) {
    if (x % 2 == 0)
      return collatz(x / 2);
    else
      return collatz(3 * x + 1);
  }
}