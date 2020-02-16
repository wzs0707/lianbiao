#include <iostream>
using namespace std;

struct student{
    int id_num;
    student *next;
};

student *create()
{
    student *head,*temp; int num,n=0;
    head =new student;
    temp=head;
    cin>>num;
    while (num !=-1)
    {
        n++;
        temp->id_num=num;
        temp->next = new student;
        temp = temp->next;
        cin>>num;
    }
    if (n==0)head =NULL;else temp->next =NULL;
    return head;
}
