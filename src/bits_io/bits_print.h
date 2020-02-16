/**
 * @author waterproofpatch
 * @brief bits print for bit printing
 */
#ifndef _BITS_PRINT_H_
#define _BITS_PRINT_H_

#include <stddef.h> /* size_t */

/**
 * @brief print the bits in each byte
 * @param data: ptr to data of length 'length' to print
 */
void bits_print(void *data, size_t length);

#endif /* _BITS_PRINT_H_ */
