#ifndef DERIVEDCLASSED_H
#define DERIVEDCLASSED_H
#include "basedclass1.h"
#include "basedclass2.h"

class derivedclass:public basedclass1, public basedclass2
{
    public:
        derivedclass(int based1Age, string based1Name, int based2Age, string based2Name);

        void display();

    protected:

    private:

};

#endif /* DERIVEDCLASSED_H */