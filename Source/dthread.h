//HEADER_GOES_HERE
#ifndef __DTHREAD_H__
#define __DTHREAD_H__

extern unsigned int glpDThreadId;
extern BOOLEAN dthread_running;

void dthread_remove_player(int pnum);
void dthread_send_delta(int pnum, char cmd, void *pbSrc, int dwLen);
void dthread_start();
unsigned int __stdcall dthread_handler(void *);
void thread_cleanup();
void Test();

/* data */

#endif /* __DTHREAD_H__ */
