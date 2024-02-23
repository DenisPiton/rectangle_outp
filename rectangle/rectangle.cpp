#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> v(10);
	for (int i = 0; i <= 9; i++)
	{
		v[i] = (i+1)*(i+1);
	}
	for (int i = 0; i <= 9; i++)
	{
		cout << v[i] << "\t";
	} 
}

