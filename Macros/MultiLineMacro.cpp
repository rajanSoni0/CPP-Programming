#include <iostream>
using namespace std;
//For defining multiline macros, we need to append the (\) backslash after every line
#define PRINT_RECT(width, height)       \
    for (int i = 0; i < height; i++)    \
    {                                   \
        for (int j = 0; j < width; j++) \
        {                               \
            cout << "*";                \
        }                               \
        cout << endl;                   \
    }
int main()
{
    PRINT_RECT(4, 3);
    return 0;
}