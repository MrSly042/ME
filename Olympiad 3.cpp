#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double discharged, dead, active_cases, sum;
    float x, y, z;
    cout<<"Enter the number of discharged patients: ";
    cin>>discharged;
    cout<<"Enter the number of dead patients: ";
    cin>>dead;
    cout<<"Enter the number of patients with active cases: ";
    cin>>active_cases;
    sum = discharged + dead + active_cases;
    x = round((discharged*100)/sum);
    y = round((dead*100)/sum);
    z = round((active_cases*100)/sum);
    cout<<"Percentage of those discharged: "<<x<<"%"<<endl;
    cout<<"Percentage of those dead: "<<y<<"%"<<endl;
    cout<<"Percentage of those with active cases: "<<z<<"%"<<endl;
return 0;
}
