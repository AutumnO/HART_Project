/*---
    by: Autumn Ossello and Harve C
    last modified:
---*/

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

/*--- PUT YOUR SIGNATURES, PURPOSES, and FUNCTION DEFINITIONS HERE ---*/

/*---
   test the functions above
---*/

int main()
{
    cout << boolalpha;

    string file_name;
    string file_location;
    string offending_party;
    string driver_license_num;
    string date_added;
    string reason_for_removal;
    
    cout << "Give the file name(ex. JoeyBadman666): ";
    cin >> file_name;
    cout << endl;
    
    file_location = "/users/Lolmonstamuse/Desktop/Computer Programming/CAT SHIT/NoAdopt/" + file_name + ".txt";
    // change directory to where needed
    ofstream fout;
    fout.open(file_location);
    
    cout << "Offender Name: ";
    getline(cin, offending_party);
    getline(cin, offending_party);
    cout << endl;
    
    cout << offending_party << endl; //take out final version
    
    cout << "Driver License #: ";
    cin >> driver_license_num;
    cout << endl;
    
    cout << "Current Date: ";
    getline(cin, date_added);
    getline(cin, date_added);
    cout << endl;
    
    cout << "Reason for Restriction: ";
    getline(cin, reason_for_removal);
    cout << endl;
    
    fout << "Offender Name: " << offending_party << endl;
    fout << "Driver License #: " << driver_license_num << endl;
    fout << "Date of Report: " << date_added << endl;
    fout << "Reason for Restriction: " << reason_for_removal << endl;
    
    // cout << () << endl; 

    return EXIT_SUCCESS;
}