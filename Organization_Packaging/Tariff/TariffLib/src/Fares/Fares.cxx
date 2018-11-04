#include "Fares/Fares.h"
#include "Fares/FareBO.h"
#include "Network/LocationBO.h"

using namespace std;
using namespace TariffLib;

Fares::Fares()
{

}

Fares::~Fares()
{
    
}

float Fares::calculateFare(int zL, int zH) 
{
  LocationBO loc1(1,"Location 1",  1.0f, 2.0f, 3.0f, 4.0f);
  LocationBO loc2(2, "Location 2", 1.1f, 2.1f, 3.1f, 4.1f);
  FareBO fare(11.25f);
  return fare.getValue();
}
