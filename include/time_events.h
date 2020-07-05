#ifndef GUARD_TIME_EVENTS_H
#define GUARD_TIME_EVENTS_H

void UpdateMirageRnd(u16);
u8 IsMirageIslandPresent(void);
void UpdateBirchState(u16);
u8 GetTimeOfDay(void);

enum 
{
    TIME_MORNING = 1,
    TIME_DAY,
    TIME_NIGHT
};

#define MORNING_START 4
#define DAY_START 10
#define NIGHT_START 18

#endif // GUARD_TIME_EVENTS_H
