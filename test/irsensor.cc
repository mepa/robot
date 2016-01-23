#include <iostream>
#include <unistd.h>

#include <wiringPi.h>

int main() 
{
  wiringPiSetup(); // Initializes wiringPi using wiringPi's simlified number system.
  wiringPiSetupGpio(); // Initializes wiringPi using the Broadcom GPIO pin numbers
  
  pinMode(3, INPUT);
  pinMode(16, INPUT);
  
  // while loop with a single statement
  int i = 0;
  while (1)
    {
      i = pinMode(3, OUTPUT);
      j = pinMode(16, OUTPUT);
     
      if (i == 0) 
	{
	  cout << "Obstacle detected on Left" << i << endl;
	  usleep(1000);
	}
      else if (j == 0)
	{
	  cout << "Obstacle detected on Right" << j << endl;
	  usleep(1000);
	}
    }
}
