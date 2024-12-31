#include <iostream>
#include <windows.h>
using namespace std;
int main(){
 
    int hours = 0;
    int min = 0;
    int sec = 00;
    cout << "houzs : ";
    cin >> hours;
    cout << "min : " ;
    cin >> min ;
    cout << "sec : ";
    cin >> sec ;
    while (true)
    {
            system("cls");

        if (sec > 59)
        {
            min++;
            sec=00;
        }
        if (min>59)
        {
            hours=0;
            min=0;
        }
        
        if (hours>23)
        {
            hours=00;
        }
        cout << hours << ":"<<min << ":" << sec;
        sec++;
        Sleep(1000);
        
        
    }
    
    
}