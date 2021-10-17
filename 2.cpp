#include <iostream>
using namespace std;
int iGetLen(string arr)
{
    int i=0;
    while(arr[i]!= '\0')
        i++;
    return i;
}
int main() {
    char line[200];
    cin.getline(line,200);
    cout << iGetLen(line);
    return 0;
}

