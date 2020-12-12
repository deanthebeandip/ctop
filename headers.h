#ifndef headers_h
#define headers_h

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct Word
{
    char asc;
	string asc2;
	int trueasc; 
    //double duration;
    //int octave;
};


bool readfile(string filename, vector<Word> &v )
{
    bool r = true;
    ifstream ifs(filename);
	ifs >> noskipws;
    if(ifs){
        Word s;
        while(ifs >> s.asc) {
				cout << s.asc;
      			v.push_back(s);
	        }
    }
    else {
      cout<<"Error opening file" <<endl; r = false;}

	return r;
}

#endif
