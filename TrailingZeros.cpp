#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int c=0;
    while(n>4){
        c += (n/5);
        n/=5;
    }
    
    cout << c;

    return 0;
}
