#include "Tariff.h"

#include "Fares/Fares.h"
#include "Network/Network.h"

#include "Fares/FareBO.h"
#include "Network/LocationBO.h"
#include "Network/RouteBO.h"
#include "Network/StationBO.h"
#include "Network/StopBO.h"

#include <iostream>

using namespace std;
using namespace TariffLib;;

void main (int argc, char* argv[])
{
    cout << "Test Client : Tariff Library" << endl;

    Tariff tariff;;

    Fares* fares = tariff.getFaresAPI();
    Network* network = tariff.getNetworkAPI();

    cout << "Fare: " << fares->calculateFare(1, 2) << endl;

    LocationBO loc = network->getLocation(1);
    cout << "Location Id: " << loc.getId() << " , Name : " << loc.getName() << endl;

    RouteBO route = network->getRoute(1);
    cout << "Route Id " << route.getId() << " , Name : " << route.getName() << endl;

    StationBO station = network->getStation(1);
    cout << "Station Id " << station.getId() << " , Name : " << station.getName() << endl;

    StopBO stop = network->getStop(1);
    cout << "Stop Id " << stop.getId() << " , Name : " << stop.getName() << endl;

    char c;
    cin >> c;
}
