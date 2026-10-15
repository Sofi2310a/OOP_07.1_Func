#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
    Student obj1("Sofiya", 19, 2);
    obj1.Input();
    obj1.Output();
    obj1++;
    obj1.Output();
    -obj1;
    obj1.Output();
    obj1 += 2;
    obj1.Output();
    obj1 -= 2;
    obj1.Output();

    return 0;
}