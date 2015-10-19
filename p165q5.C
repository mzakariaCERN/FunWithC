#include <iostream>

using namespace std;

int main()
{

int F = 0;
float C = 0;
cout << "Please enter the temperature in F, followed by Enter" << endl;

cin >> F;

C = (5.0/9.0)*(F - 32.0);

cout << "You entered the temeperature in F = " << F << endl;
cout << "The temperature in Celcius =  " << C << endl;


return 0;


}
