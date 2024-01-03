#include <iostream>
#include <vector>
using namespace std;
// Finding the factorial number using the (10^9 + 7):
int factorial(int n)
{
    int m = 1000000007;
    int fac = 1;
    for (int i = 1; i <= n; i++)
    {
        fac = fac * (i) % m;
    }
    return fac;
}
// Finding the GCD/HCF of an given number:
int getHcf(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}
// Counting the prime number using the simple sieve or sieve of eratestheres:
int countPrimes(int n)
{
    int count = 0;
    vector<bool> prime(n + 1, true);

    prime[0] = prime[1] = false;

    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            count++;
            cout << "Prime is: " << i << endl;
            for (int j = i * 2; j < n; j = j + i)
            {
                prime[j] = 0;
            }
        }
    }
    return count;
}
int main()
{
    // Counting the prime numbers present in the given numbers:
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int ans1 = countPrimes(n);
    cout << "The answer is: " << ans1 << endl;

    // finding out the GCD/HCF:
    int a;
    int b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    int ans2 = getHcf(a, b);
    cout << "The HCF / GCD of " << a << " and " << b << " is: " << ans2 << endl;

    // Finding the factorial number:
    int num;
    cout << "Enter the value of num: ";
    cin >> num;
    int ans3 = factorial(num);
    cout << "The factorial is: " << ans3 << endl;
}