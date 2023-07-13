#include <iostream>
#include "unistd.h"

using namespace std;

int main()
{
	cout << "Will load in 10 seconds" << endl << "Loading";
	for(int i = 0; i < 10; ++i)
	{
		cout << ". ";
		fflush(stdout);
		sleep(1);
	}
	cout << endl << "Done downloading" << endl;
	return 0;
}