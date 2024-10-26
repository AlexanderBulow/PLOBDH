#include "Generatedata.h"

using namespace std;


string Generatedata(int mode) { //arr is the command (takepic only), mode is an integer (safemode=0, targetmode=1)
	usleep(5000000);
	if (mode == 1) {
		srand(time(NULL));
		int randomnumber;
		char data[8] = "picture";
		char finaldata[12];
		for (int i = 0; i < 12; i++) {
			if (i < 7) {
				finaldata[i] = data[i];
			}
			else {
				randomnumber = rand() % 10;
				finaldata[i] = (char)randomnumber + '0';
			}
		}
		return finaldata;
	}
	else if (mode == 0) {
		return "PL is turned off";
	}
	else {
		return "PL has commited arson and is aprehended by the local police";
	}

}