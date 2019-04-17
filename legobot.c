#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    enable_servo(0);
    enable_servo(3);
    set_servo_position(3,753);
    set_servo_position(0,1542);
    motor(0,100);
    motor(1,100);
    msleep(1500);//out of box
    
    motor(0,0);
    motor(1,50);
    msleep(2000);//rotate
    
    motor(0,50);
    motor(1,50);
    msleep(6000);//move forward
    
    motor(0,50);
    motor(1,0);
    msleep(1800);//roate
    
    motor(0,50);
    motor(1,50);
    msleep(1350);
    
    motor(0,0);
    motor(1,0);
    msleep(500);
    
    motor(0,50);
    motor(1,0);
    msleep(1500);
    
    motor(0,0);
    motor(1,0);
    
    set_servo_position(3,1098);
    set_servo_position(0,1442);
    
    msleep(2000);
    
    motor(0,70);
    motor(1,75);
    msleep(10000);
    
    
    
    
    
    
    
    return 0;
}
