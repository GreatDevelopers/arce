#include<iostream>
#include<iomanip>

using namespace std;

int main()
{

double a;
cout << "gibe no :  ";
cin >> a;
int b = (int) a;

cout  << "\na "  << setiosflags(ios::fixed) << a << "\tb " << b 
<< " set precision 3: "<< setprecision(3) << a 
<< " set precision 1: "<< setprecision(1) << a 
<< " set precision 0: "<< setprecision(0) << a 
<<endl;

return 0;
}
