/* 
 * File:   application.c
 * Author: User
 *
 * Created on April 21, 2024, 1:28 PM
 */

#include "application.h"

pin_config_t led_1 = {

.port = PORTC_INDEX ,
.pin = GPIO_PIN0,
.direction = GPIO_OUTPUT_DIRECTION,
.logic = GPIO_LOW ,

};

pin_config_t led_2 = {

.port = PORTC_INDEX ,
.pin = GPIO_PIN1,
.direction = GPIO_OUTPUT_DIRECTION,
.logic = GPIO_LOW ,

};
pin_config_t led_3 = {

.port = PORTC_INDEX ,
.pin = GPIO_PIN2,
.direction = GPIO_OUTPUT_DIRECTION,
.logic = GPIO_LOW ,

};
pin_config_t led_4 = {

.port = PORTC_INDEX ,
.pin = GPIO_PIN3,
.direction = GPIO_OUTPUT_DIRECTION,
.logic = GPIO_LOW ,

};
pin_config_t led_5 = {

.port = PORTC_INDEX ,
.pin = GPIO_PIN4,
.direction = GPIO_OUTPUT_DIRECTION,
.logic = GPIO_LOW ,

};
pin_config_t led_6 = {

.port = PORTC_INDEX ,
.pin = GPIO_PIN5,
.direction = GPIO_OUTPUT_DIRECTION,
.logic = GPIO_LOW ,

};
pin_config_t btn_1 = {

.port = PORTD_INDEX ,
.pin = GPIO_PIN0,
.direction = GPIO_INPUT_DIRECTION,
.logic = GPIO_LOW ,

};

Std_ReturnType ret = E_NOT_OK;
logic_t btn_1_status ;
direction_t led_1_st ;
int main() {
   
     application_initialize();
    
   while(1){
       
      
       //ret = gpio_pin_read_logic(btn_1,&btn_1_status);
     /*  if(btn_1_status==GPIO_HIGH){
       ret = gpio_pin_write_logic(&led_1,GPIO_HIGH);
       }
       else{
       ret = gpio_pin_write_logic(&led_1,GPIO_LOW);
       }*/
       
       
       ret = gpio_pin_write_logic(&led_1,GPIO_LOW);
       ret = gpio_pin_write_logic(&led_2,GPIO_HIGH);
        ret = gpio_pin_write_logic(&led_3,GPIO_HIGH);
         ret = gpio_pin_write_logic(&led_4,GPIO_HIGH);
          ret = gpio_pin_write_logic(&led_5,GPIO_HIGH);
           ret = gpio_pin_write_logic(&led_6,GPIO_HIGH);
       __delay_ms(6000);
       ret = gpio_pin_write_logic(&led_1,GPIO_HIGH);
       ret = gpio_pin_write_logic(&led_2,GPIO_LOW);
       ret = gpio_pin_write_logic(&led_3,GPIO_LOW);
        ret = gpio_pin_write_logic(&led_4,GPIO_HIGH);
         ret = gpio_pin_write_logic(&led_5,GPIO_HIGH);
          ret = gpio_pin_write_logic(&led_6,GPIO_HIGH);
          
        __delay_ms(1000); 
       
       ret = gpio_pin_write_logic(&led_1,GPIO_HIGH);
        ret = gpio_pin_write_logic(&led_2,GPIO_HIGH);
         ret = gpio_pin_write_logic(&led_3,GPIO_HIGH);
         ret = gpio_pin_write_logic(&led_4,GPIO_LOW);
         ret = gpio_pin_write_logic(&led_5,GPIO_LOW);
         ret = gpio_pin_write_logic(&led_6,GPIO_LOW);
       __delay_ms(6000);
       
   }
    return (EXIT_SUCCESS);
}
void application_initialize(void){

 //ret = gpio_pin_initialize(btn_1);
ret = gpio_pin_initialize(&led_1);
ret = gpio_pin_initialize(&led_2);
ret = gpio_pin_initialize(&led_3);
ret = gpio_pin_initialize(&led_4);
ret = gpio_pin_initialize(&led_5);
ret = gpio_pin_initialize(&led_6);

//gpio_port_direction_initialize(PORTC_INDEX,0xAA);


}
