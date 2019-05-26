//
// Created by noam on 04/05/19.
//

#ifndef OS4_OSQUEUE_H
#define OS4_OSQUEUE_H



typedef struct os_node
{
    struct os_node* next;
    void* data;
}OSNode;

typedef struct os_queue
{
    OSNode *head, *tail;

}OSQueue;

OSQueue* osCreateQueue();

void osDestroyQueue(OSQueue* queue);

int osIsQueueEmpty(OSQueue* queue);

void osEnqueue(OSQueue* queue, void* data);

void* osDequeue(OSQueue* queue);


#endif //OS4_OSQUEUE_H
