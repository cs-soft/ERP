// UserLogin.cpp : 实现文件
//

#include "stdafx.h"
#include "CSERP.h"
#include "UserLogin.h"
#include "afxdialogex.h"


// CUserLogin 对话框

IMPLEMENT_DYNAMIC(CUserLogin, CDialogEx)

CUserLogin::CUserLogin(CWnd* pParent /*=NULL*/)
	: CDialogEx(CUserLogin::IDD, pParent)
{
#ifndef _WIN32_WCE
	EnableActiveAccessibility();
#endif

	EnableAutomation();

}

CUserLogin::~CUserLogin()
{
}

void CUserLogin::OnFinalRelease()
{
	// 释放了对自动化对象的最后一个引用后，将调用
	// OnFinalRelease。  基类将自动
	// 删除该对象。  在调用该基类之前，请添加您的
	// 对象所需的附加清理代码。

	CDialogEx::OnFinalRelease();
}

void CUserLogin::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CUserLogin, CDialogEx)
END_MESSAGE_MAP()

BEGIN_DISPATCH_MAP(CUserLogin, CDialogEx)
END_DISPATCH_MAP()

// 注意: 我们添加 IID_IUserLogin 支持
//  以支持来自 VBA 的类型安全绑定。  此 IID 必须同附加到 .IDL 文件中的
//  调度接口的 GUID 匹配。

// {AEF50088-D127-4897-BFE3-7C61A4A458E2}
static const IID IID_IUserLogin =
{ 0xAEF50088, 0xD127, 0x4897, { 0xBF, 0xE3, 0x7C, 0x61, 0xA4, 0xA4, 0x58, 0xE2 } };

BEGIN_INTERFACE_MAP(CUserLogin, CDialogEx)
	INTERFACE_PART(CUserLogin, IID_IUserLogin, Dispatch)
END_INTERFACE_MAP()


// CUserLogin 消息处理程序
