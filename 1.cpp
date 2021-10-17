#include <iostream>
#include <string>
using namespace std;
void I(string a[], int n)
{
	for (int i=0; i<n; i++)
	{
		fflush((stdin));
		getline(cin, a[i]);
		cout<<endl;
	}
}
void O(string a[], int n)
{
	for (int i=0; i<n; i++)
	{
	    if(n-1)
            cout <<a[i]<<endl;
        else cout<<a[i];

}
}
int main()
{
	int n;
	string a[50];
	cin >>n;
	I(a, n);
	O(a, n);
	system("pause");
	return 0;
}
