#include <FEH.h>
#include <Arduino.h>
#include <FEHIO.h>
#include <FEHLCD.h>
#include <FEHMotor.h>
#include <FEHServo.h>



// Declare things like Motors, Servos, etc. here
// For example:
// FEHMotor leftMotor(FEHMotor::Motor0, 6.0);
// FEHServo servo(FEHServo::Servo0);


void ERCMain()
{
    // AnalogInputPin CdS_cell(FEHIO::Pin1);
    // while(1) {
    //     float x = CdS_cell.Value();
    //     LCD.Write(x);
    //     Sleep(1.0);
    //     LCD.Clear();
    // }

    // AnalogInputPin CdS_cell(FEHIO::Pin1);
    // FEHServo servo(FEHServo::Servo0);
    // servo.SetMin(500);
    // servo.SetMax(2250);
    // servo.SetDegree(90.);

    // while(1) {
    //     float x = CdS_cell.Value();
    //     LCD.Write(x);
    //     if (x < .1) {
    //         servo.SetDegree(0);
    //     } else if(x>4.9) {
    //         servo.SetDegree(180);
    //     } else {
    //         servo.SetDegree(36*x);
    //     }

    //     Sleep(1.0);
    //     LCD.Clear();
    // }


    DigitalInputPin one(FEHIO::Pin0);

    FEHMotor right_motor(FEHMotor::Motor1, 9.0);
    FEHMotor left_motor(FEHMotor::Motor2, 9.0);

    boolean turned = false;

   int turnCount = 0;

    while (!turned)
    {
        right_motor.SetPercent(20);
        left_motor.SetPercent(20);

        while (one.Value() != 0)
        {
        }

        right_motor.Stop();
        left_motor.Stop();
        Sleep(1.0);

        if (turnCount == 0)
        {
            right_motor.SetPercent(40);
            left_motor.SetPercent(5);
            Sleep(2.0);
        }
        else if (turnCount == 1)
        {
            right_motor.SetPercent(40);
            left_motor.SetPercent(5);
            Sleep(2.0);
        }
        else if (turnCount == 2)
        {
            right_motor.SetPercent(40);
            left_motor.SetPercent(5);
            Sleep(2.0);
        }
        else
        {
            turned = true;
        }

        right_motor.Stop();
        left_motor.Stop();
        Sleep(2.0);

        turnCount++;
    }

    right_motor.Stop();
    left_motor.Stop();






    
}