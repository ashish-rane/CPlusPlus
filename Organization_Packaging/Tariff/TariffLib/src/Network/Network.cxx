#include "Network/Network.h"
#include "Network/RouteBO.h"
#include "Network/StopBO.h"
#include "Network/LocationBO.h"

using namespace std;
using namespace TariffLib;

Network::Network()
{

}

Network::~Network()
{
    
}

RouteBO Network::getRoute(int routeId)
{
  RouteBO route(routeId, "Route 1");
  return route;
}

StationBO Network::getStation(int stationId)
{
  StationBO station(stationId, "Station 1");
  return station;
}

StopBO Network::getStop(int stopId)
{
  StopBO stop(stopId, "Stop 1");
  return stop;
}

LocationBO Network::getLocation(int locId)
{
  LocationBO location(locId, "Location 12", 1.1f, 2.2f, 3.3f, 4.4f);
  return location;
}

LocationBO Network::getLocation(int routeId, int stopId, int entrypointId)
{
  LocationBO location(1, "Location 1", 1.0f, 2.0f, 3.0f, 4.0f);
  return location;
}

LocationBO Network::getLocation(int lineId, int stationId)
{
  LocationBO location(2, "Location 2", 5.0f, 6.0f, 7.0f, 8.0f);
  return location;
}
