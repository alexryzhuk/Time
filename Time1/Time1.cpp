// Time1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Time.h"
using namespace std;
int main()
{
    Time time(1,3,4);
    Time time1(2,4,5);

    bool ans = time >= time1;
    bool ans1 = time <= time1;
    cout << ans1<<endl;
    ++time; cout << time<<endl;
    --time; cout << time << endl;
    time++; cout << time << endl;
    time--; cout << time << endl;
    time += time1; cout << time << endl;
   time -= time1; cout << time << endl;
}

