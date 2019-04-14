/*---
    by: Autumn Ossello
    last modified: 
---*/

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/*--- PUT YOUR SIGNATURES, PURPOSES, and FUNCTION DEFINITIONS HERE ---*/

/* signature : calculate_age : int int int int int int -> int
   purpose : expects a month, day, and year of birth, then the current month,
        day, and year, and returns the current age of the cat
 * tests :
 *      birthyear >= current year
 *      birthyear < current year
 *      birthmonth 
 * 
 *      calculate_age(10, 15, 1998, 4, 13, 2019) = 20
 *      calculate_age(1, 15, 1998, 4, 15, 2019) = 21
 *      calculate_age(4, 13, 1998, 4, 13, 1998) = 21
 * 
 *      calculate_age(4, 13, 1998, 5, 25, 1998) = 0
 *      calculate_age(1, 1, 2000, 1, 1, 1998) = 0
*/

int calculate_age(int birth_month, int birth_day, int birth_year, int current_month, int current_day, int current_year)
{
    int current_cat_age;
    if (birth_year >= current_year)
    {
        current_cat_age = 0;
    }
    else
    {
        if (birth_month == current_month)
        {
            if (birth_day >= current_day)
            {
                current_cat_age = (current_year - birth_year);
            }
            else
            {
                current_cat_age = (current_year - birth_year) - 1;
            }
        }
        else if (birth_month < current_month)
        {
            current_cat_age = (current_year - birth_year);
        }
        else if (birth_month > current_month)
        {
            current_cat_age = (current_year - birth_year) - 1;
        }
    }
    return current_cat_age;
}

/*---
   test the functions above
---*/

int main()
{
    cout << boolalpha;

    
    cout << "*** Testing calculate_age ***" << endl;
    cout << (calculate_age(10, 15, 1998, 4, 13, 2019) == 20) << endl;
    cout << (calculate_age(1, 15, 1998, 4, 15, 2019) == 21) << endl;
    cout << (calculate_age(4, 13, 1998, 4, 13, 1998) == 0) << endl;
    cout << (calculate_age(4, 13, 1998, 5, 25, 2000) == 2) << endl;
    cout << (calculate_age(1, 1, 2000, 1, 1, 1998) == 0) << endl;
    
    // cout << () << endl; 

    return EXIT_SUCCESS;
}