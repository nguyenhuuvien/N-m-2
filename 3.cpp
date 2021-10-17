#include <iostream>
using namespace std;

bool isSymmetricalString(string line)
{
    int reverse_number=0;
    for(int i=0;i<line[i];i++)
    {
        int temp=line[i];
        while (temp!='\0'){
            reverse_number = reverse_number*10+(temp%10);
            temp/=10;
    }
    }
    for(int i=0;i<line[i];i++){
        if(reverse_number==line[i])
        {
            return true;
        }
    }return false;
}
int main() {
    char line[300];
    cin.getline(line,300);
    if (isSymmetricalString(line))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}

