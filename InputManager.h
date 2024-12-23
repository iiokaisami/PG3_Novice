#pragma once
//#include <windows.h>
//#include <wrl.h>
//using namespace Microsoft::WRL;
//
////Input
//#define DIRECTINPUT_VERSION  0x0800
//#include <dinput.h>
//
//#include "WinApp.h"
//
//class Input
//{
//#pragma region
//private:
//	static Input* instance;
//
//	Input() = default;
//	~Input() = default;
//	Input(Input&) = delete;
//	Input& operator = (Input&) = delete;
//
//public:
//	
//	static Input* GetInstance();
//	
//	void Finalize();
//#pragma endregion 
//
//public:
//
//	template<class T> using ComPtr = Microsoft::WRL::ComPtr<T>;
//
//public:
//
//	void Initialize(WinApp* winApp);
//	
//	void Update();
//
//	bool PushKey(BYTE keyNumber);
//
//	bool TriggerKey(BYTE keyNumber);
//
//private:
//
//	WinApp* winApp_ = nullptr;
//
//	ComPtr<IDirectInput8> directInput;
//
//	ComPtr<IDirectInputDevice8> keyboard = nullptr;
//
//	BYTE key[256] = {};
//	BYTE keyPre[256] = {};
//};

