#include <iostream>
using namespace std;
float price(string month,float days);
float APrice(string month,float days);
main()
{
    string month;
    float days;
    float studio;
    float appartment;
    cout << "Enter month=";
    cin >> month;
    cout << "Enter days=";
    cin >> days;
    studio=price(month,days);
    cout << "Studio : "<< studio << endl;
    appartment=APrice(month,days);
    cout << "Appartment : "<< appartment << endl;
}
float price(string month,float days)
{
    float studio;
    float amount;
    float disc;
    if((month =="may" || month =="october") && days <=7)
    {
        studio=50*days;
        return studio;
    }
     if ((month =="may" || month =="october") && days <= 14 )
    {
        amount=50*days;
        disc=(amount*5)/100;
        studio=amount-disc;
        return studio;
    }
     if ((month =="may" || month =="october") && days >14 )
    {
        amount=50*days;
        disc=(amount*30)/100;
        studio=amount-disc;
        return studio;
    }
    if (month =="june" || month =="september")
    {
        studio=75.20*days;
        return studio;
    }
    if ((month =="june" || month =="september") && days > 14 )
    {
        amount=75.20*days;
        disc=(amount*20)/100;
        studio=amount=disc;
        return studio;
    }
    if (month =="july" || month =="august")
    {
        studio=76*days;
        return studio;
    }
}
float APrice(string month,float days)
{
    float appartment;
    float Amount;
    float dis;
    if ((month == "may" || month == "october") && days <=14)
    {
        appartment=65*days;
        return appartment;
    }
    if ((month == "may" || month == "october") && days > 14 )
    {
        Amount=65*days;
        dis=(Amount*10)/100;
        appartment=Amount-dis;
        return appartment;
    }
    if ((month =="june" || month =="september" )&& days <= 14)
    {
        appartment=68.70*days;
        return appartment;
    }
    if ((month =="june" || month =="september") && days > 14 )
    {
        Amount=68.70*days;
        dis=(Amount*10)/100;
        appartment=Amount-dis;
        return appartment;
    }
    if ((month =="july" || month =="august") && days <= 14)
    {
        appartment=77*days;
        return appartment;
    }
    if ((month =="july" || month =="august") && days > 14)
    {
        Amount=77*days;
        dis=(Amount*10)/100;
        appartment=Amount-dis;
        return appartment;
    }
}