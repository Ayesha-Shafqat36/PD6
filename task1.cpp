#include <iostream>
using namespace std;
string Activity(string temperature,string humidity);
main()
{
    string temperature;
    string humidity;
    string activity;
    cout << "Enter temperature:";
    cin >> temperature;
    cout << "Enter Humidity:";
    cin >> humidity;
    activity=Activity(temperature,humidity);
    cout << "Activity:"<< activity<< endl;

}
string Activity(string temperature,string humidity)
{
    string activity;
    if (temperature == "warm" && humidity == "dry")
    {
        activity="Play Tennis";
        return activity;
    }
    if (temperature == "warm" && humidity == "humid")
    {
        activity="Swim";
        return activity;
    }
    if (temperature == "cold" && humidity == "dry")
    {
        activity="Play basketball";
        return activity;
    }
    if (temperature == "cold" && humidity == "humid")
    {
        activity="Watch TV";
        return activity;
    }
}