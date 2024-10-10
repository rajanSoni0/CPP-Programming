/*Ina macro definition in which another macro is defined, the parent macro 
will be expanded first and then the child macro will be expanded.
*/
#include<iostream>
using namespace std;
#define CLERK 10
#define WORKER CLERK
int main()
{
    cout << WORKER;
}
/*Here we defined a macro named CLERK with value 10 and another macro
named WORKER with the value CLERK. 10 is printed. It means that the macro 
expansion of WORKER will go like this: WORKER -> CLERK -> 10.
*/