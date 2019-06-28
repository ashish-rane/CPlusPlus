#ifndef __FARES__
#define __FARES__

#include "TariffLib.h"
#include "Fares/FareBO.h"

namespace TariffLib
{
    class TariffLib_API Fares
    {
        public:
            Fares();
            ~Fares();

            float calculateFare(int zL, int zH);

    };    
}; // FaresAPI

#endif