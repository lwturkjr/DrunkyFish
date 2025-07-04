// drunky.c
#include "stdio.h"
#include "stdlib.h"
#include "defs.h"
#include "string.h"

#define WAC1 "r1b1k2r/ppppnppp/2n2q2/2b5/3NP3/2P1B3/PP3PPP/RN1QKB1R w KQkq - 0 1"
#define PERFT "r3k2r/p1ppqpb1/bn2pnp1/3PN3/1p2P3/2N2Q1p/PPPBBPPP/R3K2R w KQkq - 0 1"

int main() {

    AllInit();

    
    S_BOARD board[1];

    ParseFen(PERFT, board);
    
    PrintBoard(board);
    
    ASSERT(CheckBoard(board));
    printf("\nForced asserts...\n");
    board->posKey ^= SideKey;
    ASSERT(CheckBoard(board));


    return 0;

}