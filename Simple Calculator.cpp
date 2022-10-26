#include <iostream>
using namespace std;
double fact(int x){
   double f;
   f = x-1;
   if(x<1 && x>0){
   cout<<"Math Error";
   }
   else if(x>=13){cout<<"integer overload";
   return 0;}
   else if(x ==0 ){
       cout<<1<<endl;
   }
   else if (x<0){
    cout<<"Math Error";
   }
   else if (x == 1){
    cout<<1;
   }
   else{do{x*=f;f--;}
   while (f>0);}
   return x;
}

int mod(int x, int y){
    if (y == 0){cout<< "Math ERROR";}
    if (x<y){return x;
    }
    else{
        do{
            x-=y;
        }
        while(x>=y);
    return x;
}
 }
int main(){
    // PROGRAM TO IMPLEMENT A SIMPLE CALCULATOR
    // Multiple functions are used
    //Modulus, Combination, permutation, exponentiation and factorial are included
    double num1, num2;
    char p;
    cout<<"Enter The first Number"<<endl;
    cin>>num1;
    cout<<"Enter The operator"<<endl;
    cin>>p;
    switch(p){
    case '+':
        cout<<"Enter the second number"<<endl;
        cin>>num2;
        cout<<num1<<" + "<<num2<<" = "<<num1+num2;
        break;
    case '-':
        cout<<"Enter the second number"<<endl;
        cin>>num2;
        cout<<num1<<" - "<<num2<<" = "<<num1-num2;
        break;
    case '*':
        cout<<"Enter the second number"<<endl;
        cin>>num2;
        cout<<num1<<" * "<<num2<<" = "<<num1*num2;
        break;
    case '/':
        cout<<"Enter the second number"<<endl;
        cin>>num2;
        cout<<num1<<" / "<<num2<<" = "<<num1/num2;
        break;
    case '!':
        cout<<num1<<"! = ";
        cout<<fact(num1);
   break;
    case 'M':
        cout<<"Enter the modulus to use"<<endl;
        cin>>num2;
   cout<<num1<<" (mod "<<num2<<" ) = ";
         cout<<mod(num1, num2);
        break;
    case 'C':
        int ans;
    cout<<"Enter 'r'"<<endl;
    cin>>num2;
    cout<<num1<<" C "<<num2<<" = ";
    ans = (fact(num1))/(fact(num1-num2)*(fact(num2)));
    cout<<ans;
    break;
    default:
        cout<<"Error Detected ";
    }
return 0;
}
