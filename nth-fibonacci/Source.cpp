#include <iostream>

using namespace std;

int getNthFib(int n);

int main()
{

    int result = getNthFib(6);
    cout << result <<  " ";
    return 0;
}

int getNthFib(int n) {
    // Write your code here.
    //o(n) time | o(1) space

    int ArrayTwo[] = { 0,1 };
    int count = 3;

    while (count <= n)
    {
        int curValue = ArrayTwo[0] + ArrayTwo[1];
        ArrayTwo[0] = ArrayTwo[1];
        ArrayTwo[1] = curValue;
        count++;
    }
    return n > 1 ? ArrayTwo[1] : ArrayTwo[0];
}
