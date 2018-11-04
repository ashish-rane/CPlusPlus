#include "Network/RouteBO.h"

using namespace std;
using namespace TariffLib;

RouteBO::RouteBO(int id, string name)
  :_id(id), _name(name)
{
  
}

RouteBO::~RouteBO()
{

}

int RouteBO::getId() const
{
  return _id;
}

string RouteBO::getName() const
{
  return _name;
}

