// PFOBDH.cpp : Defines the entry point for the application.
//

#include "PLOBDH.h"
#include "GetCommand.h"
#include "SendCommand.h"
#include "Generatedata.h"

using namespace std;

int main()
{
	char command[64];
	int mode = 0;
	while (true) {
		char* receiving = GetCommand(2);
		if (receiving == "t_picture") {
			char command[64];
			string str = Generatedata(mode);
			strcpy(command, str.c_str());;
		}
		else if (receiving == "targetmode") {
			mode = 1;
			char command[64] = "PL is turned on";
		}
		else if (receiving == "safemode") {
			mode = 0;
			char command[64]="PL is turned off";
		}
		else{ 
			char command[64]="invalid command to PL";
		}
		SendCom(command, 2);

	}
	return 0;
}
