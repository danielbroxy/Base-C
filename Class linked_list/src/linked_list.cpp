#include "linked_list.h"
#include <iostream>
using namespace std;

linked_list::linked_list()
{
    m_root = new list_elem;
    m_root->m_next = m_root;
    m_root->m_prev = m_root;
    m_curr = m_root;
}

linked_list::~linked_list()
{
    clear();
    delete m_root;
}

void linked_list::push_back(int val)
{
    list_elem * new_elem = new list_elem;
    new_elem->m_data = val;
    new_elem->m_next = m_root;
    new_elem->m_prev = m_root->m_prev;
    new_elem->m_prev->m_next = new_elem;
    new_elem->m_next->m_prev = new_elem;
}

void linked_list::print()
{
    for (list_elem * curr = m_root->m_next; curr != m_root; curr = curr->m_next)
    {
        cout << curr->m_data << " ";
    }
    cout << endl;
}

void linked_list::move_front()
{
    m_curr = m_root->m_next;
}

void linked_list::move_back()
{
    m_curr = m_root->m_prev;
}
void linked_list::move_next()
{
    m_curr = m_curr->m_next;
}

void linked_list::move_prev()
{
    m_curr = m_curr->m_prev;
}

int & linked_list::curr()
{
    return m_curr->m_data;
}

void linked_list::insert(int val)
{
    list_elem * new_elem = new list_elem;
    new_elem->m_data = val;
    new_elem->m_next = m_curr;
    new_elem->m_prev = m_curr->m_prev;
    new_elem->m_prev->m_next = new_elem;
    new_elem->m_next->m_prev = new_elem;
    m_curr = new_elem;
}

void linked_list::erase()
{
    m_curr->m_next->m_prev = m_curr->m_prev;
    m_curr = m_curr->m_next;
    delete m_curr->m_prev->m_next;
    m_curr->m_prev->m_next = m_curr;
}

void linked_list::clear()
{
    m_curr = m_root->m_next;
    while (m_curr != m_root)
        erase();
}
