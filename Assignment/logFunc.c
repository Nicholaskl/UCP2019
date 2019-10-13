#include <stdlib.h>
#include "LinkedList.h"
#include "logFunc.h"

void insertTurn(LinkedList** game, int numTurn, char player, int insertX, int insertY)
{
    gameEntry gameEnt;

    gameEnt.turnNum = numTurn;
    gameEnt.player = player;
    gameEnt.xCoord = insertX;
    gameEnt.yCoord = insertY;

    *game = createLinkedList();
    insertLast(*game, &gameEnt);
}

void freeLists(LinkedList** logs)
{
    freeLinkedList(*logs, &freeGameList);
}

void freeGameList(LListNode* node)
{
    freeLinkedList(node->data, &freeEntry);
    free(node);
}

void freeEntry(LListNode* node)
{
    free(node->data);
}
