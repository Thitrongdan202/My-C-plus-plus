#include <iostream>

using namespace std;

int main()
{
    for ( int i = 1; i <= 100; i = i + 1)
    {
       cout << i << endl;
       if ( i== 60)
        continue;

        cout << i << endl;
    }
    return 0;
}
