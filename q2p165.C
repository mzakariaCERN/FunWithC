#include <iostream> 
#include <iomanip>
#include <fstream>

using namespace std;


int main(){
double x, y;
ifstream inData;
ofstream outData; 

cout  << "Please enter a decimal number" << endl;
cin >> x; 
cout << fixed; 
cout << showpoint;
cout << setprecision(2);

inData.open("/home/mzakaria/Desktop/Research/LearnC/two_decimal.txt");
cout << "The number entered = " << x << endl;

cout << "Now lets try it with files" << endl;
cout << "This part reads the values from file names two_decimal.txt" << endl;

inData >> y ;

cout << "The value from file = " << y << endl;

inData.close();
return 0;
}
