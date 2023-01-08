#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n;
    char c = int ('a');
    // int ascii = c;
 cout << "enter number: ";
 cin >> n;

 for (int i=0; i<n; i++)
 {  
     for (int j=0; j<=i; ++j)
     {
         cout << c << " ";
         ++c;
     }
     cout << endl;
 }
 
 return 0;
}