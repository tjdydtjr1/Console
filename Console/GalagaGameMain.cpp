#include "GalagaGameMain.h"

GalagaGameMain::GalagaGameMain()
{
	enemy = new GalagaObject;
	int startBtn = 0;
	char keyInput = 0;
	int count = 0;
	const int arrMax = 1000;
	int ground[arrMax] = { 0 };
	int backGround[arrMax] = { 0 };

	// √ ±‚∏ 
	for (int i = 0; i < arrMax; ++i)
	{
		if (i % 99 == 0)
		{
			ground[i] = 7;
			cout << '\n';
		}
		
		Pixel(ground[i]);
		backGround[i] = ground[i];
	}

}

GalagaGameMain::~GalagaGameMain()
{
	
}
