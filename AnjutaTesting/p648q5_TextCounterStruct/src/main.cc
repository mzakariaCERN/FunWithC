/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * main.cc
 * Copyright (C) 2015 mzakaria <mzakaria2@mzakaria2-Inspiron-3531>
 * 
 * p648q5 is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * p648q5 is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 * This code asks for an input text file, and output text file. and reads
 * all the characters and stores them in a structure. It counts the capital
 * letters and small letters separately. And prints the input text, the number
 * of each capital and small letter, as well as the ratio of each.
 */

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;




	struct LetterFrequency
{
	int CapitalIndex;
	int SmallIndex;
};

LetterFrequency TheLetters[26];
void copyText(ifstream& intext, ofstream& outtext, char& ch, LetterFrequency ThrLetters[]);
int openFile (ifstream& intext, ofstream& outtext);
void characterCount(char , LetterFrequency );
void printResult(ofstream& outtext, LetterFrequency TheLetters[]);

int main()
{
	ifstream intext;
	ofstream outtext;
	char ch;
		
	std::cout << "Hello world!" << std::endl;
	if (openFile(intext, outtext) < 0 )
		return -1;
	else
	{
    cout << "before get statement" << endl;

		if(intext)
			cout << "intext is good" << endl;
	intext.get(ch);
			//intext.get(ch);
			//intext.get(ch);
			//intext.get(ch);
	cout << "ch = " << ch << endl;

	cout << "after get statement" << endl;
	while(intext)
	{
		cout << "inside while " << endl;
    copyText( intext, outtext,  ch,  TheLetters);
		intext.get(ch);
		cout << "ch = " << ch << endl;
	}
	}

printResult( outtext,  TheLetters);
	return 0;
}

int openFile(ifstream & infile, ofstream & outfile)
{
//	ifstream infile;
	// ofstream outfile;

	char str[100], str_out[100], discard;
	
	cout << "Inside openFile" << endl;
	cout << "Please Enter the name of the input file:" << endl;
	//infile.open("/home/mzakaria2/Documents/Research/LearnC/AnjutaTesting/p648q5/textin.txt");
	cin.get(str, 100);
	
	cout << "The inserted name for the input file is: " << str << endl;
	infile.open(str);

if (!infile)
	{
	cout << "Cannot open the input file" << endl;
		return -1;
	}
	
	cout << "Please Enter the name of the output file:" << endl;
	//outfile.open(");
	cin.get(discard);
    cin.get(str_out, 100);
	cout << "The inserted name for the output file is: " << str_out << endl;
    outfile.open(str_out);

	
if (!outfile)
	{
	cout << "Cannot open the out file" << endl;
		return -1;
	}
    //char ch1;
	//infile.get(ch1);
	//cout << "ch1 = " << ch1 << endl;
}


void characterCount(char ch, LetterFrequency ThrLetters[])
{
	
//	listType Letters;
// int list[100];
	int index;
	//ch = toupper(ch);
	index = static_cast<int>(ch) - static_cast<int>('A');

	if (0 <= index & index < 26)
	{
		TheLetters[index].CapitalIndex++;

	}

	if (32 <= index & index < 58)
	{   
		index= index - 32;
		TheLetters[index].SmallIndex++;
	}
	//list[index]++;
	//{
	//Letters.listElem[index]++;
	//Letters.listLength++;
	//}
} // end character count

void copyText(ifstream& intext, ofstream& outtext, char& ch, LetterFrequency ThrLetters[])
{
	cout << "inside copyText" << endl;
	while (ch != '\n') //to process the entire line
	{
		outtext << ch;

		characterCount (ch, TheLetters);

		intext.get(ch);
	}

	outtext << ch;
}


void printResult(ofstream& outtext, LetterFrequency TheLetters[])
{
cout << "inside printResult" << endl;
	int index;

	outtext << endl << endl;

	for(index = 0; index < 26; index++)
	{
		outtext << static_cast<char>(index + static_cast<int>('A'))
			<< " count = " << TheLetters[index].CapitalIndex << endl;
		outtext << "Percentage: " << floor(((float)(TheLetters[index].CapitalIndex*100) / (
	TheLetters[index].CapitalIndex + TheLetters[index].SmallIndex))+ 0.5) << "%" << endl;
		outtext << static_cast<char>(index + static_cast<int>('a'))
			<< " count = " << TheLetters[index].SmallIndex << endl;
		outtext << "Percentage: " << floor(((float)(TheLetters[index].SmallIndex*100) / (
	TheLetters[index].CapitalIndex + TheLetters[index].SmallIndex)) + 0.5) << "%" << endl;
		
	}
}