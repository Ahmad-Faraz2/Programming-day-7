#include <iostream>
using namespace std;
bool isPrime(int);
main()
{
    cout << "Enter number:";
    int n;
    cin >> n;
    cout <<isPrime(n);
    return 0;
}

bool isPrime(int n){
     if (n <= 1) {
        return false; 
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

