/*--- 
      FIRST VERSION:
      COPY this into a main.cpp in a NetBeans
      C++ Application Project (replace the given contents)

      improved 2019-03-30 with comment with ready-for-test-expression cout
      for easier test call setup (thanks Lilly Lyons!)
 ---*/

/*---
    by: Harve Criqui & West Modafferi
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
    
    // From Autumn
    
    const string FONT_SIZE = "<font size= \"+2\">";
    
    
    string file_name;
    string cat_name;
    string cat_sex;
    string cat_;
    string adoptee_name;
    string adoptee_age;
    string adoptee_address;
    string why_adopt;
    string past_experience;
    string DL_number;
    string litter_box; 
    string financial_food;
    string inside_outside_cat;
    string title;
    
    cout << "Give File Name(ex. Ruby1123): ";
    
    cin >> file_name;
    cout << endl;
    
    //file_name = "/c/Users/west/Desktop/Cats/" + file_name + ".html"; // set to .html later //
    
    
    file_name = file_name + ".html";
    cout << file_name << endl;
    
    ofstream fout;
    fout.open(file_name);
    if(fout.fail())
    {
        cout << "Failed to open file" << endl;
    }
    
    
    
    cout << "Adoptee Name: ";
    
    getline(cin, adoptee_name);  
    getline(cin, adoptee_name);
    
    cout << endl;
            
    cout << endl << "Adoptee Address: ";
    
    getline(cin, adoptee_address);
    
    cout << endl;
            
    cout << endl << "DL #: ";
    
    getline(cin, DL_number);
    
    cout << endl;
            
    cout << "Why they want to adopt? ";
    
    getline(cin, why_adopt);
    
    cout << endl;
            
    cout << "Any Past Experiences with cats? ";
    
    getline(cin, past_experience);
    
    cout << endl;
    
    cout << "Do you have a litter box? ";
    
    getline(cin, litter_box);
            
    cout << endl;
    
    cout << "Adequate financial means to feed a cat? ";
    
    getline(cin, financial_food);
    
    cout << endl;
    
    cout << "Will you allow the cat to roam outside? ";
    
    getline(cin, inside_outside_cat);
    
    cout << endl;
    
    
    
    //fout << FONT_SIZE << "Name: " << "<input type=\"text\" value= " << cat_name << ">" << "<br>";
    
    //cout << "Any past"
    
    
   // fout << "<font size= \"+6\">" << "           People Trying to Adopt a cat          " << title << endl;
     
    
    
    fout << FONT_SIZE << "<h1><pre>" << "          People Trying to Adopt a cat          " << "</pre></h1>" << endl;
    
    fout << "<ul>" << endl;
    
    fout << "<li>Adoptee Name: " << adoptee_name << "</li>";
    
    fout << endl;
    
    fout << "<li>Adoptee Address: " << adoptee_address << "</li>";
    
    fout << endl;
    
    
    fout << "<li>DL #: " << DL_number << "</li>";
    
    fout << endl;
    
    fout << "<li>Why they want to adopt?: " << why_adopt << "</li>";
    
    fout << endl;
    
    fout << "<li>Any Past Experiences with cats?: " << past_experience << "</li>";
    
    fout << endl;
    
    fout << "<li>Do you have a litter box?: " << litter_box << "</li>";
    
    fout << endl;
    
    fout << "<li>Adequate financial means to feed a cat?: " << financial_food << "</li>";
    
    fout << endl;
    
    fout << "<li>Will you allow the cat to roam outside?: " << inside_outside_cat << "</li>";
    
    fout << "</ul>" << endl;
    
    
    
    
    
    return EXIT_SUCCESS;
}