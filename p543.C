#include <iostream> 

using namespace std; 

main ()
{
	double alpha[50];
	int i;
		
	for( i = 0; i < 25; i++)
	{
	alpha[i] = i*i;
	cout << "alpha " << i << " = " << alpha[i] << endl;
	}

	for( i = 25; i < 50; i++)
	{
	alpha[i] = 3*i;
	cout << "alpha " << i << " = " << alpha[i] << endl;
	}

return 0;
}

