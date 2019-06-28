#include "Tariff.h"

#include "Fares/Fares.h"
#include "Network/Network.h"

using namespace TariffLib;

Tariff::Tariff()
{
  _fares = new Fares();
  _network = new Network();
}

Tariff::~Tariff()
{
  if (NULL != _fares)
    delete _fares;
  if (NULL != _network)
    delete _network;
}

Fares* Tariff::getFaresAPI() const
{
  return _fares;
}

Network* Tariff::getNetworkAPI() const
{
  return _network;
}
