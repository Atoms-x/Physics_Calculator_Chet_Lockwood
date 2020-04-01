/*Dr. Tyson 1437 Programming Fundamentals II
  Chet Lockwood
  28 March 2020
  IDE: Repl.it 
  
  Header to store function definitions
*/

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include "Input_Validation_Extended.h"
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <string>

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



#endif