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
    string cat_id;
    string cat_name;
    string cat_sex;
    string fixed_status;
    string repeat_intake;
    string cat_age;
    string cat_birthday;
    string cat_intake_date;
    string adoptees;
    string cat_appearance;
    string medications;
    string meds_instructions;
    string past_meds; //not currently in use
    string current_health_problems;
    string treated_health_problems;
    string other_notes;
    
    
    const string FONT_SIZE = "<font size= \"+2\">";
    
    
    cout << "Give Cat ID#(file name): ";
    cin >> cat_id;
    cout << endl;
    file_name = cat_id;
    file_name = "/users/Harve Criqui/Desktop/Cats/" + file_name + ".html";
    ofstream fout;
    fout.open(file_name);
    
    cout << "Cat's Name: ";
    getline(cin, cat_name);
    getline(cin, cat_name);
    
    cout << endl << "Sex: ";
    getline(cin, cat_sex);
    
    cout << endl << "Spayed/Neutered?: ";
    getline(cin, fixed_status);
    
    cout << endl << "Date of Birth: ";
    getline(cin, cat_birthday);
    
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
 
    cout << endl << "Other notes: ";
    getline(cin, other_notes);

    
    
    fout << "<!DOCTYPE html>" << "\n";
    fout << "<!-- saved from url=(0055)file:///C:/Users/Harve%20Criqui/Desktop/Cats/Kitty.html -->" << "\n";
    fout << "<html lang=\"en\"><head><meta http-equiv=\"Content-Type\" content=\"text/html; charset=windows-1252\">" << "\n";
    fout << "    <script>" << "\n";
    fout << "\n";
    fout << "// ****Functions by Adam Carter**** //" << "\n";
    fout << "	function editText(id) {" << "\n";
    fout << "            span_id = id;" << "\n";
    fout << "            let button_span = span_id + \"_button\";" << "\n";
    fout << "            let span_text = document.getElementById(span_id).innerHTML;" << "\n";
    fout << "            let input = '<input type=\"text\" value=\"' + span_text + '\" />';" << "\n";
    fout << "            let button_content = \"<button onclick=\\\"saveText('\" + id + \"')\\\">Save</button>\";" << "\n"; 
    fout << "            document.getElementById(button_span).innerHTML = button_content;" << "\n";
    fout << "            document.getElementById(span_id).innerHTML = input;" << "\n";
    fout << "        }" << "\n";
    fout << "\n";
    
    fout << "        function saveText(id) {" << "\n";
    fout << "            span_id = id;" << "\n";
    fout << "            let button_span = span_id + \"_button\";" << "\n";
    fout << "            let span_text = document.getElementById(span_id).children[0].value;" << "\n";
    fout << "            let button_content = \"<button onclick=\\\"editText('\" + id + \"')\\\">Edit</button>\"" << "\n"; // put semi colon button>;\""
    fout << "            document.getElementById(button_span).innerHTML = button_content;" << "\n";
    fout << "            document.getElementById(span_id).innerHTML = span_text;" << "\n";
    fout << "        }" << "\n";
    
    fout << "    </script>" << "\n";
    fout << "</head>" << "\n";
    fout << "\n";
    
    fout << "<font size=\"+2\">";
    fout << "<h1><pre>";          
    fout << "\n";
    fout << "General Profile";
    fout << "\n";
    fout << "</pre></h1>";
    
    fout << "<body style=\"background-color:#ffc8f7\">" << "\n";
    fout << "<ul>" << "\n";    // Opens list
    
    fout << "<li><i>ID#:</i>" << "\n";
    fout << "<span id=\"ID\">" << cat_id << "</span> <span id=\"ID_button\"><button onclick=\"editText(&#39;ID&#39;)\">Edit</button></span> </li> <br>" << "\n";
    
    fout << "<li><i>Name:</i>" << endl;
    fout << "<span id=\"catname\">" << cat_name << "</span> <span id=\"catname_button\"> <button onclick=\"editText(&#39;catname&#39;)\"> Edit </button> </span> </li> <br>" << "\n";

    fout << "<li><i>Sex:</i>" << "\n";
    fout << "<span id=\"catsex\">" << cat_sex << "</span> <span id=\"catsex_button\"><button onclick=\"editText(&#39;catsex&#39;)\">Edit</button></span> </li> <br>" << "\n";

    fout << "<li><i>Date of Birth:</i>" << "\n";
    fout << "<span id=\"birthday\">" << cat_birthday << "</span> <span id=\"birthday_button\"><button onclick=\"editText(&#39;birthday&#39;)\">Edit</button></span> </li> <br>" << "\n";

    fout << "<li><i>Age:</i>" << "\n";
    fout << "<span id=\"age\">" << cat_age << "</span> <span id=\"age_button\"><button onclick=\"editText(&#39;age&#39;)\">Edit</button></span> </li> <br>" << "\n";

    fout << "<li><i>Intake Date:</i>" << "\n";
    fout << "<span id=\"intakedate\">" << cat_intake_date << "</span> <span id=\"intakedate_button\"><button onclick=\"editText(&#39;intakedate&#39;)\">Edit</button></span> </li> <br>"  << "\n";

    fout << "<li><i>Spayed/Neutered?:</i>" << "\n";
    fout << "<span id=\"spayed\">" << fixed_status << "</span> <span id=\"spayed_button\"><button onclick=\"editText(&#39;spayed&#39;)\">Edit</button></span> </li> <br>" << "\n";

    fout << "<li><i># of times returned(if not returned put 0):</i>" << "\n";
    fout << "<span id=\"returnnum\">" << repeat_intake << "</span> <span id=\"returnnum_button\"><button onclick=\"editText(&#39;returnnum&#39;)\">Edit</button></span> </li> <br>" << "\n";

    fout << "<li><i>Appearance:</i>" << "\n";
    fout << "<span id=\"appearance\">" << cat_appearance << "</span> <span id=\"appearance_button\"><button onclick=\"editText(&#39;appearance&#39;)\">Edit</button></span> </li> <br>" << "\n";
	
    fout << "<li><i>Medications:</i>" << "\n";
    fout << "<span id=\"medication\">" << medications << "</span> <span id=\"medication_button\"><button onclick=\"editText(&#39;medication&#39;)\">Edit</button></span> </li> <br>" << "\n";

    fout << "<li><i>Medication Instructions:</i>" << "\n";
    fout << "<span id=\"medinstructions\">" << meds_instructions << "</span> <span id=\"medinstructions_button\"><button onclick=\"editText(&#39;medinstructions&#39;)\">Edit</button></span> </li> <br>" << "\n";

    fout << "<li><i>Current Health Problems:</i>" << "\n";
    fout << "<span id=\"problems\">" << current_health_problems << "</span> <span id=\"problems_button\"><button onclick=\"editText(&#39;problems&#39;)\">Edit</button></span> </li> <br>" << "\n";

    fout << "<li><i>Treated Health Problems:</i>" << "\n"; 
    fout << "<span id=\"treated\">" << treated_health_problems << "</span> <span id=\"treated_button\"><button onclick=\"editText(&#39;treated&#39;)\">Edit</button></span> </li> <br>"  << "\n";

    fout << "<li><i>Potential Adopters:</i>" << "\n";
    fout << "<span id=\"suiters\">" << adoptees << "</span> <span id=\"suiters_button\"><button onclick=\"editText(&#39;suiters&#39;)\">Edit</button></span> </li> <br>" << "\n";

    fout << "<li><i>Other Notes:</i>" << "\n";
    fout << "<span id=\"notes\">" << other_notes << "</span> <span id=\"notes_button\"><button onclick=\"editText(&#39;notes&#39;)\">Edit</button></span> </li> <br>" << "\n";
    
    fout << "</ul>" << "\n";	// Closes list
    
    
    fout << "</body>";
    fout << "</html>";
    
    
    
    
    //open file when done running?
    return EXIT_SUCCESS;
}