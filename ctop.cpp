//In this Project, I will translate c++ to python...
#include "headers.h"

int main() {

 // Gather name of file from which data will be read from
    cout << "Enter the name of the file: " ;
    string file_name = "sample/c1.txt";
   //getline(cin, file_name);

   vector<Word> word_list;

    // Create file variable to associate with disk file
    ifstream input_data;
    
    // File is opened
    input_data.open(file_name);

        // Check if stream entered fail state
        if (input_data.fail()) {
            cout << "Failed to open file." << endl;
            return 1;
        }

        // Define vector that will hold all text on file
        vector<char> new_data;
        string temp;

        // while the text from the user inputted file remains of type string then it will be placed into the new_data vector line by line
        if(readfile(file_name, word_list)){
			cout << "success read" <<endl;
		}
    // Close file
    input_data.close();

   for(int i = 0 ; i < (int)word_list.size(); i++){
	   cout << word_list[i].asc;
   }

   cout <<endl;

   //Function Space...






 /*

    // Create ofstream object to write to a new file
    ofstream output_data;

    // Opens (or creates) NewData file
    output_data.open("NewData.py");

        // Check if stream entered fail stat
        if (output_data.fail()) {
            cout << "Failed to open file." << endl;
            return 1;
        }

    // for loop that sends in every line of text stored in the vector from the old file into the new file
	for(vector<string>::iterator it = new_data.begin(); it != new_data.end();++it){
		output_data << *it << endl;
	}

    // Close loop
    output_data.close();


*/
    return 0;
}
