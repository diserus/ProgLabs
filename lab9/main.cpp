#include <iostream>
using namespace std;

typedef struct student
{
    string lastname;
    int physic,prog,trpo,saod;
};
typedef struct list
{
    student data; // поле данных
    struct list *ptr; // указатель на следующий элемент
};

list * init(student a) // а- значение первого узла
{
    list *lst;
    // выделение памяти под корень списка
    lst = new list;
    lst->data = a;
    lst->ptr = NULL; // это последний узел списка
    return(lst);
}
list * add(list *lst, student data)
{
    list *temp, *p;
    temp = new list;
    temp->data = data;
    temp->ptr = NULL;
    p = lst; // Начинаем поиск с головы списка
    while (p->ptr != NULL) {
        p = p->ptr; // Переходим к следующему элементу
    }
    p->ptr = temp; // Добавляем новый элемент в конец списка

    return(lst);
}
void listprint(list *lst)
{
    struct list *p;
    p = lst;
    while (p != NULL)
    {
        cout << "Last name: " << p->data.lastname 
        << ", Physics: " << p->data.physic << ", Programming: " << p->data.prog 
        << ", TRPO: " << p->data.trpo << ", SAOD: " << p->data.saod << endl; // вывод значения элемента p
        p = p->ptr; // переход к следующему узлу
    }
}
bool compareStudents(student s1, student s2) 
{
    return s1.lastname > s2.lastname;
}

void sortList(list *head) {
    bool swapped;
    list *ptr;
    list *lptr = NULL;

    // Проверка на пустой список или список из одного элемента
    if (head == NULL)
        return;

    do {
        swapped = false;
        ptr = head;

        while (ptr->ptr != lptr) 
        {
            if (compareStudents(ptr->data, ptr->ptr->data)) 
            {
                student temp = ptr->data;
                ptr->data = ptr->ptr->data;
                ptr->ptr->data = temp;
                swapped = true;
            }
            ptr = ptr->ptr;
        }
        lptr = ptr;
    } while (swapped);
}
int main()
{
    student student1 = {"Prozorenko", 1, 5, 5, 5};
    student student2 = {"Yanenko", 0, 1, 1, 1};
    student student3 = {"Vaschuk", 3, 4, 4, 4};
    list *head = init(student1);

    // Добавим остальных студентов в список
    head = add(head, student2);
    head = add(head, student3);
    sortList(head);
    // Выведем содержимое списка
    listprint(head);
    return 0;
} 