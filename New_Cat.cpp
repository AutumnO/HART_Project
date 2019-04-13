/*--- 
      FIRST VERSION:
      COPY this into a main.cpp in a NetBeans
      C++ Application Project (replace the given contents)

      improved 2019-03-30 with comment with ready-for-test-expression cout
      for easier test call setup (thanks Lilly Lyons!)
 ---*/

/*---
    by: Harve Criqui
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
    string cat_;
    
    
    
    cout << "Give File Name(ex. Ruby1123): ";
    cin >> file_name;
    cout << endl;
    file_name = "/users/Harve Criqui/Desktop/Cats/" + file_name + ".html"; // set to .html later //
    ofstream fout;
    fout.open(file_name);
    cout << "Name: ";
    cin >> cat_name;
    cout << endl << "Sex: ";
    cin >> cat_sex;
    
    fout << "Name: " << cat_name << "<br>";
    fout << "<font size= \"+2\">"  <<"Sex: " << cat_sex << ""
    
    
    
    
    
    
    
    
    return EXIT_SUCCESS;
}