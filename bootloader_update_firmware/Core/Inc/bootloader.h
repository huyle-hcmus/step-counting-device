/**
 * @file       bootloader.h
 * @author      Dung Nguyen
 * @author      Huy Le
 * @author      Loi Ho
 * @brief
 * @version     1.0.0
 * @date        2023-08-09
 *
 */

/* Define to prevent recursive inclusion ------------------------------ */
#ifndef __BOOTLOADER_H
#define __BOOTLOADER_H

/* Public defines ----------------------------------------------------- */
/* Includes ----------------------------------------------------------- */
#include "main.h"
#include "stm32f4xx_hal.h"

/* Public function prototypes ----------------------------------------- */
/**
 * @brief Jumps to the specified application address.
 *
 * This function is responsible for transitioning from the bootloader to the main application.
 * It turns off peripherals, clears interrupt flags, disables fault handlers, sets the Main Stack Pointer,
 * retrieves the program counter address of the main application, and finally jumps to the main application.
 *
 * @note This function assumes that MY_ADDRESS and MY_ADDRESS + 4 contain the correct addresses
 *       of the main application entry point and the reset handler.
 */
void bootloader_jump_address(uint32_t jump_to_address);

#endif /* __BOOTLOADER_H */

/* End of file -------------------------------------------------------- */