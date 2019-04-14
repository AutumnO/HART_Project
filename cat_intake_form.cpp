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
    string cat_id;
    string cat_name;
    string cat_sex;
    string fixed_status;
    string repeat_intake;
    string cat_age;
    string cat_birthdate;
    string cat_intake_date;
    string adoptees;
    string cat_appearance;
    string medications;
    string meds_instructions;
    string past_meds;
    string current_health_problems;
    string treated_health_problems;
    
    
    
    const string FONT_SIZE = "<font size= \"+2\">";
    
    
    cout << "Give Cat ID#: ";
    cin >> cat_id;
    cout << endl;
    file_name = cat_id;
    file_name = "/users/Lolmonstamuse/Desktop/Computer Programming/CAT SHIT/Cat Profiles/" + file_name + ".txt"; // set to .html later //
    ofstream fout;
    fout.open(file_name);
    
    cout << "Cat's Name: ";
    getline(cin, cat_name);
    getline(cin, cat_name);
    
    cout << endl << "Sex: ";
    cin >> cat_sex;
    
    cout << endl << "Spayed/Neutered?: ";
    getline(cin, fixed_status);
    getline(cin, fixed_status);
    
    cout << endl << "Date of Birth: ";
    getline(cin, cat_birthdate);
    
    cout << endl << "Age: ";
    getline(cin, cat_age);
    
    cout << endl << "Intake Date: ";
    getline(cin, cat_intake_date);
    
    cout << endl << "If adopted, to whom?: ";
    getline(cin, adoptees);
    
    cout << endl << "General Appearance: ";
    getline(cin, cat_appearance);
    
    cout << endl << "Current Medications: ";
    getline(cin, medications);
    
    cout << endl << "Medication Instructions: ";
    getline(cin, meds_instructions);
    
    cout << endl << "Past Medications: ";
    getline(cin, past_meds);
        
    cout << endl << "Current Health Problems: ";
    getline(cin, current_health_problems);
    
    cout << endl << "Treated Health Problems: ";
    getline(cin, treated_health_problems);
    
    cout << endl << "How many times has this cat been returned? (If first intake type 0): ";
    getline(cin, repeat_intake);
    
    fout << "Cat ID#: " << cat_id << endl;
    fout << "Cat Name: " << cat_name << endl;
    fout << "Sex: " << cat_sex << endl;
    fout << "Spayed/Neutered?: " << fixed_status << endl;
    fout << "Date of Birth: " << cat_birthdate << endl;
    fout << "Age: " << cat_age << endl;
    fout << "Intake Date: " << cat_intake_date << endl;
    fout << "Adoptee Names: " << adoptees << endl;
    fout << "General Appearance: " << cat_appearance << endl;
    fout << "Current Medications: " << medications << endl;
    fout << "Medication Instructions: " << meds_instructions << endl;
    fout << "Past Medications: " << past_meds << endl;
    fout << "Current Health Problems: " << current_health_problems << endl;
    fout << "Treated Health Problems: " << treated_health_problems << endl;
    fout << "Returned?: " << repeat_intake << " times." << endl;
    
    
    return EXIT_SUCCESS;
}