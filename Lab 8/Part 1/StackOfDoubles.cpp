#include "StackOfDoubles.h"

void StackOfDoubles::push(double number){
    d.insert(number);
}
void StackOfDoubles::pop(){
    d.deleteMostRecent();
}
double StackOfDoubles::top(){
    cout << "Top value is: " << d.topValue() << endl;
}
void StackOfDoubles::print(){
    d.display();
}
/*ostream & operator<<(ostream& str, const StackOfDoubles &stackobj){
    while(stackobj.d.topValue()!=NULL){
        str << stackobj.top() << endl;
    }
    return str;
    
}*/

