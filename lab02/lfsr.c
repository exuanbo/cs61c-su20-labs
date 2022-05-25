#include "lfsr.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void lfsr_calculate(uint16_t *reg) {
  /* YOUR CODE HERE */
  unsigned new_msb = (*reg & 1) ^ ((*reg >> 2) & 1) ^ ((*reg >> 3) & 1) ^ ((*reg >> 5) & 1);
  *reg = (*reg >> 1) | (new_msb << 15);
}
