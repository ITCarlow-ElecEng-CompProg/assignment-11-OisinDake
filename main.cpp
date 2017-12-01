//Lab 11
//Oisin Dake
//tomorrow’s Date Calculator

//directives
#include <iostream>
#include <windows.h>
#include <math.h>
#include <cstdio>

struct date//defining the structure
{
	int day;
	int mon;
	int yr;
}
;
using namespace std;

//Main program
int main()
{

    date Date_Function(date);//prototype


    struct date tod;


    cout << "Tommorows Date Cal" << endl;// to tell user what the program does and to take in values
    cout << "Enter the day:";
    cin  >> tod.day;
    cout << "Enter the month:";
    cin  >> tod.mon;
    cout << "Enter the yearr:";
    cin  >> tod.yr;
    Date_Function(tod);

    return 0;
}

date Date_Function(date tod)//date cal function
{
    int monlength [12] = {31, 28, 31, 30, 30, 30, 31, 31, 30, 31, 30, 31};//array for no.of days per month

    struct date tom;

    tom.day = tod.day + 1;//to add on one day
    tom.mon = tod.mon;
    tom.yr = tod.yr;



    if(tom.day>monlength[tod.mon-1])//when its the end of the month
    {
    tom.day = 1;
    tom.mon = tod.mon+1;
    tom.yr = tod.yr;
    }

    if(tod.mon>=12)
    {
    if (tod.day==31)
    {
    tom.day = 1;
    tom.mon = 1;
    tom.yr = tod.yr+1;
    }
    }
    cout << "\nTommorows date:" << tom.day << "/" << tom.mon << "/" << tom.yr << endl;//show result to user

    return tom;
}
