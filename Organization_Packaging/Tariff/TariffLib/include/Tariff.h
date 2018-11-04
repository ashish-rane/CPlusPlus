#ifndef _Tariff_H_
#define _Tariff_H_

#include "TariffLib.h"

#include <string>
#include <vector>

namespace TariffLib
{
    class Fares;
    class Network;

    class TariffLib_API Tariff
    {
        public:
            Tariff();
            ~Tariff();

            Fares* getFaresAPI() const;
            Network* getNetworkAPI() const;
        
        private:
            Fares* _fares;
            Network* _network;

    };
} // TariffLib

#endif