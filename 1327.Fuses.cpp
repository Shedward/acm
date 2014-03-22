
 // Problem: 1327. Fuses
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1327
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1327.Fuses.tests

#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;

    int res = (b - a +1)/ 2;
    if(a % 2 == 1 and b % 2 == 1) res++;
    std::cout << res << std::endl;
    
    return 0;
}

