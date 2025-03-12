#pragma once
#define U8(X) reinterpret_cast<const char*>(X)
#include "../3rdparty/UnityResolve.hpp"
using I = UnityResolve;
using IM = UnityResolve::Method;
using IC = UnityResolve::Class;
using IT = UnityResolve::Type;
using IF = UnityResolve::Field;
using IA = UnityResolve::Assembly;
using II = UnityResolve::UnityType;
class MonoInit
{
public:
	virtual void Init() = 0;
};

