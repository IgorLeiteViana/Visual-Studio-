#include <iostream>
#include <string>

using namespace std;
int main(){
    int myArray[10];

    for (int i = 0; i < 10; i++)
    {
        myArray[i]=i*3+i;
        cout << myArray[i]<<"\n";
    }
    return 0;
}