#include <iostream>

using namespace std;

int main()
{
	int min, max,sum=0;
	while (true)
	{
		cout << "Give two number:that your PROMEGUTOK(min,max)" << endl;
		cin >> min >> max;

		if (min > max || min < 0 || max < 0)							//две полоски это по енглиш ор
			cout << "HODILKI BRODILKI 27 NOVEMBER ALL DIE" << endl;
		else
			break;
	}
	for (int i = min; i <= max; i++)
	{
		if ((i % 2) == false)
			sum = sum + i;
	}
	cout << sum << endl;






}