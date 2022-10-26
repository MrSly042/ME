#include <iostream>
using namespace std;
int main(){
    int N, m = 0;
    double Smallest, sum = 0;
    cout<<"Enter The Size Of The array: ";
    cin>>N;
    double array[N];
    cout<<"Enter the numbers on separate lines: ";
    for(int x = 0; x<N; x++){
        cin>>array[x];
    }
    for(int y = 0; y<N; y++){
        sum+=array[y];
    }
cout<<"sum = "<<sum<<endl;
cout<<"Average = "<<sum/N<<endl;
    Smallest = array[0];
    for( int z = 1; z<N; z++){
            if (array[z]<Smallest){
                Smallest = array[z];
            }
    }
    cout<<"Position(s) of smallest in array is: ITEM NO. ";
    do{
        if(array[m] == Smallest){
        cout<<m+1<<", ";}
        m++;}
    while(m<N);
    cout<<" ONLY";
return 0;
}
