/*
 * @Author: your name
 * @Date: 2020-10-14 21:35:27
 * @LastEditTime: 2020-10-26 09:04:49
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /boring-code/src/container/Hashmap.h
 */
#ifndef _HASHMAP_2_H_
#define _HASHMAP_2_H_

#include "Cn.h"
#include "base/__hashmap.h"
#include "Entity.h"

typedef Container   Hashmap;
typedef hash_node_t HashNode;
#define HASHMAP_SLOT_SIZE 10

#define Hashmap_init(hm, setup, conflict_fix, cleanup, key_hasher, key_cmp) \
    CN_initialize(hm, hashmap, NULL, setup, conflict_fix, NULL, NULL, NULL, cleanup, HASHMAP_SLOT_SIZE, key_hasher, key_cmp)

#define Hashmap_uninit(hm) CN_uninitialize(hm, hashmap)

#define Hashmap_has(con, key) CN_has(con, key)

#define Hashmap_setx(con, x, ...) do {         \
    
    CN_set(con, p2t(pentity));                 \
} while(0)

#define Hashmap_getx(con, value, ...)        \
    ({                                       \

        ret;                                 \
    })
#define Hashmap_del(con, key, rdata) CN_rm_target(con, key, rdata)

#define Hashmap_table(con) (_CN( (((hashmap_t*)cc(con))->_hash_table),  (((hashmap_t*)cc(con))->key_compare) ))


#endif