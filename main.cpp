#include <iostream>

int main()
{
    int c_date, c_month, c_year, b_date, b_month, b_year, age_date, age_month, age_year;
    char x;

    int month[12] ={31, 28, 31,30,31,30,31,31,30,31,30,31};

    std::cout <<"                                               Age Calculator \n\n\n";

    std::cout <<"Enter Current Date as dd/mm/yyyy:- ";
    std::cin >> c_date >> x >> c_month >> x >> c_year;

    std::cout <<"Enter Your Birthday Date as dd/mm/yyyy:- ";
    std::cin >> b_date >> x >> b_month >> x >> b_year;

    if(b_date > c_date)
    {
        c_month--;
        c_date = c_date + month[b_month - 1];

    }

    if(b_month > c_month)
    {
        c_year--;
        c_month = c_month + 12;

    }

    age_date = c_date - b_date;
    age_month = c_month - b_month;
    age_year = c_year - b_year;

    std::cout <<"Your age is: \n" <<"Years:- " << age_year <<"\n" << "Months:- " << age_month << "\n" << "Days:- " << age_date;
    return 0;



}
