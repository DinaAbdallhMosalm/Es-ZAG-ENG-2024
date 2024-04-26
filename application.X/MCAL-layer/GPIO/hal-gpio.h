/* 
 * File:   hal-gpio.h
 * Author: User
 *
 * Created on April 21, 2024, 1:56 PM
 */

#ifndef HAL_GPIO_H
#define	HAL_GPIO_H

/*-----------section : includes--------*/

#include "../pic18.h"
#include "../mcal-std-types.h"
#include "../device-config.h"
#include "hal-gpio-cfg.h"

/*----------section: Macro Declaration----*/
#define BIT_MASK      (uint8)1
#define PORT_PIN_MAX_NUMBER      8
#define PORT_MAX_NUMBER      5
#define GPIO_PORT_PIN_CONFIGURATIONS      CONFIG_ENABLE
#define GPIO_PORT_CONFIGURATIONS          CONFIG_ENABLE

/*----------section: Macro Function Declaration----*/
#define HWREG8(_8)      (*((volatile uint8 *)(_x)))
#define SET_BIT(REG,BIT_POSN)        (REG |= (BIT_MASK << BIT_POSN))
#define CLEAR_BIT(REG,BIT_POSN)        (REG &= ~(BIT_MASK << BIT_POSN))
#define TOGGLE_BIT(REG,BIT_POSN)        (REG ^= (BIT_MASK << BIT_POSN))
#define READ_BIT(REG,BIT_POSN)        ((REG >> BIT_POSN)& BIT_MASK)
     
/*----------section: Data Type Declaration----*/

typedef enum {
   GPIO_LOW = 0,
    GPIO_HIGH ,
}logic_t;

typedef enum {
    GPIO_OUTPUT_DIRECTION = 0 ,
    GPIO_INPUT_DIRECTION ,
}direction_t;

typedef enum {
    GPIO_PIN0 = 0 ,
    GPIO_PIN1 ,  
    GPIO_PIN2 ,   
    GPIO_PIN3 , 
    GPIO_PIN4 ,
    GPIO_PIN5 ,
    GPIO_PIN6 ,  
    GPIO_PIN7 , 
}pin_index_t;

typedef enum {
    PORTA_INDEX = 0 ,
    PORTB_INDEX ,
    PORTC_INDEX ,
    PORTD_INDEX ,
    PORTE_INDEX ,
}port_index_t;

typedef struct {
    uint8 port : 3 ;         /* @REF port_index_t*/
    uint8 pin : 3 ;          /* @REF pin_index_t*/
    uint8 direction : 1 ;   /* @REF direction_t*/
    uint8 logic : 1 ;       /* @REF logic_t*/
}pin_config_t;


/*----------section: Function Declaration----*/
Std_ReturnType gpio_pin_direction_initialize (const pin_config_t *_pin_config);
Std_ReturnType gpio_pin_get_direction_status (const pin_config_t *_pin_config ,direction_t *direction_status);
Std_ReturnType gpio_pin_write_logic (const pin_config_t *_pin_config , logic_t logic);
Std_ReturnType gpio_pin_read_logic (const pin_config_t *_pin_config, logic_t *logic);
Std_ReturnType gpio_pin_toggle_logic (const pin_config_t *_pin_config);

Std_ReturnType gpio_pin_initialize (const pin_config_t *_pin_config);


Std_ReturnType gpio_port_direction_initialize (port_index_t port , uint8 direction);
Std_ReturnType gpio_port_get_direction_status (port_index_t port , uint8 *direction_status);
Std_ReturnType gpio_port_write_logic (port_index_t port , uint8 logic);
Std_ReturnType gpio_port_read_logic (port_index_t port , uint8 *logic);
Std_ReturnType gpio_port_toggle_logic (port_index_t port);






#endif	/* HAL_GPIO_H */

