#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int i = 0;
    
    for (int j = 2; j <= n; i++)
        j += 6 * i;
    
    if (n == 1) i = 1;
    cout << i;

    return 0;
}