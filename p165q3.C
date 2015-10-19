/*
 * =====================================================================================
 *
 *       Filename:  p165q3.C
 *
 *    Description:  Question 3 P165 of Malik's book
 *
 *        Version:  1.0
 *        Created:  09/22/2012 04:25:51 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Mohammed Zakaria (), m.k.zakaria@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
int NumTickets = 0; // number of tickets of each category
int TotalNumTickets = 0; //total number of tickets (sum of Numtickets)
double SalesPerCatigory = 0; //Sales of number of tickets in one catigory
double TotalSales = 0; 
char ch;

    ifstream inFile;
    ofstream outFile;

inFile.open("/home/mzakaria/Desktop/Research/LearnC/p165q3/input.txt");

inFile >> NumTickets >> SalesPerCatigory;
//cout << NumTickets << " " << SalesPerCatigory << endl;

while (!inFile.eof()) // nice trick used in the next chapter instead of 
    //having a variable for each number.
{
//cout << NumTickets << " " << SalesPerCatigory << endl;    

TotalNumTickets += NumTickets;

inFile >> NumTickets >> SalesPerCatigory;

//inFile.get(ch);
 TotalSales += SalesPerCatigory;
}

cout << "Total Tickets Sold: " << TotalNumTickets << endl;
cout << fixed << setprecision(2) << 
cout << showpoint;
cout << "Total Sales: " << TotalSales << endl;
return 0;

}


