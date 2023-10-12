#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double xStart;
	double xEnd;
	double dx;
	double R;
	double y;
	cout << "R = "; cin >> R;
	cout << "x Start = "; cin >> xStart;
	cout << "x End = "; cin >> xEnd;
	cout << "dx = "; cin >> dx;

	cout << "---------------------------" << endl;
	cout << "|    " << "x" << "    |    "
		 << "y" << "    |" << endl;
	for (int x = xStart; x <= xEnd; x += dx)
	{
		if (x <= 0)
			y = -(x / 2);
		else
			if (0 < x && x <= R)
				y = R - sqrt(R * R - x * x);
			else
				if (R < x && x <= 2 * R)
					y = sqrt(R * R - (x - R) * (x - R));
				else
					y = -(x - 2 * R) / (6 - 2 * R);

		cout << "---------------------------" << endl;
		cout << "|    " << x << "    |    "
			<< y << "    |" << endl;
	}
	cout << "---------------------------" << endl;


}