/*
  Author : Ahmed Mohammed Hussanein Ali
  Date   : 9/20/2021 at 8:36 PM
  
  This piece of code is to convert 12-hours format to 24 format.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* timeConversion(char* s) 
{
    int hh, mm, ss;
    char AmPm[3];
    char* newFormat = (char*)malloc(16*sizeof(char));
    sscanf(s, "%d:%d:%d%s", &hh, &mm, &ss, AmPm);
    if(hh == 12 && !strcmp(AmPm, "AM"))
        hh = 0;
    else if(hh != 12 && !strcmp(AmPm, "PM"))
        hh = hh + 12;
        
    sprintf(newFormat, "%02d:%02d:%02d", hh, mm, ss);
    return newFormat;
}


int main()
{
    char* p = timeConversion("08:01:00AM");
    printf("%s\n", p);
	p = timeConversion("08:01:00PM");
	printf("%s\n", p);
	
	system("pause");

    return 0;
}