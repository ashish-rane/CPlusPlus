#include "Fares/FareBO.h"

using namespace std;
using namespace TariffLib;

FareBO::FareBO(float value)
  :_value(value)
{

}

FareBO::~FareBO()
{

}

float FareBO::getValue() const
{
  return _value;
}

