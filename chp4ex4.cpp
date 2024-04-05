#include <iostream>
#include <iomanip>
#include <cmath>

const double MAX = 10.0;

using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::setprecision;


int main(void)

{
cout << setprecision(3);

    for (double i = 1; i <= MAX; i += 0.1)

    {

        cout << i << setw(6);

    }

    cout << endl << setw(0);

    for (double i = 1; i <= MAX; i += 0.1){

        cout << i * i << setw(6);
    }

    cout << endl;
    return 0;

}
