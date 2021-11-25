#include "In_Duration.h"
    bool Duration::checkAndUpdateAlarm() 
    /* Function to check the if the alarm has been met
        if the alarm has been met i will return true and should pass the test */
    {
        if (time >= alarm)
            {
                alarm = -1;
                alarmHasBeenSet = false;
                return true;
            }
        else 
        return false;
    }
    
    int Duration::getDuration()
    /* This function will simply give you the current time count */
    {
        return time;
    }


    Duration::Duration()
    /* Resets the "clock" */
    {
        time = 0;
    }

    Duration::Duration(int t)
    /* Sets duration without counts*/
    {
        assert(t>0);
        time = t;
    }

    bool Duration::tick(int dt)
    /* This Function increases the "clock" by integer input and check for the alarm */
    {
        assert(time >=0);
        time += dt;
        if (alarmHasBeenSet == true)
            checkAndUpdateAlarm();
        else
        return false;
    }

    bool Duration::tick()
    /*Single integer increase to the "clock" that also checks for alarm*/
    {
        assert(time >= 0);
        time++;
        if (alarmHasBeenSet == true)
            checkAndUpdateAlarm();
        else
            return false;
    }

    void Duration::setAlarm(int a)
    /* Sets alarm at a given number */
    {
       assert(a > time);
       alarm = a; 
       alarmHasBeenSet = true; 
    }

    bool Duration::Checkalarm()
    /* This function will simply give you the current time count */
    {
        return alarmHasBeenSet;
    }