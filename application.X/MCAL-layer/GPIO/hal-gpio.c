/* 
 * File:   hal-gpio.c
 * Author: User
 *
 * Created on April 21, 2024, 1:56 PM
 */
#include "hal-gpio.h"

/*reference to data direction control register*/
volatile uint8 *tris_registers[] = {&TRISA,&TRISB,&TRISC,&TRISD,&TRISE};
/*reference to data latch register(read and write to data latch)*/
volatile uint8 *lat_registers[] = {&LATA,&LATB,&LATC,&LATD,&LATE};
/*reference to port status register*/
volatile uint8 *port_registers[] = {&PORTA,&PORTB,&PORTC,&PORTD,&PORTE};



#if GPIO_PORT_PIN_CONFIGURATIONS == CONFIG_ENABLE
Std_ReturnType gpio_pin_direction_initialize (const pin_config_t *_pin_config){
     Std_ReturnType ret = E_OK ;
    if (NULL ==_pin_config || _pin_config-> pin >PORT_PIN_MAX_NUMBER - 1){
    ret = E_NOT_OK;
    }
    else {
    switch (_pin_config ->direction ){
        case GPIO_OUTPUT_DIRECTION :
         CLEAR_BIT (*tris_registers[_pin_config ->port],_pin_config -> pin)   ;
        break;
        case GPIO_INPUT_DIRECTION :
            SET_BIT (*tris_registers[_pin_config ->port],_pin_config -> pin) ;
        break;
        default :ret = E_NOT_OK;
    }
    }
    return ret ;
}
#endif




#if GPIO_PORT_PIN_CONFIGURATIONS == CONFIG_ENABLE
Std_ReturnType gpio_pin_get_direction_status (const pin_config_t *_pin_config ,direction_t *direction_status){

    Std_ReturnType ret = E_OK ;
    if (NULL ==_pin_config || NULL == direction_status || _pin_config -> pin >PORT_PIN_MAX_NUMBER - 1 ){
    ret = E_NOT_OK;
    }
    else{
    *direction_status = READ_BIT(*tris_registers[_pin_config->port],_pin_config->pin) ;
    }
      return ret ;
}
#endif




#if GPIO_PORT_PIN_CONFIGURATIONS == CONFIG_ENABLE
Std_ReturnType gpio_pin_write_logic (const pin_config_t *_pin_config , logic_t logic){
    Std_ReturnType ret = E_OK ;
    if (NULL ==_pin_config  || _pin_config-> pin >PORT_PIN_MAX_NUMBER - 1){
    ret = E_NOT_OK;
    }
    else{
         switch (logic){
        case GPIO_LOW :
         CLEAR_BIT (*lat_registers[_pin_config ->port],_pin_config -> pin)   ;
        break;
        case  GPIO_HIGH :
            SET_BIT(*lat_registers[_pin_config ->port],_pin_config -> pin) ;
        break;
        default :ret = E_NOT_OK;
    }
    }
      return ret ;
}
#endif



#if GPIO_PORT_PIN_CONFIGURATIONS == CONFIG_ENABLE
Std_ReturnType gpio_pin_read_logic (const pin_config_t *_pin_config, logic_t *logic){

    Std_ReturnType ret = E_OK ;
     if (NULL ==_pin_config || NULL == logic  || _pin_config-> pin >PORT_PIN_MAX_NUMBER - 1 ){
    ret = E_NOT_OK;
    }
    else{
         *logic = READ_BIT (*lat_registers[_pin_config -> port],_pin_config -> pin);
    }
      return ret ;
}
#endif 



#if GPIO_PORT_PIN_CONFIGURATIONS == CONFIG_ENABLE
Std_ReturnType gpio_pin_toggle_logic (const pin_config_t *_pin_config){

    Std_ReturnType ret = E_OK ;
     if (NULL ==_pin_config  || _pin_config-> pin >PORT_PIN_MAX_NUMBER - 1){
    ret = E_NOT_OK;
    }
    else{
         
         TOGGLE_BIT(*lat_registers[_pin_config ->port],_pin_config -> pin);
    }
      return ret ;
}
#endif


#if GPIO_PORT_PIN_CONFIGURATIONS == CONFIG_ENABLE
Std_ReturnType gpio_pin_initialize (const pin_config_t *_pin_config){
Std_ReturnType ret = E_OK ;
if (NULL ==_pin_config  || _pin_config-> pin >PORT_PIN_MAX_NUMBER - 1){
    ret = E_NOT_OK;
    }
    else{
    gpio_pin_direction_initialize(_pin_config);
    gpio_pin_write_logic(_pin_config,_pin_config->logic);
    }


return ret ;
}

#endif





#if GPIO_PORT_CONFIGURATIONS == CONFIG_ENABLE
Std_ReturnType gpio_port_direction_initialize (port_index_t port , uint8 direction){
    Std_ReturnType ret = E_OK ;
    
     if (port == PORT_MAX_NUMBER -1 ){
    ret = E_NOT_OK;
    }
    else{
         *tris_registers[port] = direction ;
    }
      return ret ;
}
#endif




#if GPIO_PORT_CONFIGURATIONS == CONFIG_ENABLE
Std_ReturnType gpio_port_get_direction_status (port_index_t port , uint8 *direction_status){

    Std_ReturnType ret = E_OK ;
     if (NULL == direction_status ){
    ret = E_NOT_OK;
    }
    else{
    }
      return ret ;
}
#endif



#if GPIO_PORT_CONFIGURATIONS == CONFIG_ENABLE
Std_ReturnType gpio_port_write_logic (port_index_t port , uint8 logic){

    Std_ReturnType ret = E_OK ;
    
      return ret ;
}
#endif



#if GPIO_PORT_CONFIGURATIONS == CONFIG_ENABLE
Std_ReturnType gpio_port_read_logic (port_index_t port , uint8 *logic){

    Std_ReturnType ret = E_OK ;
     if (NULL == logic ){
    ret = E_NOT_OK;
    }
    else{
    }
      return ret ;
}
#endif


#if GPIO_PORT_PIN_CONFIGURATIONS == CONFIG_ENABLE
Std_ReturnType gpio_port_toggle_logic (port_index_t port){

    Std_ReturnType ret = E_OK ;
    
      return ret ;
}
#endif