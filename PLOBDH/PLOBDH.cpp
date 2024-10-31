// PFOBDH.cpp : Defines the entry point for the application.
//

#include "PLOBDH.h"
#include "GetCommand.h"
#include "SendCommand.h"
#include "Generatedata.h"

using namespace std;

int main()
{
	int mode = 0;
	string command;
	char commandsend[64];
	while (true) {
		command = "";
		char* recchar = GetCommand(5);
		string receiving(recchar);
		if (receiving == "t_picture") {
			command = Generatedata(mode);
		}
		else if (receiving == "targetmode") {
			mode = 1;
			command = " PL is turned on";
		}
		else if (receiving == "safemode") {
			mode = 0;
			command =" PL is turned off";
		}
		else{ 
			command =" invalid command to PL";
		}
		cout << command << endl;
		strcpy(commandsend, command.c_str());
		SendCom(commandsend, 6);

	}
	return 0;
}
