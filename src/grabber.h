#ifndef _GRABBER_H_
#define _GRABBER_H_

void autoOpen(int channel);
void autoClose(int channel);

void open(int channel, int value);
void close(int channel, int value);

void autoUp(int channel);
void autoDown(int channel);

void up(int channel, int value);
void down(int channel, int value);

#endif
