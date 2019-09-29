#ifndef _SENSOR_H__
#define _SENSOR_H__

/** class Sensor */
typedef struct Sensor Sensor;
struct Sensor {
    int updateFreq;
    int value;
};


/** constructor and destructor */
Sensor *Sensor_Create(void);
void Sensor_Destroy(Sensor *const me);

/** operations */
static inline int Sensor_getUpdateFreq(const Sensor *const me)
{
    return me->updateFreq;
}
static inline void Sensor_setUpdateFreq(Sensor *const me, int val)
{
    me->updateFreq = val;
}
static inline int Sensor_getValue(const Sensor *const me)
{
    return me->value;
}
static inline void Sensor_setValue(Sensor *const me, int val)
{
    me->value = val;
}

#endif
