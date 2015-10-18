
// CSERPView.h : CCSERPView ��Ľӿ�
//

#pragma once


class CCSERPView : public CView
{
protected: // �������л�����
	CCSERPView();
	DECLARE_DYNCREATE(CCSERPView)

// ����
public:
	CCSERPDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CCSERPView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // CSERPView.cpp �еĵ��԰汾
inline CCSERPDoc* CCSERPView::GetDocument() const
   { return reinterpret_cast<CCSERPDoc*>(m_pDocument); }
#endif

