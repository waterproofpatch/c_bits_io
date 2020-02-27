/**
 * @author waterproofpatch
 * @brief print the binary representation of a value
 */
#include <stddef.h> /* size_t */
#include <stdio.h>  /* printf */

#include "bits_print.h" /* prototype for this function */

/**
 * @brief print the bits in the byte
 *
 * @param byte
 */
static void bits_print_byte(unsigned char byte)
{
    /* for each bit in a byte */
    for (unsigned int i = 0; i < sizeof(unsigned char) * 8; i++)
    {
        if ((byte & (1 << i)))
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
}

/**
 * @brief print the bits in each byte
 * @param data: ptr to data of length 'length' to print
 */
void bits_print(void *data, size_t length)
{
    size_t byte = 0;
    for (byte = 0; byte < length; byte++)
    {
        char *pByte = (char *)data;
        bits_print_byte(*pByte);
        data = (char *)data + 1;
    }
    printf("\n");
}
