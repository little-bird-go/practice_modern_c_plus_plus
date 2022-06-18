#ifndef __CONTAINER_H__
#define __CONTAINER_H__

#include <iostream>
#include <string>

#include <array>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>

#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>

using namespace std;

// Sequence container
void array_test(void);
void vector_test(void);
void deque_test(void);
void list_test(void);
void forwardlist_test(void);

// Associative container
void set_test(void);
void multiset_test(void);
void map_test(void);
void multimap_test(void);

// Unordered container
void unordered_set_test(void);
void unordered_multiset_test(void);
void unordered_map_test(void);
void unordered_multimap_test(void);

#endif
