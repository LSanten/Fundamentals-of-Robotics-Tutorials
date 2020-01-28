/*******************************************************************************************************************************************************************************************************************************************
 * Step 0) Add a clear descriptive title block at the top of your robot code
 * Example Title block follows:
 * Title: 2020 Arduino Robot Controller 
 * Description: This structure template contains a Sense-Think-ACT data flow to
 * allow a Robot to perform a sequence of meta-behavior in soft-real-time based on direct
 * text commands from a human operator.
 * Robot Name: ***Add Name Here***
 * What does code do?: ***give a short description of what code does***
 * Harware wanings: Turn e-stop motor pwer on AFTER startung thus code
 * Created by Leon Santen (leon.santen@icloud.com ), January 2020
 *******************************************************************************************************************************************************************************************************************************************
 */

// TODO: Add directions for future work on coce here in this section

//==========================================================================================================================================================================================================================================
// Load supporting Arduino Libraries
//==========================================================================================================================================================================================================================================

//==========================================================================================================================================================================================================================================
// Create and initialize global variables, objects, and constants (containers for all data)
//==========================================================================================================================================================================================================================================

//==========================================================================================================================================================================================================================================
// Startup code to configure robot and pretest all robot functionality (to run once)
// and code to setup robot mission for launch
//==========================================================================================================================================================================================================================================
void setup() {
  // Step 1) Put your robot setup code here, to run once:

  // Step 2) Put your robot mission setup code here, to run once:
}
//==========================================================================================================================================================================================================================================
// Flight code to run continuously until robot is powered down
//==========================================================================================================================================================================================================================================
void loop() {
  // Step 3) Put Operator-Input-to-Robot and Robot_Reports-Back-State code in non-real-time "outer" loop:
  //         Put real-time dependant sense-think-act control in the inner loop

  // Step 4) Put your main flight code into "inner" soft-real-time while loop structure below, to run repeatedly,
  //         at a known fixed "real-time" periodic interval. This "soft real-time" loop timing structure, runs
  //         fast flight control code once every controlLoopInterval.

  // real-time-loop*******real-time-loop*******real-time-loop*******real-time-loop*******real-time-loop*******
  // real-time-loop*******real-time-loop*******real-time-loop*******real-time-loop*******real-time-loop*******

    // SENSE sense---sense---sense---sense---sense---sense---sense---sense---sense---sense---sense---sense---sense-------------
    // TODO add sensor code here

    // THINK think---think---think---think---think---think---think---think---think---think---think---think---think-------------
    // Pick robot behavior based on operator input command typed at console

    // ACT act---act---act---act---act---act---act---act---act---act---act---act---act---act---act---act---act---act-----------
       ESTOP = digitalRead(eStopPin);                                 // check ESTOP switch

  // real-time-loop*******real-time-loop*******real-time-loop*******real-time-loop*******real-time-loop*******
  // real-time-loop*******real-time-loop*******real-time-loop*******real-time-loop*******real-time-loop*******

} // End of "outer" void loop()
//==========================================================================================================================================================================================================================================
// END OF Flight Code
//==========================================================================================================================================================================================================================================

//==========================================================================================================================================================================================================================================
//==========================================================================================================================================================================================================================================
// FUNCTIONS    FUNCTIONS    FUNCTIONS    FUNCTIONS    FUNCTIONS    FUNCTIONS    FUNCTIONS    FUNCTIONS    FUNCTIONS    FUNCTIONS    FUNCTIONS    FUNCTIONS    FUNCTIONS    FUNCTIONS    FUNCTIONS    FUNCTIONS    FUNCTIONS    
// Functions for each section of above code
// Please note: Except for very simple cases, it would be better to place all of these functions in a 
// myRobotControlFunctions.h file and #include it at start of program to keep robot flight code brief

//-----------------------------------------------------------------------------------------------
// Functions for setup code
//-----------------------------------------------------------------------------------------------

//-----------------------------------------------------------------------------------------------
// Functions for flight code
//-----------------------------------------------------------------------------------------------

// Realtime loop functions loop---loop---loop---loop---loop---loop---loop---loop---loop---loop---

// OCU functions ocu---ocu---ocu---ocu---ocu---ocu---ocu---ocu---ocu---ocu---ocu---ocu---ocu-----
// place OCU functions here

// SENSE functions sense---sense---sense---sense---sense---sense---sense---sense---sense---------
// place sense functions here

// THINK functions think---think---think---think---think---think---think---think---think---------
// place think functions here

// ACT functinos act---act---act---act---act---act---act---act---act---act---act---act---act-----
// place act functions here

// END of Functions
//===============================================================================================
// END of Robot Control Code
