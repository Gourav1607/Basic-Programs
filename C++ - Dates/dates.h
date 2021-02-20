#ifndef DATES_H
#define DATES_H

using namespace std;

class dates
{
protected:
    int day;
    int mon;
    int year;
    void check();

public:
    dates();
    void getdata();
    void display();
    int operator>(const dates &);
    int operator<(const dates &);
    int operator==(const dates &);
};

dates::dates()
{
    day = 1;
    mon = 1;
    year = 1950;
}

int dates::operator<(const dates &d)
{
    if (year < d.year)
        return 1;
    else
        return 0;

    if (year == d.year)
    {
        if (mon < d.mon)
            return 1;
        else
            return 0;

        if (mon == d.mon)
        {
            if (day < d.day)
                return 1;
            else
                return 0;
        }
    }
}

int dates::operator>(const dates &d)
{
    if (year > d.year)
        return 1;
    else
        return 0;

    if (year == d.year)
    {
        if (mon > d.mon)
            return 1;
        else
            return 0;

        if (mon == d.mon)
        {
            if (day > d.day)
                return 1;
            else
                return 0;
        }
    }
}

int dates::operator==(const dates &d)
{
    if (year == d.year && mon == d.mon && day == d.day)
        return 1;
    else
        return 0;
}

void dates::check()
{
    if (day <= 0 || mon <= 0 || year <= 0 || mon > 12)
        getdata();
    else if ((year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) && mon == 2 && day > 29)
        getdata();
    else if ((year % 400 != 0 || (year % 100 != 0 && year % 4 == 0)) && mon == 2 && day >= 29)
        getdata();
    // else if (mon == 2 && year % 4 == 0 && day > 29)
    //     getdata();
    else if ((mon == 4 || mon == 6 || mon == 9 || mon == 11) && day >= 31)
        getdata();
    else if (day > 31)
        getdata();
    else if (year > 2013)
        getdata();
    else if (year < 1900)
        getdata();
}

void dates::getdata()
{
    cout << "\n Enter Date (dd mm yyyy) ";
    cin >> day;
    cin >> mon;
    cin >> year;
    check();
}

void dates::display()
{
    cout << day << " " << mon << " " << year;
}

#endif
