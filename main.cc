#include <iostream>
#include "Asteroid.h"
using namespace std;



int main()
{
	cout << "Creating an instance of the class Asteroid named asteroid.\n";
	Asteroid asteroid(0,0);
	cout << "\nMax Size: " << asteroid.MAXSIZE << " Min Size: " << asteroid.MINSIZE << "\n\n";
	cout << "Setting asteroid's size to 5\n";
	asteroid.setSize(5);
	cout << "Setting asteroid's size to 0\n";
	asteroid.setSize(0);
	cout << "Setting asteroid's size to 35\n";
	asteroid.setSize(35);
	cout << "\nMax Speed: " << asteroid.MAXSPEED << " Min Speed: " << asteroid.MINSPEED << "\n\n";
	cout << "Setting asteroid's speed to -5\n";
	asteroid.setSpeed(-5);
	cout << "Setting asteroid's speed to 107\n";
	asteroid.setSpeed(107);
	cout << "Setting asteroid's speed to 17\n";
	asteroid.setSpeed(17);
	
	cin.get();
	return 0;
}

