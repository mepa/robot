#include <iostream>
#include <unistd.h>

#include <wiringPi.h>

using namespace std;

int i, j, k;

int main() 
{
  wiringPiSetup(); // Initializes wiringPi using wiringPi's simlified number system.
  wiringPiSetupGpio(); // Initializes wiringPi using the Broadcom GPIO pin numbers
  
  pinMode(2, INPUT);
  pinMode(23, INPUT);
  
  // while loop with a single statement
  int i = 0;
  while (1)
    {
      i = digitalRead(2);
      j = digitalRead(23);

      if (i == 0) 
	{
	  cout << "Obstacle detected on Left " << i << endl;
	  delay(2000);
	}
      else if (j == 0)
	{
	  cout << "Obstacle detected on Right  " << j << endl;
	  delay(2000);
	}
    }

  return 0;
}
