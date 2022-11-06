#ifndef COLORPRINTF_H_
#define COLORPRINTF_H_

#include<stdio.h>
#include<windows.h>

#ifdef SIMPLIFIED	//simplified
#include"clrio_simplified.h"
#endif

const int FOREGROUND_BLUE        = 0x1;
const int FOREGROUND_GREEN       = 0x2;
const int FOREGROUND_RED         = 0x4;
const int FOREGROUND_INTENSITY   = 0x8;

const int BACKGROUND_BLUE        = 0x10;
const int BACKGROUND_GREEN       = 0x20;
const int BACKGROUND_RED         = 0x40;
const int BACKGROUND_INTENSITY   = 0x80; 

void clrputchar(int color, int _Ch, bool echo = 0){
	HANDLE consolehwnd = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(consolehwnd, FOREGROUND_RED);
	putchar(_Ch);
	if(echo)SetConsoleTextAttribute(consolehwnd, 7);
}

#endif