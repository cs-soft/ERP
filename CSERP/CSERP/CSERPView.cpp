
// CSERPView.cpp : CCSERPView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "CSERP.h"
#endif

#include "CSERPDoc.h"
#include "CSERPView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCSERPView

IMPLEMENT_DYNCREATE(CCSERPView, CView)

BEGIN_MESSAGE_MAP(CCSERPView, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CCSERPView ����/����

CCSERPView::CCSERPView()
{
	// TODO:  �ڴ˴���ӹ������

}

CCSERPView::~CCSERPView()
{
}

BOOL CCSERPView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CCSERPView ����

void CCSERPView::OnDraw(CDC* /*pDC*/)
{
	CCSERPDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CCSERPView ��ӡ

BOOL CCSERPView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CCSERPView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CCSERPView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CCSERPView ���

#ifdef _DEBUG
void CCSERPView::AssertValid() const
{
	CView::AssertValid();
}

void CCSERPView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCSERPDoc* CCSERPView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCSERPDoc)));
	return (CCSERPDoc*)m_pDocument;
}
#endif //_DEBUG


// CCSERPView ��Ϣ�������
