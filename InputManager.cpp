#include "InputManager.h"
//
//#include <cassert>
//
//#pragma comment(lib,"dinput8.lib")
//#pragma comment(lib,"dxguid.lib")
//
//
//Input* Input::instance = nullptr;
//
//Input* Input::GetInstance()
//{
//	if (instance == nullptr) {
//		instance = new Input;
//	}
//	return instance;
//}
//
//void Input::Finalize()
//{
//	delete instance;
//	instance = nullptr;
//}
//
//void Input::Initialize(WinApp* winApp)
//{
//	
//	this->winApp_ = winApp;
//
//	HRESULT result; /* = CreateDXGIFactory(IID_PPV_ARGS(&dxgiFactory));*/
//
//	result = DirectInput8Create(winApp_->GetHInstance(), DIRECTINPUT_VERSION, IID_IDirectInput8, (void**)&directInput, nullptr);
//	assert(SUCCEEDED(result));
//
//	
//
//	result = directInput->CreateDevice(GUID_SysKeyboard, &keyboard, NULL);
//	assert(SUCCEEDED(result));
//
//	
//	result = keyboard->SetDataFormat(&c_dfDIKeyboard);
//	assert(SUCCEEDED(result));
//
//	
//	result = keyboard->SetCooperativeLevel(winApp_->GetHwnd(), DISCL_FOREGROUND | DISCL_NONEXCLUSIVE | DISCL_NOWINKEY);
//	assert(SUCCEEDED(result));
//}
//
//void Input::Update()
//{	
//	memcpy(keyPre, key, sizeof(key));
//
//	
//	keyboard->Acquire();
//	
//	keyboard->GetDeviceState(sizeof(key), key);
//}
//
//bool Input::PushKey(BYTE keyNumber)
//{
//	if (key[keyNumber])
//	{
//		return true;
//	}
//
//	return false;
//}
//
//bool Input::TriggerKey(BYTE keyNumber)
//{
//	if (!keyPre[keyNumber] && key[keyNumber])
//	{
//		return true;
//	}
//
//	return false;
//}
