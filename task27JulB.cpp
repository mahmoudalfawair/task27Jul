#include <iostream>
using namespace std;
int main()
{int j=0;
for(; j<101 ; j++)
{cout << j << " is ";
if(j%2 ==0)
cout << "even" << endl;
else
cout << "odd" << endl;}
return 0;
}