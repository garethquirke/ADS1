/*Copyright Gareth Quirke 2015*/
#pragma once
#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "dirent.h"
#include "File.h"
using namespace std;
/************************
Gareth Quirke elapsed CA1
X00108966
Plagiarism checker
Download: https://www.python.org/getit/
************************/

/********************
Google style rule used
Name: Names and order of includes
Details: Decided to not include the directory when naming the 
         includes. The dirent header file was standard include 
		 in Linux but had to be added into visual studio IDE.
		 The rest of the includes were standard in VS and 
		 did not want to add directory location for each .h as
		 it would make the code less portable when switching 
		 from one PC to the next. 
*********************/

int main() {
    File f1;
    f1.scanDirectory();
    system("pause");
    return 0;
}