#include <iostream>
using namespace std;
float fruitPrice(string fruit,float quantity,string day);
main()
{
    string fruit;
    float quantity;
    string day;
    float price;
    cout << "Enter Fruit name=";
    cin >> fruit;
    cout << "Enter day=";
    cin >> day;
    cout << "Enter quantity=";
    cin >> quantity;
    price=fruitPrice(fruit,quantity,day);
    cout << "Price="<<price << endl;
}
float fruitPrice(string fruit,float quantity,string day)
{
    float price;
    if (fruit=="banana" && (day=="monday" || day=="tuesday" || day=="wednesday" || day=="thursday" || day=="friday"))
    {
        price=quantity*2.50;
        return price;
    }
    if (fruit=="apple" && (day=="monday" || day=="tuesday" || day=="wednesday" || day=="thursday" || day=="friday"))
    {
        price=quantity*1.20;
        return price;
    }
    if (fruit=="orange" && (day=="monday" || day=="tuesday" || day=="wednesday" || day=="thursday" || day=="friday"))
    {
        price=quantity*0.85;
        return price;
    }
    if (fruit=="grapefruit" && (day=="monday" || day=="tuesday" || day=="wednesday" || day=="thursday" || day=="friday"))
    {
        price=quantity*1.45;
        return price;
    }
    if (fruit=="kiwi" && (day=="monday" || day=="tuesday" || day=="wednesday" || day=="thursday" || day=="friday"))
    {
        price=quantity*2.70;
        return price;
    }
    if (fruit=="pineapple" && (day=="monday" || day=="tuesday" || day=="wednesday" || day=="thursday" || day=="friday"))
    {
        price=quantity*5.50;
        return price;
    }
    if (fruit=="grapes" && (day=="monday" || day=="tuesday" || day=="wednesday" || day=="thursday" || day=="friday"))
    {
        price=quantity*3.85;
        return price;
    }
    if (fruit =="banana" && (day == "saturday" || day == "sunday"))
    {
        price=quantity*2.70;
        return price;
    }
    if (fruit =="apple" && (day == "saturday" || day == "sunday"))
    {
        price=quantity*1.25;
        return price;
    }
    if (fruit =="orange" && (day == "saturday" || day == "sunday"))
    {
        price=quantity*0.90;
        return price;
    }
    if (fruit =="grapefruit" && (day == "saturday" || day == "sunday"))
    {
        price=quantity*1.60;
        return price;
    }
    if (fruit =="kiwi" && (day == "saturday" || day == "sunday"))
    {
        price=quantity*3.00;
        return price;
    }
    if (fruit =="pineapple" && (day == "saturday" || day == "sunday"))
    {
        price=quantity*5.60;
        return price;
    }
    if (fruit =="grapes" && (day == "saturday" || day == "sunday"))
    {
        price=quantity*4.20;
        return price;
    }

}   