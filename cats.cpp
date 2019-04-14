/*--- 
      FIRST VERSION:
      COPY this into a main.cpp in a NetBeans
      C++ Application Project (replace the given contents)

      improved 2019-03-30 with comment with ready-for-test-expression cout
      for easier test call setup (thanks Lilly Lyons!)
 ---*/

/*---
    by: Harve Criqui, Autumn Ossello
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
    string cat_name;
    string cat_sex;
    string cat_age;
    string cat_birthdate;
    string cat_intakedate;
    string fixed_status;
    string repeat_intake;
    
    const string FONT_SIZE = "<font size= \"+2\">";
    
    
    cout << "Give File Name(ex. Ruby1123): ";
    cin >> file_name;
    cout << endl;
    file_name = "/users/Lolmonstamuse/Desktop/Computer Programming/CAT SHIT/Cat Profiles/" + file_name + ".html"; // set to .html later //
    ofstream fout;
    fout.open(file_name);
    cout << "Cat's Name: ";
    cin >> cat_name;
    cout << endl << "Sex: ";
    cin >> cat_sex;
    cout << endl << "Spayed/Neutered?: ";
    cin >> fixed_status;
    cout << endl << "Have we seen this cat before?: ";
    getline(cin, repeat_intake);
    
    fout << FONT_SIZE << "Name: " << "<input type=\"text\" value= " << cat_name << ">" << "<br>";
    fout << FONT_SIZE << "Sex: " << "<input type=\"text\" value= " << cat_sex << ">" << "<br>";
    fout << FONT_SIZE << "Spayed/Neutered?: " << "<input type=\"text\" value= " << fixed_status << ">" << "<br>";
    fout << FONT_SIZE << "Returned Cat?: " << "<input type=\"text\" value= " << repeat_intake << ">" << "<br>";
    fout << "</font>";
    
    
    return EXIT_SUCCESS;
}