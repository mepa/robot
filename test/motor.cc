#include <iostream>
#include <vector>
#include <cmath>
#include <iterator>
#include <fstream>
#include <algorithm>
#include <cstdlib>

#include "../AFMotor/AFMotor.h"

using namespace std;
     

AF_DCMotor right_motor(4); // create motor #4
AF_DCMotor left_motor(1); // create motor #1
     
//void setup() {
// Serial.begin(9600);           // set up Serial library at 9600 bps
// Serial.println("Motor test!");
//  
//  motor.setSpeed(200);     // set the speed to 200/255
//}

int main() {
  cout << "tick" << endl;
  
  //right_motor.run(FORWARD);      // turn it on going forward
  //delay(1000);
  
  cout << "tock" << endl;
  //right_motor.run(BACKWARD);     // the other way
  //delay(1000);
  
  cout << "tack" << endl;
  //right_motor.run(RELEASE);      // stopped
  //delay(1000);

  return 0;
}
