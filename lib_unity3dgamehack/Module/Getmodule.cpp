#include "Getmodule.h"

ULONG64 Module_Unity3D::Get_IL2CppModule() {
	return (ULONG64)GetModuleHandleA("GameAssembly.dll");
}

HMODULE Module_Unity3D::Get_MonoModule() {
	return GetModuleHandleA("mono-2.0-bdwgc.dll");
}

HMODULE Module_Unity3D::Get_IL2CppModule_GameAsm() {
	return GetModuleHandleA("GameAssembly.dll");
}
