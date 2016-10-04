#include <iostream>
#include <iomanip>
using namespace std;

//Function to calculate and display time
void printTimeInHrMin(int time)
{
    //Declaration and calculation of variables
    int hr = time / 60;
    int min = time % 60;

    //Set output with leading zeros
    cout << time << " minutes in hours and minutes is "
        << setw(2) << setfill('0') << hr << ":"
        << setw(2) << setfill('0') << min << endl;}

//Main Function
int main()
{
    //Variable declation and initialization
    int x = 63, y = 14, z = 633;

    //Function execution with variables
    printTimeInHrMin(x);
    printTimeInHrMin(y);
    printTimeInHrMin(z);
    return 0;
}

/*
Name        : homework3
Arguments   : int hr, min, x, y, z
Return      : 0
Definition  : Display minutes in hr and min
*/
