#pragma once
#include <windows.h>
#include <wrl.h>
using namespace Microsoft::WRL;

//Input
#define DIRECTINPUT_VERSION  0x0800
#include <dinput.h>

#include "WinApp.h"

class Input
{
#pragma region �V���O���g���C���X�^���X
private:
	static Input* instance;

	Input() = default;
	~Input() = default;
	Input(Input&) = delete;
	Input& operator = (Input&) = delete;

public:
	// �V���O���g���C���X�^���X�̎擾
	static Input* GetInstance();
	// �I��
	void Finalize();
#pragma endregion �V���O���g���C���X�^���X

public:

	// namespace�ȗ�
	template<class T> using ComPtr = Microsoft::WRL::ComPtr<T>;

public:

	// ������
	void Initialize(WinApp* winApp);
	// �X�V
	void Update();

	/// <summary>
	/// �L�[�̉������`�F�b�N
	/// </summary>
	/// <perm name="keyNumber">�L�[�ԍ�( DIK_0 ��)</param>
	///<returns>������Ă��邩</returns>
	bool PushKey(BYTE keyNumber);

	/// <summary>
	/// �L�[�̃g���K�[���`�F�b�N
	/// </summary>
	/// <param name="KeyNumber">�L�[�ԍ�( DIK_0 �� )</param>
	/// <returns>�g���K�[��</returns>
	bool TriggerKey(BYTE keyNumber);

private:

	// WindowsAPI
	WinApp* winApp_ = nullptr;

	// DirectInput�̃C���X�^���X
	ComPtr<IDirectInput8> directInput;

	// �L�[�{�[�h�̃f�o�C�X
	ComPtr<IDirectInputDevice8> keyboard = nullptr;

	// �S�L�[�̏��
	BYTE key[256] = {};
	// �O��̑S�L�[�̏��
	BYTE keyPre[256] = {};
};

