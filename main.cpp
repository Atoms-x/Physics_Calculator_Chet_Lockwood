/*Dr. Tyson 1437 Programming Fundamentals II
  Chet Lockwood
  28 March 2020
  IDE: Repl.it 
  Program:  Physics Calculator

  ADD SUB MENUS (SHOULD BE 4 MAIN MENUS)
  STORE NUMERICAL ANSWER INTO A VARIABLE
  MOVE FUNCTIONS INTO A SEPERATE HEADER
*/

#include "functions.h"

using namespace std;

//Main Function ************************************************************************
int main() 
{
  //Variables
  double ds = 0.0, dt = 0.0, dv = 0.0, dp = 0.0, initVel = 0.0, initPos = 0.0, accel = 0.0; 
  double mass = 0.0, gravConst = 0.0, position = 0.0, vel = 0.0;

  string Units1, Units2;
  
  string menuChoice = "";
  
  //Setting the decimal precision to four
  cout << fixed << setprecision(4);

  //Menu/function do/while loop
  do 
  {
    //Prompt: Menu options
    menu();

    //Input: Menu choice
    menuChoice = validateString(menuChoice);

     //Processing
    if ( menuChoice == "1")
    {
      cout << cClear << cGreen << "The average velocity\n";
      cout << cReset << "\nWhat is your change in position (delta s)? " << "\n";
      validateDouble(ds);
      cout << "What is your change in time (delta t)? " << "\n";
      validateDouble(dt);
      cout << "What are the units of position? " << "\n";
      validateString(Units1);
      cout << "What are the units of time? " << "\n";
      validateString(Units2);

      avgVelocity(ds, dt, Units1, Units2);
    }

    else if ( menuChoice == "2")
    {
      cout << cClear << cCyan << "The average acceleration\n";
      cout << cReset << "\nWhat is your change in velocity (delta v)? " << "\n";
      validateDouble(dv);
      cout << "What is your change in time (delta t)? " << "\n";
      validateDouble(dt);
      cout << "What are the units of velocity? " << "\n";
      validateString(Units1);
      cout << "What are the units of time? " << "\n";
      validateString(Units2);

      avgAcceleration(dv, dt, Units1, Units2);
    }

    else if ( menuChoice == "3")
    {
      cout << cClear << cPurple << "The instantenous velocity\n";
      cout << cReset << "\nWhat is your initial velocity (v0)? " << "\n";
      validateDouble(initVel);
      cout << "What is your acceleration (a)? " << "\n";
      validateDouble(accel);
      cout << "What is your time elapsed (delta t)?" << "\n";
      validateDouble(dt);
      cout << "What are the units of your result? " << "\n";
      validateString(Units1);

      instVelocity(initVel, accel, dt, Units1);
    }

    else if ( menuChoice == "4")
    {
      cout << cClear << cLGray << "The amount of displacement\n";
      cout << cReset << "\nWhat is your initial displacement (s0)? " << "\n";
      validateDouble(initPos);
      cout << "What is your initial velocity (v0)? " << "\n";
      validateDouble(initVel);
      cout << "What is your time elapsed (delta t)?" << "\n";
      validateDouble(dt);
      cout << "What is your acceleration (a)? " << "\n";
      validateDouble(accel);
      cout << "What are the units of your result? " << "\n";
      validateString(Units1);

      displacement(initPos, initVel, dt, accel, Units1);
    }

    else if ( menuChoice == "5")
    {
      cout << cClear << cGold << "The velocity squared\n";
      cout << cReset << "\nWhat is your initial velocity (v0)? " << "\n";
      validateDouble(initVel);
      cout << "What is your acceleration (a)? " << "\n";
      validateDouble(accel);
      cout << "What is your displacement (ds)? " << "\n";
      validateDouble(ds);
      cout << "What is your initial displacement (s0)? " << "\n";
      validateDouble(initPos);
      cout << "What are the units for velocity? " << "\n";
      validateString(Units1);

      velocitySquared(initVel, accel, ds, initPos, Units1);
    }

    else if ( menuChoice == "6")
    {
      cout << cClear << cGBlue << "The average velocity by Merton Rule\n";
      cout << cReset << "\nWhat is your velocity (v)? " << "\n";
      validateDouble(vel);
      cout << "What is your initial velocity (v0)? " << "\n";
      validateDouble(initVel);
      cout << "What are the units of your result? " << "\n";
      validateString(Units1);

      meanSpeed(vel, initVel, Units1);
    }

    else if ( menuChoice == "7")
    {
      cout << cClear << cPine << "The total force by acceleration\n";
      cout << cReset << "\nWhat is your mass (m)? " << "\n";
      validateDouble(mass);
      cout << "What is your acceleration (a)? " << "\n";
      validateDouble(accel);
      cout << "What are the units of mass? " << "\n";
      validateString(Units1);
      cout << "What are the units of acceleration? " << "\n";
      validateString(Units2);

      sumForces(mass, accel, Units1, Units2);
    }

    else if ( menuChoice == "8")
    {
      cout << cClear << cBlue << "The total force by momentum\n";
      cout << cReset << "\nWhat is your change in momentum (dp)? " << "\n";
      validateDouble(dp);
      cout << "What is your change in time (dt)? " << "\n";
      validateDouble(dt);
      cout << "What are the units of your result? " << "\n";
      validateString(Units1);

      sumForcesMomentum (dp, dt, Units1);
    }

    else if ( menuChoice == "9")
    {
      cout << cClear << cOrange << "The weight of an object\n";
      cout << cReset << "\nWhat is your mass (m)? " << "\n";
      validateDouble(mass);
      cout << "What is your gravitational constant (g)? " << "\n";
      validateDouble(gravConst);
      cout << "What are the units of your result? " << "\n";
      validateString(Units1);

      weight (mass, gravConst, Units1);
    }

    else if ( menuChoice == "10")
    {
      cout << cClear << cYellow << "The momentum of an object\n";
      cout << cReset << "\nWhat is your mass (m)? " << "\n";
      validateDouble(mass);
      cout << "What is your velocity (v)? " << "\n";
      validateDouble(vel);
      cout << "What are the units of your result? " << "\n";
      validateString(Units1);

      momentum (mass, vel, Units1);
    }

    else if ( menuChoice == "11")
    {
      cout << cClear << endl;
      cout << "\n Press the any key to continue...";
      cin.ignore(10000, '\n');
      cout << cClear << endl;
    }

    else if (menuChoice != "E" && menuChoice != "e")
    {
      cout << cClear << endl;
      cout << cRed <<"\nThat is not a valid input\n" << cReset;
      cout << "\n Press the any key to continue...";
      cin.ignore(10000, '\n');
      cout << cClear << endl;
    }

  } while (menuChoice != "E" && menuChoice != "e");

  cout << cClear << cRed << "TERMINATED";

  return 0;
}

