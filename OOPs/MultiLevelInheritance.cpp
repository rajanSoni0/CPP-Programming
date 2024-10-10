#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
    class Fruit{
        public:
        string name;
    };
    class Mango: public Fruit{
        public:
        int weight;
    };
    class Maldah : public Mango{
        int sugar_level;
    };
int main()
{
    Maldah m;
    return 0;
}