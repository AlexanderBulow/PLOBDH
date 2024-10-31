#include "Generatedata.h"

using namespace std;


string Generatedata(int mode) { //arr is the command (takepic only), mode is an integer (safemode=0, targetmode=1)
	usleep(5000000);
	if (mode == 1) {
		srand(time(NULL));
		int randomnumber;
		char data[9] = " picture";
		char finaldata[13];
		for (int i = 0; i < 13; i++) {
			if (i < 8) {
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
		string r = " PL is turned off";
		return r;
	}
	else {
		return " PL has commited arson and is aprehended by the local police";
	}

}