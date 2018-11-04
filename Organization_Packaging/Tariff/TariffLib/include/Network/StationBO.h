#ifndef _StationBO_H_
#define _StationBO_H_

#include "TariffLib.h"

#include <string>

namespace TariffLib
{
    class TariffLib_API StationBO
    {
        public:
            StationBO(int id, std::string );
            ~StationBO();

            int getId() const;
            std::string getName() const;

        private:
            int _id;
            std::string _name;
    };
};

#endif