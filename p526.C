#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const int MAX_CODE_SIZE = 250;

void readCode(ifstream& infile, int list[], int& length, bool& lenCodeOK);
void compareCode(ifstream& infile, ofstream& outfile, int list[], int length); 

int main()
{

int codeArray[MAX_CODE_SIZE];
int codeLength;
bool lengthCodeOK;

ifstream incode;
ofstream outcode;

char inputFile[51];
char outputFile[51];

cout << "Enter the input file name: ";
cin >> inputFile;
cout << endl;

incode.open(inputFile);
if(!incode)
{
cout << "Cannot open the input file name: ";
return 1;
}

cout << "Enter the output file name: ";
cin >> outputFile;
cout << "endl";

outcode.open(outputFile);

readCode(incode, codeArray, codeLength, lengthCodeOK);

if(lengthCodeOK)
	compareCode(incode, outcode, codeArray, codeLength);
else
	cout << "Length of the secret code "
		<< "must be <= " << MAX_CODE_SIZE
		<< endl;
incode.close();
outcode.close();

return 0;
}

void readCode(ifstream& infile, int list[], int& length, bool& lenCodeOK)
{
int count;
lenCodeOK = true;
infile >> length;

if(length > MAX_CODE_SIZE)
{
lenCodeOK = false;
return ;

}

for (count = 0; count < length ; count++)
infile >> list[count];

}

void compareCode(ifstream& infile, ofstream& outfile, int list[], int length)
{

int length2;
int digit;
bool codeOk;
int count;

 codeOk = true;

 infile >> length2;

if(length != length2)
{
cout << "The original code and its copy "
	<< "are not of the same length."
	<< endl;
	return;

}

outfile << "Code Digit      Code Digit Copy"
	<< endl;

for(count = 0; count < length; count++) 
{
infile >> digit;
outfile << setw(5) << list[count] << setw(17) << digit;

if (digit != list[count])
{
outfile << " code digits are not the same"
	<< endl;
codeOk = false;
}
else 
	outfile << endl;
}

if(codeOk)
	outfile << "Message transmitted OK."
		<< endl;
else
	outfile << "Error in transmission." << "Retransmit!!" << endl;
}

