//
// Created by wangzhaobin on 11/29/2025.
//

#ifndef VECTORX_H
#define VECTORX_H
#ifdef __cplusplus
extern "C" {
#endif
#include <stddef.h>

typedef struct {
    void *data; // 数据
    size_t size; //  容器的大小
    size_t capacity; // 当前容器的容量
    size_t elem_size; // 元素的大小
} VectorX;

/**
 * 
 * @param elem_size  元素大小
 * @return 返回容器指针
 */
VectorX *vectorx_new(size_t elem_size);

/**
 * 
 * @param vector_x 需要释放内存的指针
 */
void vectorx_free(VectorX *vector_x);

/**
 *
 * 添加元素，自扩容
 * @param vec 容器指针
 * @param elem 元素
 *
 */
void vectorx_add(VectorX *vec, VectorX *elem);


/**
 *
 * @param vec 容器指针
 * @param index 索引
 * @return  根据元素索引返回元素指针
 */
void *vectorx_get(VectorX *vec, size_t index);


/**
 * 设置元素，自动扩容
 * @param vec 指针
 * @param index  索引
 * @param elem 万能元素指针
 */
void vectorx_set(VectorX *vec, size_t index, const void *elem);

// 获取当前元素数量
size_t vectorx_size(VectorX *vec);

// 清空（但不释放 capacity）
void vectorx_clear(VectorX *vec);

#ifdef __cplusplus
}
#endif

#endif

