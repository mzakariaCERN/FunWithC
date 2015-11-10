/*
 * =====================================================================================
 *
 *       Filename:  complexTypeImp.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/19/2012 06:14:20 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Mohammed Zakaria (), m.k.zakaria@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include "complexType.h"
#include "iostream"

using namespace std;

ostream& operator<< (ostream& osObject, const complexType& complex)
{
    osObject << "(";
    osObject << complex.realPart;
    osObject << ", ";
    osObject << complex.imaginaryPart;
    osObject << ")";

    return osObject;
}

istream& operator>> (istream& isObject, complexType& complex)
{
    char ch;

    isObject >> ch;
    isObject >> complex.realPart;
    isObject >> ch;
    isObject >> complex.imaginaryPart;
    isObject >> ch;

    return isObject; 
}

bool complexType::operator== (const complexType& otherComplex) const
{
    return (realPart == otherComplex.realPart && imaginaryPart == otherComplex.imaginaryPart);
}

complexType::complexType(double real, double imag)
{
    realPart = real;
    imaginaryPart = imag; 
}

void complexType::setComplex(const double& real, const double& imag)
{
    realPart = real;
    imaginaryPart = imag;
}    

void complexType::getComplex(double& real, double& imag) const
{
    real = realPart;
    imag = imaginaryPart;
}

complexType complexType::operator+ (const complexType& otherComplex) const
{
    complexType temp;

    temp.realPart = realPart + otherComplex.realPart;
    temp.imaginaryPart = imaginaryPart + otherComplex.imaginaryPart; 

    return temp;
}

complexType complexType::operator* (const complexType& otherComplex) const
{
    complexType temp;
    temp.realPart = (realPart * otherComplex.realPart) - (imaginaryPart * otherComplex.imaginaryPart); 
    temp.imaginaryPart = (realPart * otherComplex.imaginaryPart) + (imaginaryPart * otherComplex.realPart);
    return temp;
}
