#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
 int a, b, c;
    cin >> a >> b >> c;
    if ((a >= 1 and a <= 1000) and(b >= 1 and b <= 1000) and(c >= 1 and c <= 1000))
    {
        cout << a + b + c;
    }  
    return 0;
}