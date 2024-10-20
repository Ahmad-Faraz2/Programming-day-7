#include <iostream>
using namespace std;
bool isPrime(int);
int primorial(int);
main()
{
    cout << "Enter number:";
    int n;
    cin >> n;
    cout << primorial(n);
    return 0;
}

bool isPrime(int num){
     if (num <= 1) {
        return false; 
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int primorial(int n) {
    int result = 1;
    int count = 0;
    int i = 2;
    while (true) {
        if (isPrime(i)) {
            result *= i;
            count++;
            if (count == n) break;
        }
        i++;
    }
    return result;
}
