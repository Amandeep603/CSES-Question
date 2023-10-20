#include<iostream>
using namespace std;
int main()
{
    // here you have to write a algorithm that takes one number as input
    int num ;
    cin >> num;
    while(num!=1)
    {
        if(num%2==0)
        {
            num = num/2;
        }
        else{
            num = num*3 + 1;
        }
        cout << num << " ";
    }
}