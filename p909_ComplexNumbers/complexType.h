/*
 * =====================================================================================
 *
 *       Filename:  complexType.h
 *
 *    Description:  Header file for programming exercise p:909 of Malik
 *
 *        Version:  1.0
 *        Created:  12/18/2012 02:07:30 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Mohammed Zakaria (), m.k.zakaria@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef H_complexNumber
#define H_complexNumber

#include <iostream>
using namespace std;

class complexType
{
    
    //Over the stream insertion and extraction operators
    friend ostream& operator<< (ostream&, const complexType&);
    friend istream& operator>> (istream&, complexType&);

    public: 
	void setComplex(const double& real, const double& imag);
	//Function to set the complex numbers according to
	//the parameters.
	//Postcondition: realPart = real; imaginaryPart = imag;
	
	void getComplex(double& real, double& imag) const;
	//Function to retrieve the complex number.
	//Postcondition: real = realPart; imag = imaginaryPart;
	
	complexType(double real = 0, double imag = 0);
	//Constructor
	//Initializes the complex number according to 
	//the parameters.
	//Postcondition: realPart = real; imaginaryPart = imag;
	
	complexType operator+ (const complexType& otherComplex) const;
	//Overload the operator +
	
	complexType operator* (const complexType& otherComplex) const;
	//Overload the opeator *
	
	bool operator== (const complexType& otherComplex) const;
	//Overload the operator == 
	
    private:
	double realPart; 
	double imaginaryPart;
};
#endif
