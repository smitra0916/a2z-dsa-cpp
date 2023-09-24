#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int n) {
  int sum = 0;
  int order = 0;
  int temp = n;

  while (temp > 0) {
    order++;
    temp /= 10;
  }

  temp = n;
  while (temp > 0) {
    int digit = temp % 10;
    sum += pow(digit, order);
    temp /= 10;
  }

  return sum == n;
}

int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;

  if (isArmstrong(n)) {
    cout << n << " is an Armstrong number." << endl;
  } else {
    cout << n << " is not an Armstrong number." << endl;
  }

  return 0;
}