/* 
 * File:   main.cpp
 * Author: gareth
 *
 * Created on 20 November 2015, 19:23
 */

#include <cstdlib>
#include <iostream>
#include "StackOfDoubles.h"
#include "ListOfDoubles.h"
#include "DoubleListNode.h"
using namespace std;

int main(){
    
    StackOfDoubles l;
    double values[10] = {0.5,1.5,2.5,3.5,4.5,5.5,6.5,7.5,8.5,9.5};
    
    for(int i = 0; i <10; i++){
        l.push(values[i]);
    }
    
    l.print();
    l.pop();
    l.top();
    
    cout << endl << endl;
    
    ListOfDoubles ld;
    ListOfDoubles larryDavid(ld);
    
    ld.insert(3.4);
    ld.insert(4.5);
    
    larryDavid = ld;
    cout << larryDavid << endl;
    
    return 0;
}
