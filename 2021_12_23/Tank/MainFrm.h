
// MainFrm.h: CMainFrame 类的接口
//

#pragma once
#include"CGame.h"
class CMainFrame : public CFrameWnd
{
	
public:
	CMainFrame() noexcept;
protected: 
	DECLARE_DYNAMIC(CMainFrame)

// 特性
public:

// 操作
public:

// 重写
public:
	//virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	//virtual BOOL OnCmdMsg(UINT nID, int nCode, void* pExtra, AFX_CMDHANDLERINFO* pHandlerInfo);

// 实现
public:
	virtual ~CMainFrame();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

//protected:  // 控件条嵌入成员
//	CToolBar          m_wndToolBar;
//	CChildView    m_wndView;

// 生成的消息映射函数
protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	//afx_msg void OnSetFocus(CWnd *pOldWnd);
	DECLARE_MESSAGE_MAP()

	int m_iWidth{ 800 };
	int m_iHeight{ 600 };
	enum ETimerId { ETimerIdGameLoop = 1 };
	CGame m_game;
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};


