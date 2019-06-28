#ifndef _RouteBO_H_
#define _RouteBO_H_

#include "TariffLib.h"

#include <string>


namespace TariffLib
{
    class TariffLib_API RouteBO
    {
        public:
            RouteBO(int, std::string);
            ~RouteBO();

            int getId() const;
            std::string getName() const;

        private:
            int _id;
            std::string _name;

    };
};

#endif