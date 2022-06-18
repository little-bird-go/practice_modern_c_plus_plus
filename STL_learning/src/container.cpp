#include "container.h"

// Sequence container

// array for the fixed-size sequence
void array_test(void)
{
    // Initialization
    array<int,10> x;        // elements of x have undefined value, may not zeros
    array<int,10> y{};      // or y={}, elements of y are all 0
    array<int, 3> s{1,2,3};    // the elements are 1,2,3, and the rest is 0

    for (auto &i : y)
    {
        cout << i << endl;
    }

    cout << x.size() << endl;
    for (auto &i : s)
    {
        cout << i << endl;
    }

    array<int, 3> s_cp(s);
    array<int, 3> s_cmp = {4,6,8};

    if(s_cp == s) cout << "s_cp equals to s" << endl;
    if(s_cmp < s) cout << "s_cmp < s" << endl;
    else cout<< "s_cmp >= s" << endl;

    // get elements in array, at(), front(), back(), or []
    // but at() will do the index check, which make the code safe
    for(int i = 0; i < s.size(); i++){
        cout << "the " << i << "th element is "<< s.at(i) << endl;
    }

    array<int,3>::iterator ite;
    ite = s.begin();
    cout << *ite << endl;
    ite += 2;
    cout << *ite << endl;

    array<int,3>::reverse_iterator iter = s.rbegin();
    cout << *iter << endl;
    iter++;
    cout<< *iter << endl;

    // data() return a plain array in C
    int* a = s.data();
    for(int i = 0; i < s.size(); i++){
        cout << *a+i << endl;
    }
}

void vector_test(void)
{
    vector<string> vec{"My", "name", "is", "wxw", "."};
    for(auto &s : vec){
        cout << s;
    }
    cout << endl;
}

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
