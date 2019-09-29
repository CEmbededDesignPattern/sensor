#include <stdio.h>
#include "sensor.h"

int main(void)
{
    Sensor *p_Sensor0, *p_Sensor1;
    p_Sensor0 = Sensor_Create();
    p_Sensor1 = Sensor_Create();

    Sensor_setValue(p_Sensor0, 99);
    Sensor_setValue(p_Sensor1, -1);

    printf("current value from Sensor0 is %d\n", Sensor_getValue(p_Sensor0));
    printf("current value from Sensor1 is %d\n", Sensor_getValue(p_Sensor1));

    Sensor_Destroy(p_Sensor0);
    Sensor_Destroy(p_Sensor1);

    return 0;
}
