/*
* Tovah Hunter
* 11/6/2024
* Assignment 2.1 Pointers 
* Estimate 8
* Actual 4
*/

#include <iostream>
#include  <string>
#include <memory>


using namespace std;

int main()
{
	int list[3] = { 1, 2, 3 };
	int* p = list;
	string states[3] = { "Arizona ", "Texas", "California" };
	string* st = states;

	for (int i = 0; i < 3; i++)
	{
		cout << " p  " << i << " is " << p[i] << st[i] << endl;
	}
	return 0;
}



 