#include <iostream>
using namespace std;
    typedef enum days{
    SUN, MON, TUE, WED, THURS, FRI, SAT}days;
    days operator+(days d){
    return static_cast<days>((static_cast<int>(d)+1)%7);
    }ostream& operator<<(ostream& os, days d){
    switch (d)
    { case SUN: os<<"SUN";
    break;
    case MON: os<<"MON";
    break;
    case TUE: os<<"TUE";
    break;
    case WED: os<<"WED";
    break;
    case THURS: os<<"THURS";
    break;
    case FRI: os<<"FRI";
    break;
    case SAT: os<<"SAT";
    break;}
    return os;}
int main(){
    days d, a; d = WED;
    a=+d; cout<<d<<" "<<a<<endl; d = SAT; a = +d; cout<<d<<" "<<a<<endl;

return 0;
}
