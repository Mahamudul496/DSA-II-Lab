
#include <iostream>
#include <cmath>
using namespace std;
  bool isPrime(int x)
  {
    if (x <= 1)
    {
        return false;
    }
    if (x == 2)
    {
        return true;
    }
    if (x % 2 == 0)
    {
        return false;
    }
    for (int i = 3; i <= sqrt(x); i += 2)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}


  int countPrimes(int arr[], int left, int right) {

    if (left == right) {
        return isPrime(arr[left]);
    }


    int mid = (left + right) / 2;


    int leftCount = countPrimes(arr, left, mid);
    int rightCount = countPrimes(arr, mid + 1, right);
    return leftCount + rightCount;
}

int main() {
    int n;
    cin >> n;
    int arr[n];


    for (int i = 0; i < n; i++)
        {
        cin >> arr[i];
    }

    cout << countPrimes(arr, 0, n - 1) << endl;

    return 0;
}
