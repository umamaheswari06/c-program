#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <windows.h>

int main()
{
    time_t rawtime = 0;
    struct tm*pTime;
    bool isRunning = true;

    printf("DIGITAL CLOCK \n");
    while (isRunning){

            time(&rawtime);

            pTime = localtime(&rawtime);

            printf("\r %0.2d:%0.2d:%0.2d",pTime->tm_hour,pTime->tm_min,pTime->tm_sec);

        Sleep(1);

    }

    return 0;
}
