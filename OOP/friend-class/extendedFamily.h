#ifndef EXTENDEDFAMILY_H
#define EXTENDEDFAMILY_H
#include <iostream>
using namespace std;

class extendedFamily
{
    public:
        extendedFamily(string fatherName, string motherName);

        friend class nuclearFamily;

    protected:

    private:
        string fatherName;
        string motherName;
};

#endif /* EXTENDEDFAMILY */