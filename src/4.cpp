#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int num = rand() % 10 + 1;
    cout << "Random number between 1 and 10: " << num << endl;
    return 0;
}
