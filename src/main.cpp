#include <FEHLCD.h>
#include <FEHIO.h>
#include <FEHSD.h>
#include <FEHUtility.h>

// Declarations for analog optosensors
AnalogInputPin right_opto(FEHIO::Pin8);
AnalogInputPin center_opto(FEHIO::Pin10);
AnalogInputPin left_opto(FEHIO::Pin12);

void ERCMain()
{
    
    // int x, y; 

    // //Initialize the screen
    // LCD.Clear(BLACK);
    // LCD.SetFontColor(WHITE);

    // LCD.WriteLine("Analog Optosensor Testing");
    // LCD.WriteLine("Touch the screen");
    // while(!LCD.Touch(&x,&y)); //Wait for screen to be pressed
    // while(LCD.Touch(&x,&y)); //Wait for screen to be unpressed

    // // Record values for optosensors on and off of the straight line
    // // Left Optosensor on straight line
    // LCD.Clear(BLACK);
    // LCD.WriteLine("Place left optosensor on straight line");
    // Sleep(1.0); // Wait to avoid double input
    // LCD.WriteLine("Touch screen to record value (1/12)");
    // while(!LCD.Touch(&x,&y)); //Wait for screen to be pressed
    // while(LCD.Touch(&x,&y)); //Wait for screen to be unpressed
    // // Write the value returned by the optosensor to the screen
    // float leftOptosensorValue = left_opto.Value();
    // LCD.Write("Left Optosensor Value:");
    // LCD.WriteLine(leftOptosensorValue);
    // Sleep(5.0); // Wait to avoid double input

    // // Left Optosensor off straight line
    // LCD.Clear(BLACK);
    // LCD.WriteLine("Place left optosensor off straight line");
    // Sleep(0.25); // Wait to avoid double input
    // LCD.WriteLine("Touch screen to record value (2/12)");
    // while(!LCD.Touch(&x,&y)); //Wait for screen to be pressed
    // while(LCD.Touch(&x,&y)); //Wait for screen to be unpressed
    // // Write the value returned by the optosensor to the screen
    // leftOptosensorValue = left_opto.Value();
    // // <ADD CODE HERE>
    // LCD.Write(leftOptosensorValue);
    // Sleep(5.0); // Wait to avoid double input

    // // Repeat process for remaining optosensors, and repeat all three for the curved line values
    // // <ADD CODE HERE>

    // // Record values for optosensors on and off of the straight line
    // // Right Optosensor on straight line
    // LCD.Clear(BLACK);
    // LCD.WriteLine("Place right sensor on straight line");
    // Sleep(5.0); // Wait to avoid double input
    // LCD.WriteLine("Touch screen to record value (1/12)");
    // while(!LCD.Touch(&x,&y)); //Wait for screen to be pressed
    // while(LCD.Touch(&x,&y)); //Wait for screen to be unpressed
    // // Write the value returned by the optosensor to the screen
    // float rightOptosensorValue = right_opto.Value();
    // LCD.Write("Right Optosensor Value:");
    // LCD.WriteLine(rightOptosensorValue);
    // Sleep(5.0); // Wait to avoid double input

    // // Left Optosensor off straight line
    // LCD.Clear(BLACK);
    // LCD.WriteLine("Place right sensor off straight line");
    // Sleep(5.0); // Wait to avoid double input
    // LCD.WriteLine("Touch screen to record value (2/12)");
    // while(!LCD.Touch(&x,&y)); //Wait for screen to be pressed
    // while(LCD.Touch(&x,&y)); //Wait for screen to be unpressed
    // // Write the value returned by the optosensor to the screen
    // rightOptosensorValue = right_opto.Value();
    // // <ADD CODE HERE>
    // LCD.WriteLine(rightOptosensorValue);
    // Sleep(5.0); // Wait to avoid double input

    // // Record values for optosensors on and off of the straight line
    // // Center Optosensor on straight line
    // LCD.Clear(BLACK);
    // LCD.WriteLine("Place middle ensor on straight line");
    // Sleep(5.0); // Wait to avoid double input
    // LCD.WriteLine("Touch screen to record value (1/12)");
    // while(!LCD.Touch(&x,&y)); //Wait for screen to be pressed
    // while(LCD.Touch(&x,&y)); //Wait for screen to be unpressed
    // // Write the value returned by the optosensor to the screen
    // float centerOptosensorValue = center_opto.Value();
    // LCD.Write("Center Optosensor Value:");
    // LCD.WriteLine(centerOptosensorValue);
    // Sleep(5.0); // Wait to avoid double input

    // // Left Optosensor off straight line
    // LCD.Clear(BLACK);
    // LCD.WriteLine("Place middle ensor off straight line");
    // Sleep(1.0); // Wait to avoid double input
    // LCD.WriteLine("Touch screen to record value (2/12)");
    // while(!LCD.Touch(&x,&y)); //Wait for screen to be pressed
    // while(LCD.Touch(&x,&y)); //Wait for screen to be unpressed
    // // Write the value returned by the optosensor to the screen
    //  centerOptosensorValue = center_opto.Value();
    // // <ADD CODE HERE>
    // LCD.WriteLine(centerOptosensorValue);
    // Sleep(5.0); // Wait to avoid double input

    // // Print end message to screen
    // LCD.Clear(BLACK);
    // LCD.WriteLine("Test Finished");
}

