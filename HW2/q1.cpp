/*
Give your answer to part 1 here.

a.
This one is given to you as an example.

#include <iostream>
using namespace std;
int main() {
    char inp[8];
    cin >> inp;
    cout << inp << endl;
    return 0;
}

Runtime error.
The code declares an array of size 8 to hold a string input.
If the user inputs a string longer than 7 characters (plus the null terminator),
it will cause a buffer overflow, leading to a runtime error.

b.

int main() {
    int a = "hello" / "world";
    return 0;
}

Compilation error.
The code defines that a is an int type, but "hello" and "world" is string type
so cannot assign "hello" and "world" to a
Also, string cannot divide string


c.

#include <iostream>
using namespace std;
int main()
{
    int myNum = 5;
    if (myNum < 10)
    {
        cout << "myNum is greater than 10" << endl;
    }
    else
    {
        cout << "myNum is 10 or less" << endl;
    }
}

Logic error.
In the code, "myNum is greater than 10" will be printed, when myNume is smaller than 10

d.

int main()
{
    int a = 4;
    int b = 0;
    int c = a / b;
}

Your answers to parts b, c, and d should end before this line.
*/

/*
Part 2:
Explain the what the following code is trying to do.
Find the bug making the results wrong
Document why and how it happens.
Write a simple fix for it.


What is the code trying to do?

What is the bug?

Why and how does it happen?

How to fix it?

*/

#include <iostream>
using namespace std;
int main()
{
    int a = 3;
    int b = 4;
    int percent = (a / b) * 100;
    cout << percent << "%" << endl;
    return 0;  // returning 0 for main() just means the program ended successfully
}
/*
This code is trying to compute what the percentage a is of b and then print the percentage
Bug: type of a and b is int, so a/b is also int which is not accurate. e.g. a=3 b=4 a/b=0 or a=5 b=4 a/b=1
we need use double/float to define a, b and percent
    double a = 3;
    double b = 4;
    double percent = (a / b) * 100;



*/