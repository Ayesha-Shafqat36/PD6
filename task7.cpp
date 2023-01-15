#include <iostream>
#include <cmath>
using namespace std;
void setTime(int Starting_hour,int Starting_minute,int Arrival_hour,int Arrival_minute);
main()
{
    int Starting_hour;
    int Starting_minute;
    int Arrival_hour;
    int Arrival_minute;
    int ST_hour;
    cout << "Exam starting time (hours): ";
    cin >> Starting_hour;
    cout << "Exam starting time(minutes): ";
    cin >> Starting_minute;
    cout << "Exam arrival time(hours): ";
    cin >> Arrival_hour;
    cout << "Exam arrival time(minutes: ";
    cin >> Arrival_minute;
    setTime(Starting_hour,Starting_minute,Arrival_hour,Arrival_minute);
}

void setTime(int Starting_hour,int Starting_minute,int Arrival_hour,int Arrival_minute)   
{
    int ST_time=(Starting_hour*60)+Starting_minute;
    int AT_time=(Arrival_hour*60)+Arrival_minute;
    int dif=ST_time-AT_time;
    if (dif == 0)
    {
        cout << "THE STUDENT ARRIVES ON TIME";
    }
    else if (dif < 0)
    {
        cout << "The student is late by "<< endl;
        dif = abs(dif);
        cout << (dif / 60) << " hour(s) and " << (dif % 60) << " minute(s)." << endl;
    }
    else {
        cout << "The student is early by "<< endl;
        cout << (dif / 60) << " hour(s) and " << (dif % 60) << " minute(s)." << endl;
    }
}