#include "Network/StopBO.h"

using namespace std;
using namespace TariffLib;

StopBO::StopBO(int id, string name)
  :_id(id), _name(name)
{

}

StopBO::~StopBO()
{

}

int StopBO::getId() const
{
  return _id;
}

string StopBO::getName() const
{
  return _name;
}

