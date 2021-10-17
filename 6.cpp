#include <iostream>
using namespace std;
void iStrCat(char A[] , char B[])
{
    int i, j, n1, n2;

    while (A[i]!='\0')
    {
        A[i]=n1;
    }
    while (B[i]!='\0')
    {
        B[i]=n2;
    }
    while (A[n1+n2]!='\0'){
		cout<<A[n1+n2];
	}
	 A[n1+n2]='\0';
}
int main()
{
    char strA[1000];
    char strB[1000];
    cin.getline(strA, 1000);
    cin.getline(strB, 1000);
    iStrCat(strA, strB);
    cout << strA;
    return 0;
}

