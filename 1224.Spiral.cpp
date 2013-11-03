
 // Problem: 1224. Spiral
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1224
 // Author: Shed (86286AA)
 // Language: g++ (g++)
 // Tests: 1224.Spiral.tests

#include <iostream>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    if(m >= n){
    	cout << 2 * (n-1);
    } else {
    	cout << 2 * (m - 1) + 1;
    }
    return 0;
}