#include <iostream>
using namespace std;
int DecimalToBinary(int x);

int main() {
  int x;
  cout << "Decimal: ";
  cin >> x;
  cout << "Binario: " << DecimalToBinary(x);
  return 0;
}

int DecimalToBinary(int x) {
  cout << x << endl;
  if (x == 0)
    return 0;
  else
    cout << x % 2 + 10<< "    " << x / 2 << endl;
    return x % 2 + 10 * DecimalToBinary(x / 2);
}