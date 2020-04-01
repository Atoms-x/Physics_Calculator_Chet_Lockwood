/*Dr. Tyson 1437 Programming Fundamentals II
  Chet Lockwood
  28 March 2020
  IDE: Repl.it 
  
  Header to store function definitions
*/

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <string>
#include "Input_Validation_Extended.h"

using namespace std;

//Function Prototypes ******************************************************************
void menu();

void avgVelocity (double, double, string, string);
void avgAcceleration (double, double, string, string);

void instVelocity (double, double, double, string);
void displacement (double, double, double, double, string);
void velocitySquared (double, double, double, double, string);
void meanSpeed (double, double, string);

void sumForces (double, double, string, string);
void sumForcesMomentum (double, double, string);

void weight (double, double, string);

void momentum (double, double, string);


//Fucntion Definitions *****************************************************************

//Menu text display function
void menu()
{
  cout << cUnderL << "\n Choose an option \n" << cReset << "\n";
  cout << cGreen << "1 - The average velocity \n" << cReset << "\n";
  cout << cCyan << "2 - The average acceleration \n" << cReset << "\n";
  cout << cPurple << "3 - The instantenous velocity \n" << cReset << "\n";
  cout << cLGray << "4 - The amount of displacement \n" << cReset << "\n";
  cout << cGold << "5 - The velocity squared \n" << cReset << "\n";
  cout << cGBlue << "6 - The average velocity by Merton Rule \n" << cReset << "\n";
  cout << cPine << "7 - The total force by acceleration \n" << cReset << "\n";
  cout << cBlue << "8 - The total force by momentum \n" << cReset << "\n";
  cout << cOrange << "9 - The weight of an object \n" << cReset << "\n";
  cout << cYellow << "10 - The momentum of an object \n" << cReset << "\n";
  cout << cRed << "11 - Clear the Screen and Start Over \n" << cReset << "\n";
  cout << cBRed << "E or e - TERMINATE THE PROGRAM \n" << cReset << "\n";
}

//Average velocity function
void avgVelocity (double fdPosition, double fdTime, string fUnit, string fUnit2)
{
  cout << cClear;
  cout << "\nYour " << cGreen <<  "average Velocity" << cReset << " is: \n";
  cout << "\nds / dt = " << cGreen << (fdPosition / fdTime) << " " << fUnit << "/" << fUnit2 << cReset << "\n";
  cout << "\n" << fdPosition << " / " << fdTime << " = " << cGreen << (fdPosition / fdTime) << " " << fUnit << "/" << fUnit2 << "\n";
  
  cout << cReset << "\n Press the any key to continue...";
  cin.ignore(10000, '\n');
  cout << cClear;
}

//Average acceleration function
void avgAcceleration (double fdVelocity, double fdTime, string fUnit, string fUnit2)
{
  cout << cClear;
  cout << "\nYour " << cCyan <<  "average acceleration" << cReset << " is: \n";
  cout << "\ndv / dt = " << cCyan << (fdVelocity / fdTime) << " " << fUnit << "/" << fUnit2 << cReset << "\n";
  cout << "\n" << fdVelocity << " / " << fdTime << " = " << cCyan << (fdVelocity / fdTime) << " " << fUnit << "/" << fUnit2 << "\n";

  cout << cReset << "\n Press the any key to continue...";
  cin.ignore(10000, '\n');
  cout << cClear;
}

//Instantenous velocity function
void instVelocity (double fInitialVelocity, double fAcceleration, double fdTime, string fUnit)
{
  cout << cClear;
  cout << "\nYour " << cPurple <<  "instantenous velocity" << cReset << " is: \n";
  cout << "\n v0 + at = " << cPurple << (fInitialVelocity + (fAcceleration * fdTime)) << " " << fUnit << cReset << "\n";
  cout << "\n" << fInitialVelocity << " + " << fAcceleration << " * " << fdTime << " = " << cPurple << (fInitialVelocity + (fAcceleration * fdTime)) << " " << fUnit << "\n";

  cout << cReset << "\n Press the any key to continue...";
  cin.ignore(10000, '\n');
  cout << cClear;
}

//Displacement function
void displacement (double fID, double fIV, double fdTime, double fAccel, string fUnit)
{
  cout << cClear;
  cout << "\nYour " << cLGray <<  "amount of displacement" << cReset << " is: \n";
  cout << "\n s0 + v0t + .5at^2 = " << cLGray << (fID + (fIV * fdTime) + (.5 * fAccel * pow(fdTime, 2.0))) << " " << fUnit << cReset << "\n";
  cout << "\n" << fID << " + (" << fIV << " * " << fdTime << ") + (" << ".5 * " << fAccel << " * " << fdTime << "^2 )" << " = " << cLGray << (fID + (fIV * fdTime) + (.5 * fAccel * pow(fdTime, 2.0))) << " " << fUnit << "\n";

  cout << cReset << "\n Press the any key to continue...";
  cin.ignore(10000, '\n');
  cout << cClear;
}

//Velocity Squared function
void velocitySquared (double fIV, double fAccel, double fdS, double fInitS, string fUnit)
{
  cout << cClear;
  cout << "\nYour " << cGold <<  "velocity squared" << cReset << " is: \n";
  cout << "\n v0^2 + 2a(s-s0) = " << cGold << (pow (fIV, 2.0) + (2 * fAccel * (fdS - fInitS))) << " " << fUnit << cReset << "\n";
  cout << "\n" << fIV << "^2 + 2 * " << fAccel << " ( " << fdS << " - " <<  fInitS << " ) " << " = " << cGold << (pow (fIV, 2.0) + (2 * fAccel * (fdS - fInitS))) << " " << fUnit << "\n";

  cout << cReset << "\n Press the any key to continue...";
  cin.ignore(10000, '\n');
  cout << cClear;
}

//Mean Speed/Merton Rule function
void meanSpeed (double fV, double fIV, string fUnit)
{
  cout << cClear;
  cout << "\nYour " << cGBlue <<  "average velocity by Merton Rule" << cReset << " is: \n";
  cout << "\n .5(v + v0) = " << cGBlue << (.5 * (fV + fIV)) << " " << fUnit << cReset << "\n";
  cout << "\n" << ".5( " << fV << " + " << fIV << " ) " << " = " << cGBlue << (.5 * (fV + fIV)) << " " << fUnit << "\n";

  cout << cReset << "\n Press the any key to continue...";
  cin.ignore(10000, '\n');
  cout << cClear;
}

//Sum of Forces by acceleration Function
void sumForces (double fMass, double fAccel, string fUnit, string fUnit2)
{
  cout << cClear;
  cout << "\nYour " << cPine <<  "total force by acceleration" << cReset << " is: \n";
  cout << "\nm * a = " << cPine << (fMass * fAccel) << " " << fUnit << "*" << fUnit2 << cReset << "\n";
  cout << "\n" << fMass << " * " << fAccel << " = " << cPine << (fMass * fAccel) << " " << fUnit << "*" << fUnit2 << "\n";

  cout << cReset << "\n Press the any key to continue...";
  cin.ignore(10000, '\n');
  cout << cClear;
}

//Sum of Forces by momentum Function
void sumForcesMomentum (double fDP, double fDT, string fUnit)
{
  cout << cClear;
  cout << "\nYour " << cBlue <<  "total force by momentum" << cReset << " is: \n";
  cout << "\ndp / dt = " << cBlue << (fDP / fDT) << " " << fUnit << cReset << "\n";
  cout << "\n" << fDP << " / " << fDT << " = " << cBlue << (fDP / fDT) << " " << fUnit << "\n";

  cout << cReset << "\n Press the any key to continue...";
  cin.ignore(10000, '\n');
  cout << cClear;
}

//Weight Function
void weight (double fM, double fG, string fUnit)
{
  cout << cClear;
  cout << "\nYour " << cOrange <<  "weight of your object" << cReset << " is: \n";
  cout << "\nm * g = " << cOrange << (fM * fG) << " " << fUnit << cReset << "\n";
  cout << "\n" << fM << " * " << fG << " = " << cOrange << (fM * fG) << " " << fUnit << "\n";

  cout << cReset << "\n Press the any key to continue...";
  cin.ignore(10000, '\n');
  cout << cClear;
}

//Momentum Function
void momentum (double fM, double fV, string fUnit)
{
  cout << cClear;
  cout << "\nYour " << cYellow <<  "momentum of your object" << cReset << " is: \n";
  cout << "\nm * v = " << cYellow << (fM * fV) << " " << fUnit << cReset << "\n";
  cout << "\n" << fM << " * " << fV << " = " << cYellow << (fM * fV) << " " << fUnit << "\n";

  cout << cReset << "\n Press the any key to continue...";
  cin.ignore(10000, '\n');
  cout << cClear;
}

#endif