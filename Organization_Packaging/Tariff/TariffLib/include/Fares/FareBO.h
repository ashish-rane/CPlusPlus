#ifndef _FareBO_H_
#define _FareBO_H_

#include "TariffLib.h"
#include "Network/LocationBO.h"

#include <string>

namespace TariffLib
{
    class TariffLib_API FareBO
    {
        public:
            FareBO(float value);
            ~FareBO();

            float getValue() const;
            
        private:
            float _value;

    };
};

#endif