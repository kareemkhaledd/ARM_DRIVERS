/*
 * BIT_MATH.h
 *
 *  Created on: Feb 23, 2024
 *      Author: KAREEM KAHLED
 */

#ifndef BIT_MATH_H_
#define BIT_MATH_H_


#define SET_BIT(REG,BIT_POS)       (REG|=(1<<BIT_POS))
#define CLR_BIT(REG,BIT_POS)       (REG&=~(1<<BIT_POS))
#define TOG_BIT(REG,BIT_POS)       (REG^=(1<<BIT_POS))
#define GET_BIT(REG,BIT_POS)       ((REG>>BIT_POS) &1)


#endif /* BIT_MATH_H_ */
