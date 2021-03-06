#ifndef RECOG_H
#define RECOG_H

#define DEBUG 0
 
// define sample rate, bit depth & sample size (in seconds)
#define SAMPLE_RATE 8000
#define BIT_DEPTH 16
#define SAMPLE_SIZE 1
#define FRAMES_PER_SAMPLE 40

// autodefine some settings based on defines above
#define BUF_SIZE SAMPLE_RATE * SAMPLE_SIZE
#define FRAME_SIZE SAMPLE_RATE / FRAMES_PER_SAMPLE

// include required std headers
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <time.h>

extern int16_t buffer[BUF_SIZE];
extern int32_t buffer_index;

extern int16_t current_value;

void buffer_add_current(void);
void buffer_clear(void);
 
#endif
