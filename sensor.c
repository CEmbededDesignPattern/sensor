#include "sensor.h"
#include "stdlib.h"

static void Sensor_Init(void)
{

}

static void Sensor_Clean(void)
{

}


/** constructor and destructor */
Sensor *Sensor_Create(void)
{
    Sensor *me = (Sensor *)malloc(sizeof(Sensor));
    if (me != NULL)
    {
        Sensor_Init();
    }
    return me;
}

void Sensor_Destroy(Sensor *const me)
{
    if (me != NULL)
    {
        Sensor_Clean();
        free(me);
    }
}

