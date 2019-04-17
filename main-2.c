#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    enable_servo(0);
    enable_servo(3);
    set_servo_position(3,753);
    set_servo_position(0,1542);
    motor(0,50);
    motor(1,50);
    msleep(3000);//out of box
    
    motor(0,0);
    motor(1,50);
    msleep(1800);//rotate
    
    motor(0,50);
    motor(1,50);
    msleep(7000);//move forward
    
    motor(0,50);
    motor(1,0);
    msleep(1500);//roate
    
    motor(0,50);
    motor(1,50);
    msleep(1550);
    
    motor(0,0);
    motor(1,0);
    msleep(500);
    
    motor(0,50);
    motor(1,0);
    msleep(600);
    
    set_servo_position(3,1098);
    set_servo_position(0,1542);
    
    msleep(1000);
    
    motor(0,75);
    motor(1,75);
    msleep(5000);
    
    
    
    
    
    return 0;
}
