#pragma once

int getpid( );

int getclock( );

enum COLOR getcolor( int pid );

void setcolor( int pid, enum COLOR newcolor );