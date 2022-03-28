#include <iostream>
#include "linked_list.h"
#include "list_elem.h"

using namespace std;

int main()
{
    linked_list M;
    M.push_back(1);
    M.print();
    M.push_back(2);
    M.push_back(3);
    M.print();
    linked_list N;
    N.push_back(1) ;
    N.push_back(2);
    N.push_back(3);
    N.move_front();
    N.curr() = 5;
    N.move_next();
    N.curr() = 6;
    N.move_next();
    cout << N.curr() << endl;
    N.print();
    linked_list O;
    O.push_back(1);
    O.push_back(2);
    O.push_back(3);
    O.move_front();
    O.move_next();
    O.insert(4);
    cout << O.curr() << endl;
    O.print();
    O.move_back();
    O.move_next();
    O.insert(5);
    O.print();
    linked_list P;
    P.push_back(1);
    P.push_back(2);
    P.push_back(3);
    P.push_back(4);
    P.push_back(5);
    P.move_front();
    P.erase(); // Удаляется 1
    cout << P.curr() << endl; // Текущим является 2
    P.print();
    P.move_next();
    P.erase(); // Удаляется 3
    cout << P.curr() << endl; // Текущим является 4
    P.print();
    P.move_back();
    P.erase(); // Удаляется 5 L.move_next(); // Пройден m_root, попали на первый элемент
    cout << P.curr() << endl; // Текущим является 2
    P.print();
    linked_list L;
    L.push_back(1);
    L.push_back(2);
    L.push_back(3);
    L.clear();
    L.push_back(4);
    L.push_back(5);
    L.push_back(6);
    L.print();
    return 0;
}
