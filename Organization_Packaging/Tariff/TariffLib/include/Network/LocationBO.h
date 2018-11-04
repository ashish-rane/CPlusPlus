#ifndef __LocationBO_H__
#define __LocationBO_H__

#include "TariffLib.h"

#include <string>

namespace TariffLib
{
    class TariffLib_API LocationBO
    {
        public:
            LocationBO(int id, std::string, float, float, float, float );
            ~LocationBO();

            int getId() const;
            std::string getName() const;
            float getGPSLat() const;
            float getGPSLong() const;
            float getLatTol() const;
            float getLongTol() const;
        
        private:
            int _id;
            std::string _name;
            float _gpsLatitude;
            float _gpsLongitude;
            float _latTolerance;
            float _longTolerance;
    };
} ;


#endif