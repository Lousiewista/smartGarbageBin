#ifndef __UARTTOOL_H
#define __UARTTOOL_H

int myserialOpen(const char *device, const int baud);
void serialSendstring (const int fd, const unsigned char *s, int len);
int serialGetstring (const int fd, unsigned char *buffer);
//char serialGetmychar(const int fd);


#define SERIAL_DEV "/dev/ttyS5"
#define BAUD       115200


#endif
