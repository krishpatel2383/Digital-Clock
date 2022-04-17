#include<stdio.h>
#include<windows.h>
int main()
{
	int hour=0,min=0,sec=0;
	while(1)
	{
		system("cls");
		printf("\t\tClock : ");
		printf("%02d:%02d:%02d",hour,min,sec);
		fflush(stdout);
		sec++;
		if(sec==60)
		{
			min++;
			sec=0;
		}
		if(min==60)
		{
			hour++;
			min=0;
		}
		if(hour==12)
		{
			hour=1;
		}
		Sleep(1000);
	}
return 0;
}
