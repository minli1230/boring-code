/*
 * @Author: your name
 * @Date: 2020-10-22 13:30:48
 * @LastEditTime: 2020-11-12 16:03:58
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /boring-code/src/matrix/CooMatrix.h
 */
#ifndef _COO_MATRIX_H_
#define _COO_MATRIX_H_

#include "matrix.h"
#include "container/Map.h"


typedef struct _coo_matrix {
    imatrix_t matrix;
    Map coo;
}CooMatrix;

CooMatrix* CooMatrix_create(size_t x, size_t y);
CooMatrix* CooMatrix_load(size_t x, size_t y, float* data);
int CooMatrix_destroy(CooMatrix*);

#endif

