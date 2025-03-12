#include "MonoInit.h"
#include "../Module/Getmodule.h"
void MonoInit::Init() 
{
	HMODULE mono_module = Module_Unity3D::Get_MonoModule();
	if (!mono_module) {
		return;
	}
	else {
		I::Init(mono_module, I::Mode::Mono);
		I::ThreadAttach();
		OutputDebugStringA("Mono is Initializated Successfully");
	}
}