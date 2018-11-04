#include "Network/StationBO.h"

using namespace std;
using namespace TariffLib;

StationBO::StationBO(int id, string name)
  :_id(id), _name(name)
{

}

StationBO::~StationBO()
{

}

int StationBO::getId() const
{
  return _id;
}

string StationBO::getName() const
{
  return _name;
}

