#include <iostream>
using namespace std;
string Symbol(int date,string month);
main()
{
    int date;
    string month;
    string sign;
    cout << "Enter date:";
    cin >> date;
    cout << "Enter month:";
    cin >> month;
    sign=Symbol(date,month);
    cout << "Sign name="<< sign<< endl;

}
string Symbol(int date,string month)
{
    string sign;
    if ((month == "march" || month == "april") && (date >=21 || date <=19))
    {
        sign="Aries";
        return sign;
    }
    if ((month == "april" || month == "may") && (date >=20 || date <=20))
    {
        sign="Taurus";
        return sign;
    }
    if ((month == "may" || month == "june") && (date >=21 || date <=20))
    {
        sign="Gemini";
        return sign;
    }
    if ((month == "june" || month == "july") && (date >=21 || date <=22))
    {
        sign="Cancer";
        return sign;
    }
    if ((month == "july" || month == "august") && (date >=23 || date <=22))
    {
        sign="Leo";
        return sign;
    }
    if ((month == "august" || month == "september") && (date >=23 || date <=22))
    {
        sign="Virgo";
        return sign;
    }
    if ((month == "september" || month == "october") && (date >=23 || date <=22))
    {
        sign="Libra";
        return sign;
    }
    if ((month == "october" || month == "november") && (date >=23 || date <=21))
    {
        sign="Scorpio";
        return sign;
    }
    if ((month == "november" || month == "december") && (date >=22 || date <=21))
    {
        sign="Sagittarius";
        return sign;
    }
    if ((month == "december" || month == "january") && (date >=22 || date <=19))
    {
        sign="Capricon";
        return sign;
    }
    if ((month == "january" || month == "february") && (date >=20 || date <=18))
    {
        sign="Aquarius";
        return sign;
    }
    if ((month == "february" || month == "march") && (date >=19 || date <=20))
    {
        sign="Pices";
        return sign;
    }
}
