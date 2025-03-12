#pragma once
#include <Windows.h>
#include <iostream>
using namespace std;
namespace Module_Unity3D {
	ULONG64 Get_IL2CppModule();
	HMODULE Get_MonoModule();
	HMODULE Get_IL2CppModule_GameAsm();
}