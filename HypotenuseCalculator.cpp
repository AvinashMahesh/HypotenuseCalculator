#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
int main() {
 float a, b, aa, bb, c;
 cout << setw(27) << "Hypotenuse Calculator" << endl;
cout << endl;
 cout << "Input the measure of the first leg."<< endl;
 cin >> a;
 cout << "Input the measure of the second leg"<< endl;
 cin >> b;
  aa= pow(a,2);
 bb= pow(b,2);
 c= aa + bb;
cout << endl;
cout << setw(15) << "--------------------------------------------" << endl;
 cout << setw(30)<< "The hypotenuse is " << c << endl;
 cout << setw(15) << "--------------------------------------------" << endl;
 return 0;
}
