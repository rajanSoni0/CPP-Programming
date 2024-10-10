#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Car
{
public:
    string name;
    int weight;
    int age;
    void speedUp()
    {
        cout << "Speeding Up" << endl;
    }
    void BreakMaro()
    {
        cout << "Break Maardi" << endl;
    }
};
class Scorpio: public Car{

};
int main()
{
    Scorpio babbar;
    babbar.speedUp();
    return 0;
}