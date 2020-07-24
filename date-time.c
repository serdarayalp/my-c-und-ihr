#include <stdio.h>
#include <time.h>

/*
struct tm
{ 
  int  tm_sec;  	// Seconds: 0-60 (zur Anpassung an Schaltsekunden) 
  int  tm_min;  	// Minutes: 0-59 
  int  tm_hour; 	// Hours since midnight: 0-23 
  int  tm_mday; 	// Day of the month: 1-31
  int  tm_mon;  	// Months *since* January: 0-11 
  int  tm_year; 	// Years since 1900 
  int  tm_wday; 	// Days since Sunday (0-6) 
  int  tm_yday; 	// Days since Jan. 1: 0-365 
  int  tm_isdst;	// +1=Daylight Savings Time, 0=No DST, -1=unknown 
};


  Folgende Typen sind in time.h definiert:
  ------------------------------------------
  time_t
  clock_t
  size_t

  Folgende MACROs sind in time.h definiert:
  ------------------------------------------
  NULL
  CLK_TCK  

*/

int main()
{

  // Anzahl an Sekunden seit 01.01.1970
  time_t past = time(NULL);
  printf("%ld\n", past);

  // Anzahl an Sekunden in lesbarer Form localtime() oder gmtime()
  struct tm *p = localtime(&past);
  printf("%.2d.%.2d.%.2d\n", p->tm_mday, p->tm_mon + 1, 1900 + p->tm_year);
  printf("%.2d:%.2d:%.2d\n", p->tm_hour, p->tm_min, p->tm_sec);

  printf(asctime(p));

  struct tm *p2 = gmtime(&past);
  printf(asctime(p2));

  time_t curtime;
  // time(&curtime);
  curtime = time(NULL);
  printf("Current time = %s", ctime(&curtime));

  /*
  time_t t_1;
  time_t t_2;
  t_1 = time(NULL);
  for (int i = 0; i < 1000; i++)
  {
    printf("%d", i);
  }
  t_2 = time(NULL);
  printf("\n");
  printf("%lf Sekunde: ", difftime(t_2, t_1));
  */

  return 0;
}