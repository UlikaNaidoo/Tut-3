#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Dice{
public:
	int roll()
	{
		int rolled_value;

		//srand(time(0)); // Using number of seconds function to ensure random number
		rolled_value = 1 + rand() % 6;
		cout << "Rolled value is: " << rolled_value<< endl; 
		return rolled_value;
	}
	
	Dice()
	{
		srand(time(0)); // Using number of seconds function to ensure random number
	}


};

float average(int array[], int x)
{
	int sum = 0;
	for (int i = 0; i < x; i++)
	{
		sum += array[i];
	}
	float avg = (float)sum / x;
	cout << "Average of the Array is " << avg << endl;
	cout << endl;
	return avg;
}

float average(Dice r, int y)
{

	int sum = 0;
	int rolled_value;

	for (int i = 0; i < y; i++)
	{
		r.roll();
		cout << r.roll() << endl;
		sum += r.roll();
	}
	float avg = (float)sum / y;
	cout << "Average of the Array is " << avg << endl;
	cout << endl;
	return avg;
}

int main(){
	//# of rolls and its average
	Dice r;
	int y;

	cout << "Enter # of rolls " << endl;
	cin >> y;
	cout << endl;
	average(r, y);



	//Array
	Dice ud;
	int x;
	cout << "Enter # elements in array(max 1000) " << endl;
	cin >> x;

	int array[1000];
	for (int p = 0; p < x; p++)
	{
		array[p] = ud.roll();
		cout << array[p] << endl;
	}
	average(array, x);


	return 0;
}