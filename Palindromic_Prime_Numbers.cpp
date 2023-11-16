#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

void SieveOfEratosthenes(int n, vector<int>& primes) 
{ 
    bool prime[n + 1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p = 2; p * p <= n; p++) { 
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p) 
                prime[i] = false; 
        } 
    } 
    for (int p = 2; p <= n; p++) 
        if (prime[p]) {
            primes.push_back(p);
        }
}

bool isPalindrome(int num) {
    int original = num;
    int reversed = 0;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return original == reversed;
}

bool isEvenDigits(int num) {
    int count = 0;

    if (num == 0) {
        return true;
    }

    while (num != 0) {
        num /= 10;
        ++count;
    }

    return count % 2 == 0;
}


int main() {
    int t;
    long long int siize;
    cin >> t;
    vector<int> primes;
    SieveOfEratosthenes(100000, primes);

    while(t--){
        int n;
        cin>>n;

    vector<int> papr;

    for (int prime : primes) {
        if (isPalindrome(prime)) {
            papr.push_back(prime);
        }
    }
    int even = 0;
    int odd = 0;

    for(int i=0; i<n;i++){
        if (isEvenDigits(papr[i])) {
                even++;
            }
        else {
            odd++;
            }
    }
    cout<<even<<" "<<odd<<endl;
    }
    return 0;
}
