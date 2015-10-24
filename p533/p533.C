	/*
	* =====================================================================================
	*
	*       Filename:  p533.C
	*
	*    Description:  Programming Example from P533-Malik that counts 
	*    the number of lines in a text and how many times each character occured
	*
	*        Version:  1.0
	*        Created:  10/31/2012 09:15:21 AM
	*       Revision:  none
	*       Compiler:  gcc
	*
	*         Author:  Mohammed Zakaria (), m.k.zakaria@gmail.com
	*   Organization:  
	*
	* =====================================================================================
	*/
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <cctype>

	using namespace std;

	void initialize(int& lc, int list[]);
	void copyText(ifstream& intext, ofstream& outtext, char& ch, int list[]);
	void characterCount(char ch, int list[]);
	void writeTotal(ofstream& outtext, int cl, int list[]);

	int main()
	{
	int lineCount; 
	int letterCount[26];
	char ch;
	ifstream infile;
	ofstream outfile;

	infile.open("/home/mzakaria/Desktop/Research/LearnC/p533/textin.txt");

	if(!infile)
	{
	cout << "Cannot open the input file." << endl;
	return 1;
	}

	outfile.open("/home/mzakaria/Desktop/Research/LearnC/p533/textout.out");

	initialize(lineCount, letterCount);

	infile.get(ch);

	while(infile)
	{
	copyText(infile, outfile, ch, letterCount);
	lineCount++;
	infile.get(ch);
	}

	writeTotal(outfile, lineCount, letterCount);

	infile.close();
	outfile.close();

	return 0;
	}

	void initialize(int& lc, int list[])
	{
	int j;
	lc = 0;

	for(j =0; j < 26; j++)
	    list[j] = 0;
	}

	void copyText(ifstream& intext, ofstream& outtext, char& ch, int list[])
	{
	while(ch != '\n')
	{
	outtext << ch;
	characterCount(ch, list);
	intext.get(ch);
	}

	outtext << ch;
	}


	void characterCount(char ch, int list[])
	{
	int index;
	ch = toupper(ch);
	index = static_cast<int>(ch) - static_cast<int>('A');

	if(0 <= index & index < 26)
	    list[index]++;
	}

	void writeTotal(ofstream& outtext , int lc, int list[])
	{
	int index;

	outtext << endl << endl;
	outtext << "The number of lines = " << lc << endl;

	for(index = 0; index < 26 ; index++)
	{
	    outtext << static_cast<char>(index + static_cast<int>('A'))
		    << " count = " << list[index] << endl;
	}
	}


