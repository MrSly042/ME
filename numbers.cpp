#include <iostream>
using namespace std;
int main(){
    int num1, num2, num3;
    int biggest, looper = 0, smallest;
    cout<<"Enter the three numbers: ";cin>>num1;
    cin>>num2;cin>>num3;
    if(num1 > num2 && num1 > num3 ){biggest = num1;}
    if(num2 > num1 && num2 > num3 ){biggest = num2;}
    if(num3 > num1 && num3 > num2 ){biggest = num3;}
    if(num1 < num2 && num1 < num3 ){smallest = num1;}
    if(num2 < num1 && num2 < num3 ){smallest = num2;}
    if(num3 < num1 && num3 < num2 ){smallest = num3;}
    cout<<" THE BIGGEST AND SMALLEST NUMBERS ARE "<<biggest<<" AND "<<smallest<<" RESPECTIVELY";
return 0;
}
