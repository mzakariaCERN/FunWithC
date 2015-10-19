#include <iostream>

using namespace std;
void initialize(int& x0, int& y0, char& z0);
void getHoursRate(double& hours0, double& rate0);
double payCheck(double hours, double rate);
void funcOne(int &xx, int x0, int y0);
int main()
{

int x, y;
char z;
double rate, hours;
double amount;
int xx;
//cout << "Enter two real numbers and a character: "<< endl;
//cin >> x >> y >> z;
cout << "before calling initialize: (x, y, z) are: "<<x<<" "<<y<<" "<<z<<endl;
 initialize(x, y, z);
cout << "after callign initialize: (x, y, z) are: "<<x<<" "<<y<<" "<<z<<endl;

cout << "before getHourseRate, hours = " << hours << " and rate = " << rate << endl;
getHoursRate(hours, rate);
cout << "after getHourseRate, hours = " << hours << " and rate = " << rate << endl;

cout << "Weekly wages = $" <<  payCheck(hours , rate) << endl;

funcOne(xx, x, y);
cout << "after funcOne, xx = " << xx << endl;
return 0;
}

void initialize(int& x2, int& y2, char& z2)
{
x2 = 0;
y2 = 0;
z2 = ' ';
}

void getHoursRate(double& hours, double& rate)
{
cout << "Enter the hours and the rate respectively" << endl;
cin >> hours >> rate ;
cout <<" hourse = " << hours << " and rate = " << rate << endl;

}

double payCheck(double hours, double rate)
{

if( hours <= 40)
    return (hours * rate);
else
    return (hours * rate * 1.5);
}

void funcOne(int &xx, int x, int y)
{

cout << "Enter integer value: " << endl;
cin >> xx;

xx = 2*x + y - xx;


}
