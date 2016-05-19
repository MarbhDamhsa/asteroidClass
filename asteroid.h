
#ifndef _ASTEROID_H_
#define _ASTEROID_H_

using namespace std;
class Asteroid
{
public:
	void setSize(int size){
		if(size < MINSIZE){
			size = MINSIZE;
		} else if (size > MAXSIZE){
			size = MAXSIZE;
		} else {
			size = size;
		}
	};

	void debugMessage(){

		cout << "My size is: " << size << "\n";

	};
protected:

	
private:
	const int MINSIZE = 1;
	const int MAXSIZE = 20;
	int size;
	int speed;

};

#endif // _ASTEROID_H_

