#include <bits/stdc++.h>
using namespace std;

    bool isPalindrome(int x) {
        long long int reverseNum=0;         //LONG LONG INT to allow go beyond range for the time being
        int i=x;
        while(x>0&&i>0)                     //ONLY positive nos
        {
            reverseNum=(reverseNum*10)+(i%10);
            if (reverseNum > INT_MAX || reverseNum < INT_MIN) {
                return 0;
                break;
        }
            i=i/10;
        }
    if(reverseNum==x)
        return true;
    else
        return false;
    }


int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;

  if (isPalindrome(n)) {
    cout << n << " is an Palindrome number." << endl;
  } else {
    cout << n << " is not an Palindrome number." << endl;
  }

  return 0;
}