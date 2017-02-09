/*Copyright Gareth Quirke 2015*/
#include <string>
#include <iomanip>
#include <iostream>
#include <fstream>
#include "dirent.h"
#include "File.h"
using namespace std;

/************************
Gareth Quirke elapsed CA1
X00108966
Plagiarism checker
************************/

File::File() {
caDirectory = NULL;
ent = NULL;

fileCount = 0;
fileName = " ";
fLine = " ";
numIfs = 0;
numFor = 0;
numWhile = 0;
numBool = 0;
numInt = 0;
numDouble = 0;
}

/***************************************************************************************
*    Usage: Based on 
*    Title: Open Directory 
*    Availability: http://www.dreamincode.net/forums/topic/59943-accessing-directories-in-cc-part-i/
***************************************************************************************/

void File::scanDirectory() {
caDirectory = opendir("files");

    if (caDirectory == NULL) {
        cout << "Directory was not initialised correctly \n";
        system("pause");
        exit(0);
    } else {
    while ((ent = readdir(caDirectory)) != NULL) {  //  returns 0 so while there is files in the directory do:
        fileCount++;                                
        if (fileCount > 2) {
            string fileName = ent->d_name;
            fileFound(fileName);
            }
        }
    }
closedir(caDirectory);
}

/***************************************************************************************
*    Usage: Modified 30%
*    Title: Function 'fileFound'
*    Author: Keith Quaill, Conor o'Neill
*    Date: 24th October
***************************************************************************************/
void File::fileFound(string fileNameIn) {
    fstream input;
    string filePath = "files\\" + fileNameIn;
    input.open(filePath, fstream::in);  //  fstream pointing to the file path, allows you to read stuff in from the file
    while (input >> fLine) {           //  fline is one line of the file, try to find keyword in this line
                                      //  while there is another line loop!
        if (fLine.find("if") != string::npos) {
            numIfs++;
        } else if (fLine.find("for") != string::npos) {
            numFor++;
        } else if (fLine.find("while") != string::npos) {
            numWhile++;
        } else if (fLine.find("bool") != string::npos) {
            numBool++;
        } else if (fLine.find("int") != string::npos) {
            numInt++;
        } else if (fLine.find("double") != string::npos) {
            numDouble++;
        }
    }

    /***************************************************************************************
    *    Usage: Based on
    *    Title: Learned how to format output from this source
    *    Availability: http://www.cprogramming.com/tutorial/iomanip.html
    ***************************************************************************************/
    /***************************************************************************************
    *    Usage: Based on
    *    Title: Formatting help from student
    *    Author: Shane Preston
    *    Date: 29th October
    ***************************************************************************************/
    cout << std::string(60, '-');
    cout << "\n\n";
    cout << setw(30) << "File Name: " << fileNameIn << "\n\n\n";
    cout << setfill(' ')<< setw(4) << "IF" << setw(10) << "FOR" << setw(10) << "WHILE" << setw(10)
         << "BOOLEANS" << setw(10) << "INTEGERS" << setw(10) <<"DOUBLES" << endl;
    cout << setfill(' ') << setw(4) << numIfs << setw(9) << numFor << setw(9) << numWhile << setw(10)
         << numBool << setw(10) << numInt << setw(10) << numDouble << "\n\n\n";

    cout << "number of if statements found: " << numIfs<< endl;
    cout << "number of for loops found: " << numFor << endl;
    cout << "number of while loops found: " << numWhile << endl;
    cout << "number of boolean variables found: " << numBool << endl;
    cout << "number of integer variables found: " << numInt << endl;
    cout << "number of double variables found: " << numDouble << endl;
    cout << "\n\n";
    numIfs = 0;
    numFor = 0;
    numWhile = 0;
    numBool = 0;
    numInt = 0;
    numDouble = 0;
}