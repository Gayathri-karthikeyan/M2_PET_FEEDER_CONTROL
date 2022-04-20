/**
 * @file Pet_Feeder_Control.h
 * @author Gayathri Devi.K (gayathridevi.18ece@sonatech.ac.in)
 * @brief Pet feeder control using push button
 * @version 0.1
 * @date 2022-04-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <Servo.h>
/**
 * @brief servo motor used to rotate 90degree
  @return Used to blink the leds when the servo motor is rotated
 */

//change wait time prescaler here
const long prescaler = 60000; //in miliseconds
//1000 * 60 * 1 = 60000
//for 1-15 minutes interval (1, 2, 4, 8 min)
//1000 * 60 * 15 = 900000
//for 15 min ~ 3.75 hours interval (15, 30, 60, 120 min)
//1000 * 60 * 5 = 300000
//for 5 min ~ 75 min interval (5, 10, 20, 40 min)

//activate servo control
Servo myservo;


//declare input pin for timeSet
byte timeSetPin = 12;

//declare output pin for timeMark (widely configurable)
byte _1minMark = 8;
byte _2minMark = 9;
byte _4minMark = 10;
byte _8minMark = 11;
byte timeSetInput = 1;

//to avoid button command executed multiple time
byte buttonActivated = false;

//timestamp marking
long now = 0;
long rollTimeMark = 0;

//timeToRoll counter (wait time)
long timeToRoll = 0;