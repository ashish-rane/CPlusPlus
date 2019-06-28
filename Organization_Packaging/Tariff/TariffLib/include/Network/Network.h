#ifndef __NETWORK__
#define __NETWORK__

#include "TariffLib.h"
#include "Network/RouteBO.h"
#include "Network/StationBO.h"
#include "Network/StopBO.h"
#include "Network/LocationBO.h"

namespace TariffLib
{
    class TariffLib_API Network
    {
        public:
            Network();
            ~Network();

            RouteBO getRoute(int routeId);
            StationBO getStation(int stationId);
            StopBO getStop(int stopId);

            LocationBO getLocation(int locId);
            LocationBO getLocation(int routeId, int stopId, int entryPointId);
            LocationBO getLocation(int lineId, int stationId);

            int getZone(int locId);
    };
};

#endif