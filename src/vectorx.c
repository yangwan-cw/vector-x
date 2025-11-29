//
// Created by wangzhaobin on 11/29/2025.
//

#include "../include/vectorx.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


#define VECTORX_INITIAL_CAP 4


VectorX *vectorx_new(size_t elem_size) {
    VectorX *vec = malloc (sizeof(VectorX));
    if (!vec) {
        return NULL;
    }
    vec->data = malloc(elem_size * VECTORX_INITIAL_CAP);
    if (!vec->data) {
        free(vec);
        return NULL;
    }
    vec->size = 0;
    vec->capacity = VECTORX_INITIAL_CAP;
    vec->elem_size = elem_size;
    return vec;
}


