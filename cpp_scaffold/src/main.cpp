#include <mutex>
#include "lib.h"
#include <iostream>

using namespace std;

int main()
{
    numbers n;
    int v = n.AddTwoNumbers(7,8);
    cout << "numbers sum is " << v << endl;

    return 0;
}