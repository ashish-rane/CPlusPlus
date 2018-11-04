#include "Network/LocationBO.h"

using namespace std;
using namespace TariffLib;

LocationBO::LocationBO(int id, string name, float lat, float lon, float latTol, float longTol)
  :_id(id), _name(name),_gpsLatitude(lat), _gpsLongitude(lon),
   _latTolerance(latTol), _longTolerance(longTol)
{

}

LocationBO::~LocationBO()
{

}

int LocationBO::getId() const
{
  return _id;
}

string LocationBO::getName() const
{
  return _name;
}

float LocationBO::getGPSLat() const
{
  return _gpsLatitude;
}

float LocationBO::getGPSLong() const
{
  return _gpsLongitude;
}

float LocationBO::getLatTol() const
{
  return _latTolerance;
}

float LocationBO::getLongTol() const
{
  return _longTolerance;
}
