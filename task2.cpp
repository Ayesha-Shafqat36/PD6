#include <iostream>
using namespace std;
string Grade(int percentage);
main()
{
    string name;
    int english;
    int maths;
    int chemistry;
    int socialSciences;
    int biology;
    int total;
    int percentage;
    string grade;
    cout << "Enter Name=";
    cin >> name;
    cout << "Enter English marks=";
    cin >> english;
    cout << "Enter Maths marks=";
    cin >> maths;
    cout << "Enter Chemistry marks=";
    cin >> chemistry;
    cout << "Enter Social Science marks=";
    cin >> socialSciences;
    cout << "Enter Biology marks=";
    cin >> biology;
    total=english+maths+chemistry+socialSciences+biology;
    cout << "Total Marks out of 500="<< total<< endl;
    percentage=(total*100)/500;
    cout << "Percentage="<< percentage<< endl;
    grade=Grade(percentage);
    cout << "Enter Grade :"<< grade<< endl;
}
string Grade(int percentage)
{
    string grade;
    if (percentage >90 && percentage <=100)
    {
        grade="A+";
        return grade;
    }
    if (percentage >80 && percentage <=90)
    {
        grade="A";
        return grade;
    }
    if (percentage >70 && percentage <=80)
    {
        grade="B+";
        return grade;
    }
    if (percentage >60 && percentage <=70)
    {
        grade="B";
        return grade;
    }
    if (percentage >50 && percentage <60)
    {
        grade="C";
        return grade;
    }
    if (percentage >40 && percentage <=50)
    {
        grade="D";
        return grade;
    }
    if (percentage >30 && percentage <=40)
    {
        grade="F";
        return grade;
    }
}