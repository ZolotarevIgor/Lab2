#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, char *argv[])
{
	time_t rawtime; 
    struct tm * now;
    time(&rawtime);
    now = localtime ( &rawtime ); 
    printf ( "Текущее время: %d:%d\n", now->tm_hour, now->tm_min); 
    printf ( "Реверсные время: %d:%d\n", now->tm_min, now->tm_hour); 
    return 0;
}