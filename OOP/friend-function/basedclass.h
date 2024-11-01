#ifndef BASEDCLASS_H
#define BASEDCLASS_H
#include <iostream>
using namespace std;

class basedclass
{
    public:
        basedclass(int age, string name);

        friend void basedclassFriend(basedclass);


    protected:

    private:
        int age;
        string name;

};


#endif /* BASEDCLASS_H */