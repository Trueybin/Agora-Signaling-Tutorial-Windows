
// AgoraSignalingutorial.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CAgoraSignalingutorialApp: 
// �йش����ʵ�֣������ AgoraSignalingutorial.cpp
//

class CAgoraSignalingutorialApp : public CWinApp
{
public:
	CAgoraSignalingutorialApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CAgoraSignalingutorialApp theApp;