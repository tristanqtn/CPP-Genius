#include "header.h"

/**
************ QUEUE (FIFO : First In First Out)
*
* DEFINTION :
*   non contiguous data in memory
*   2 operations authorized (queue/unqueue)
*   only access to the head of the queue
*   access by index
*   no browsing possible in queues
*
**/

/**
*
* FUNCTIONS
*
* data accessor :    - myQueue.front()
*
* functions :   - myQueue.push() add a value in a new cell at the front of the queue
*               - myQueue.pop()  delete front cell of vector
*
**/

//Queue///////////////////////////////////////////////////////
void container_queue ()
{
    //std::queue <TYPE> NAME;
    std::queue <int> myQueue;

    for(int i=1; i<=10; i++)
    {
        myQueue.push(i);
    }

    std::cout << "Front - " << myQueue.front() << std::endl;

    myQueue.pop();

    std::cout << "New front - " << myQueue.front() << std::endl;

    for(int i=1; i<=9; i++)
    {
        myQueue.pop();
    }

    if(myQueue.empty())
            std::cout << "Queue empty !" <<std::endl;
    else
            std::cout << "Left " << myQueue.size() << "elem" << std::endl;

}
////////////////////////////////////////////////////////////////
