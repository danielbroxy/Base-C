#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include "list_elem.h"

class linked_list
{
    private:
        list_elem * m_root;
        list_elem * m_curr;
    public:
        linked_list();
        ~linked_list( );
        void push_back(int val);
        void print();
        void move_front();
        void move_back();
        void move_next();
        void move_prev();
        int & curr();
        void insert(int val);
        void erase();
        void clear();
};

#endif // LINKED_LIST_H
