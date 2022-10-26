#include <iostream>
using namespace std;
int fact(int x){
   double f;f = x-1;
   if((x<1 && x>0) || (x<0)){
   cout<<"Math Error"<<endl;
   return 0;
   }
   else if(x>=13){cout<<"integer overload";
   }
   else if(x ==0 ){
       cout<<1<<endl;
   }
   else if (x == 1){
    return 1;
   }
   else{do{x*=f;f--;}
   while (f>0);
   return x;
}
}
int main(){
    double num1, num2,ans;
    cout<<"Enter 'n': ";
    cin>>num1;cout<<"Enter 'r': ";
    cin>>num2;
    cout<<num1<<" C "<<num2<<" = ";
   ans = (fact(num1))/((fact(num1-num2))*(fact(num2)));
cout<<ans;
return 0;
}
