#include "module.h"
#include <cstdio>

void Module::EnableParameter(Parameter parameter)
{
  switch(parameter)
  {
  case Parameter::PARAMETER1:
    EnableParameterByIndex(0);
    break;
  case Parameter::PARAMETER2:
    EnableParameterByIndex(1);
    break;
  case Parameter::PARAMETER3:
    EnableParameterByIndex(2);
    break;
  case Parameter::PARAMETER4:
    EnableParameterByIndex(3);
    break;
  case Parameter::PARAMETER5:
    EnableParameterByIndex(4);
    break;
  case Parameter::PARAMETER6:
    EnableParameterByIndex(5);
    break;
  case Parameter::PARAMETER7:
    EnableParameterByIndex(6);
    break;
  case Parameter::PARAMETER8:
    EnableParameterByIndex(7);
    break;
  case Parameter::PARAMETER9:
    EnableParameterByIndex(8);
    break;
  case Parameter::PARAMETER10:
    EnableParameterByIndex(9);
    break;
  default:
    printf("Wrong parameter number\n");
  }
}

void Module::DisableParameter(Parameter parameter)
{
  switch(parameter)
  {
  case Parameter::PARAMETER1:
    DisableParameterByIndex(0);
    break;
  case Parameter::PARAMETER2:
    DisableParameterByIndex(1);
    break;
  case Parameter::PARAMETER3:
    DisableParameterByIndex(2);
    break;
  case Parameter::PARAMETER4:
    DisableParameterByIndex(3);
    break;
  case Parameter::PARAMETER5:
    DisableParameterByIndex(4);
    break;
  case Parameter::PARAMETER6:
    DisableParameterByIndex(5);
    break;
  case Parameter::PARAMETER7:
    DisableParameterByIndex(6);
    break;
  case Parameter::PARAMETER8:
    DisableParameterByIndex(7);
    break;
  case Parameter::PARAMETER9:
    DisableParameterByIndex(8);
    break;
  case Parameter::PARAMETER10:
    DisableParameterByIndex(9);
    break;
  default:
    printf("Wrong parameter number\n");
  }
}

void Module::SetParameter(Parameter parameter, double value)
{
  switch(parameter)
  {
  case Parameter::PARAMETER1:
    SetParameterByIndex(0, value);
    break;
  case Parameter::PARAMETER2:
    SetParameterByIndex(1, value);
    break;
  case Parameter::PARAMETER3:
    SetParameterByIndex(2, value);
    break;
  case Parameter::PARAMETER4:
    SetParameterByIndex(3, value);
    break;
  case Parameter::PARAMETER5:
    SetParameterByIndex(4, value);
    break;
  case Parameter::PARAMETER6:
    SetParameterByIndex(5, value);
    break;
  case Parameter::PARAMETER7:
    SetParameterByIndex(6, value);
    break;
  case Parameter::PARAMETER8:
    SetParameterByIndex(7, value);
    break;
  case Parameter::PARAMETER9:
    SetParameterByIndex(8, value);
    break;
  case Parameter::PARAMETER10:
    SetParameterByIndex(9, value);
    break;
  default:
    printf("Wrong parameter number\n");
  }
}