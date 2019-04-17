#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    enable_servo(2);
    set_servo_position(2,1261);
    create_connect();
    
    motor(0,50);
    msleep(500);//arm up
    motor(0,0);
    msleep(2500);
    create_drive_direct(50,50);
    msleep(400);
    create_drive_direct(0,100);//rotate towards center tower
    msleep(4200);
    create_drive_direct(100,100);
    msleep(700);//move forward towards tower
    create_drive_direct(0,0);
    msleep(2000);
    
    
    motor(0,25);
        msleep(3000);//arm up
    create_drive_direct(0,0);
    msleep(5000);
    create_drive_direct(50,50);//move towards tower
    msleep(5000);
    
    msleep(2000);
    set_servo_position(2,400);//grab botguy
    msleep(3000);
    create_drive_direct(-50,-50);//drive away from center tower
    msleep(5000);
    
    return 0;
}
