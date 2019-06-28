#ifndef _StopBO_H_
#define _StopBO_H_

#include "TariffLib.h"

#include <string>

namespace TariffLib
{
    class TariffLib_API StopBO
    {
        public:
            StopBO(int id, std::string);
            ~StopBO();

            int getId() const;
            std::string getName() const;

        private:
            int _id;
            std::string _name;
    };
};

#endif