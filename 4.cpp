#include <iostream>
#include <string>
using namespace std;

void iStrCopy(char arr[],char arr2[])
{
    int i =0;
    while(arr[i]!= '\0')
    {
        arr2[i] = arr[i];
        i++;
    }
    arr2[i]='\0';
}
int main() {
    char line1[201];
    char line2[201];
    cin.getline(line1, 201);
    iStrCopy(line1, line2);
    cout << line2;
    return 0;
}
