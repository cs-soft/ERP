// UserLogin.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "CSERP.h"
#include "UserLogin.h"
#include "afxdialogex.h"


// CUserLogin �Ի���

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
	// �ͷ��˶��Զ�����������һ�����ú󣬽�����
	// OnFinalRelease��  ���ཫ�Զ�
	// ɾ���ö���  �ڵ��øû���֮ǰ�����������
	// ��������ĸ���������롣

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

// ע��: ������� IID_IUserLogin ֧��
//  ��֧������ VBA �����Ͱ�ȫ�󶨡�  �� IID ����ͬ���ӵ� .IDL �ļ��е�
//  ���Ƚӿڵ� GUID ƥ�䡣

// {AEF50088-D127-4897-BFE3-7C61A4A458E2}
static const IID IID_IUserLogin =
{ 0xAEF50088, 0xD127, 0x4897, { 0xBF, 0xE3, 0x7C, 0x61, 0xA4, 0xA4, 0x58, 0xE2 } };

BEGIN_INTERFACE_MAP(CUserLogin, CDialogEx)
	INTERFACE_PART(CUserLogin, IID_IUserLogin, Dispatch)
END_INTERFACE_MAP()


// CUserLogin ��Ϣ�������
