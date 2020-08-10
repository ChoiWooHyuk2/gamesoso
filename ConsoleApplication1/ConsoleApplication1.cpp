#include"CarClass.h"
#include<time.h>

int main()
{
	srand((unsigned int)time(NULL));
	int i = 0;
	bool isgoal = false, whowin = false;
	CarClass mycar;
	CarClass* yourcar = new CarClass;

	mycar.init(150,2,"blue");
	yourcar->init(200,2,"red");

	while (!isgoal)
	{
		int car1 = rand() % 100 + 1;
		int car2 = rand() % 100 + 1;

		if (car1 > car2)
		{
			mycar.speedUp();
			yourcar->speedDown();
		}
		else
		{
			mycar.speedDown();
			yourcar->speedUp();
		}

		if (mycar.getSpeed() == 70)
		{
			isgoal = true;
			whowin = false;
		}
		else if (yourcar->getSpeed() == 70)
		{
			isgoal = true;
			whowin = true;
		}
		mycar.show();
		yourcar->show();
		i++;
	}
	if (whowin)
	{
		cout << "yourcar win!" << i << "km 주행" << endl;
	}
	else
	{
		cout << "mycar win!" << i << "km 주행" << endl;
	}
	delete yourcar;

}