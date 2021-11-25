#ifndef In_Duration
#define In_Duration
#include <assert.h>
#include <stdio.h>

class Duration
{
private:
    int time; 
    int alarm;
    bool alarmHasBeenSet;
    bool checkAndUpdateAlarm();
public:
    Duration();
    Duration (int t);
    int getDuration();
    bool tick(int dt);
    bool tick();
    void setAlarm(int a);
    bool Checkalarm();
};

#endif