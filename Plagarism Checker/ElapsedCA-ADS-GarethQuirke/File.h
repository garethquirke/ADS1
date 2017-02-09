/*Copyright Gareth Quirke 2015*/
#pragma once
#include <string>
#include "dirent.h"
using namespace std;

/************************
Gareth Quirke elapsed
CA1
X00108966
Plagiarism checker
************************/

class File {
private:
DIR * caDirectory;
struct dirent *ent;
int fileCount;
string fileName;
string fLine;
int numIfs;
int numFor;
int numWhile;
int numBool;
int numInt;
int numDouble;

public:
File();
void scanDirectory();
void fileFound(string fileNameIn);
};