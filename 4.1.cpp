#include <iostream>

using namespace std;


int main()
{
    int x;
    int y;
    int table[100];    
    
    cout << "podaj liczbe elementow: " << endl;
    cin >> x;
    
    for (int i = 0; i < x; i++) {
        cout << "podaj swoje wartosci" << endl;
        cin >> table[i];

    }
    int e=0;
    int u=0;
    for (int i = 0; i < x; i++) {
        e = table[i];
        if (e >=u) {
            u = e;
           
        }
    }
     cout << u << endl;

}
