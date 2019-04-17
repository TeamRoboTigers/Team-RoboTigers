#include <kipr/botball.h>

int main()
{
    enable_servo(2);
    create_connect();
    set_servo_position(2,1925);
    create_drive_direct(-95,100);//turn to big tower
    msleep(1900);
    create_drive_direct(100,100);//move to big tower
    msleep(5500);
    create_drive_direct(0,0);
    msleep(1000);
    set_servo_position(2,273);
    msleep(1000);
    
    create_drive_direct(-100,-100);
    msleep(2500);
    create_drive_direct(-100,100);
    msleep(3000);
    set_servo_position(2,1925);
    
    return 0;
}
