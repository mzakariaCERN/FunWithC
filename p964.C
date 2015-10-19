#include <iostream> 

using namespace std;

int main()
{
	 int *list[100];

	try
	{
		for(int i = 0; i < 100 ; i++ )
		{
			list[i] = new int[500000000];
			cout << "Line  4: Created list[" << i << "] of 50000000 components." << endl;
		}
	}

	catch (bad_alloc be)
	{
		cout << "Line 7: In the bad alloc catch" 
			<< "block: " << be.what() << "." << endl;
	}

		return 0;
}
