#include "type.h"
#include "stdio.h"
#include "const.h"
#include "protect.h"
#include "string.h"
#include "fs.h"
#include "proc.h"
#include "tty.h"
#include "console.h"
#include "global.h"
#include "proto.h"

void welcomeMiao(){
	int t=2500;
	
	
	printf("  _        _____   _   _   _        ______   _____ \n");
	milli_delay(t);
	printf(" | |      |_   _| | \ | | | |      |  ____| |_   _|\n");
	milli_delay(t);
	printf(" | |        | |   |  \| | | |      | |__      | |  \n");
	milli_delay(t);
	printf(" | |        | |   | . ` | | |      |  __|     | |  \n");
	milli_delay(t);
	printf(" | |____   _| |_  | |\  | | |____  | |____   _| |_ \n");
	milli_delay(t);
	printf(" |______| |_____| |_| \_| |______| |______| |_____|\n");
	milli_delay(t);
	printf("\n");
	milli_delay(t);
	printf("\n");
	milli_delay(t);
	printf("\n");
	milli_delay(t);
	printf("\n");
	milli_delay(t);
	printf("\n");
}

PUBLIC void welcome(){
	
	printf("  _      _____ _   _ _      ______ _____ \n"); 
	printf(" | |    |_   _| \ | | |    |  ____|_   _|\n"); 
	printf(" | |      | | |  \| | |    | |__    | |  \n"); 
	printf(" | |      | | | . ` | |    |  __|   | |  \n"); 
	printf(" | |____ _| |_| |\  | |____| |____ _| |_ \n"); 
	printf(" |______|_____|_| \_|______|______|_____|\n");  
	printf(" ________________________________________\n");
	printf("|                                        |\n");
	printf("|                  MyOS                  |\n");
	printf("|                                        |\n");
	printf("|                Lin Lei                 |\n");
	printf("|________________________________________|\n");
	printf("\n");
	printf("\n");
}
