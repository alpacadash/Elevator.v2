#ifndef RIDER_H
#define RIDER_H

struct Rider
{
   const int from , to;
   const bool goingUp, goingDown;
   Rider(int,int);
   Rider& operator=(const Rider&);
};
#endif
