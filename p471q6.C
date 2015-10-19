#include <iostream>
#include <cassert> 
using namespace std;

enum operation {addition, subtraction, multiplication, division};


void menu();
void addFractions(int numerator1, int numerator2, int denumerator1, int denumerator2, int& numerator_answer, int& denumerator_answer );
void subtractFractions(int numerator1, int numerator2, int denumerator1, int denumerator2, int& numerator_answer, int& denumerator_answer );
void multiplyFractions(int numerator1, int numerator2, int denumerator1, int denumerator2, int& numerator_answer, int& denumerator_answer );
void divideFractions(int numerator1, int numerator2, int denumerator1, int denumerator2, int& numerator_answer, int& denumerator_answer );
void PassingData( int& numerator1, int& numerator2, int& denumerator1 , int& denumerator2);
void GiveAnswer(int numerator_answer, int denumerator_answer);
operation convertSymbol(char selection);
void operatorUsed(operation object);

int main()
{
int num1, num2, denum1, denum2, num_answer, denum_answer;
operation object1;
char selection;
menu();
  cin >> selection;
//  cout << "inside main " << endl;
//  cout << " operation chosen: " << convertSymbol(selection) << endl;
object1 = convertSymbol(selection);

PassingData(  num1,  num2,  denum1 , denum2);

//cout << "in main, object1 = " << object1 << endl;

switch(object1)
{
  case 0:
    operatorUsed( object1);

  addFractions( num1, num2, denum1, denum2, num_answer, denum_answer);
  break;
  
  case 1:
    operatorUsed( object1);
  subtractFractions( num1, num2, denum1, denum2, num_answer, denum_answer);
  break;
 
  case 2:
    operatorUsed( object1);

  multiplyFractions( num1, num2, denum1, denum2, num_answer, denum_answer);
  break;

  case 3:
  {operatorUsed( object1);
  divideFractions( num1, num2, denum1, denum2, num_answer, denum_answer);
  break;
  }
}

//GiveAnswer(  num_answer,  denum_answer);

//GiveAnswer(  num_answer,  denum_answer);

//GiveAnswer(  num_answer,  denum_answer);

//GiveAnswer(  num_answer,  denum_answer);


return 0;
}


void menu()
{
//char selection;  
	cout << "This function operates as a Fraction calculator. " << endl;
  cout <<" Select one operation from +, -, *, and / " << endl;
   

  cout << "You will need to enter 4 integers" << endl;
	cout <<" Enter: numerator 1, denumerator 1, numerator 2, and denumerator 2" << endl;


 }

void addFractions(int numerator1, int numerator2, int denumerator1, int denumerator2, int & numerator_answer, int & denumerator_answer)
{
numerator_answer = (numerator1*denumerator2) + (numerator2*denumerator1);
denumerator_answer = denumerator1*denumerator2;

cout << numerator1 << " / " << denumerator1 << "  +  " << numerator2 << " / " << denumerator2 << " = " 
  << numerator_answer << " / " << denumerator_answer << endl;

}

void subtractFractions(int numerator1, int numerator2, int denumerator1, int denumerator2, int & numerator_answer, int & denumerator_answer)
{
numerator_answer = (numerator1*denumerator2) - (numerator2*denumerator1);
denumerator_answer = denumerator1*denumerator2;

cout << numerator1 << " / " << denumerator1 << "  -  " << numerator2 << " / " << denumerator2 << " = " 
  << numerator_answer << " / " << denumerator_answer << endl;

}

void multiplyFractions(int numerator1, int numerator2, int denumerator1, int denumerator2, int & numerator_answer, int & denumerator_answer)
{
numerator_answer = (numerator1*numerator2);
denumerator_answer = denumerator1*denumerator2;

cout << numerator1 << " / " << denumerator1 << "  *  " << numerator2 << " / " << denumerator2 << " = " 
  << numerator_answer << " / " << denumerator_answer << endl;

}

void divideFractions(int numerator1, int numerator2, int denumerator1, int denumerator2, int & numerator_answer, int & denumerator_answer)
{
numerator_answer = (numerator1*denumerator2);
denumerator_answer = denumerator1*numerator2;

cout << numerator1 << " / " << denumerator1 << "  /  " << numerator2 << " / " << denumerator2 << " = " 
  << numerator_answer << " / " << denumerator_answer << endl;
}

void PassingData( int& num1, int& num2, int& denum1 , int& denum2)
{
cout << "Please enter the 2 fractions you wish to manipulate: num1, denum2, num1, and denum2" << endl;
cin >> num1 >> denum1 >> num2 >> denum2;
//cout << "num1 = " << num1 << endl;

if( denum1 == 0)
//cout << "denum1 = " << denum1 << endl;
//cout << " " << endl;
//else
{

 cout << "denumerator 1 shouldn't be zero" << endl;
assert (denum1 != 0);
 
}
//cout << "num2 = " << num2 << endl;
//if( denum2 !=0)
//cout << "denum2 = " << denum2 << endl;
//cout << " " << endl;

 if (denum2 == 0)
{
cout << "denumerator 2 shouldn't be zero" << endl;
assert (denum2 != 0);
  
}
}

void GiveAnswer( int num_answer, int denum_answer)
{
    cout << "num-Answer = " << num_answer << endl;
    cout << "denum-Answer = " << denum_answer << endl;
    
}

operation convertSymbol(char selection)
{
  operation object;
  switch (selection)
  {
    case '+':
      object = addition;
     // cout << "indside switch " << "object = " << object <<endl;
      break;
    case '-':
      object = subtraction;
      break;
    case '*':
      object = multiplication;
      break;
    case '/':
     object = division; 
     break;
    default:
     {cout << "error, only + - * / operations " << endl;
       assert(0);
     }
  }
 // cout << "from inside converSymbol object: " << object << endl;
  return object;
}

void operatorUsed(operation object2)
{
 // operation object2;
  if (object2 == 0)
    cout << "addition" << endl;

   if (object2 == 1)
    cout << "subtraction" << endl;

   if (object2 == 2)
    cout << "multiplication" << endl;

    if (object2 == 3)
    cout << "division" << endl;


 
}

