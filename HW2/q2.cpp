/*
1.
line 29, while (repeat = true)
issue: 
"repeat = ture" is always asignning true to repeat, which cause infinite loop
we only want to determine whether repeat is true

fix: repeat == ture

2.
line 35, repeat == false;
issue: 
"repeat == false" is to determine whether repeat is false or not
BUT, we want to assign false to repeat, not to determine

fix: repeat = false

3.
line 39, int delta = inp - a;
issue: 
we have defined delta out of loop
BUT we define delta again in the loop

fix:
remove int
directly  "delta = int- a;"

*/
#include <iostream>
using namespace std;
int main()
{
    int inp = 0;
    int a = 3;
    int delta = 0;
    bool repeat = true;
    while (repeat = true)
    {
        cin >> inp;

        if (inp == -1)
        {
            repeat == false;
        }
        else
        {
            int delta = inp - a;
            cout << "Delta: " << delta << ". Enter -1 to exit.\n";
        }
    }

    cout << "Final Delta: " << delta << endl;
    return 0;
}