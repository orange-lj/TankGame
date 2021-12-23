
// MainFrm.cpp: CMainFrame 类的实现
//

#include "pch.h"
#include "framework.h"
#include "Tank.h"

#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMainFrame
#define GAME_WIN_W (800)
#define GAME_WIN_H (600)

IMPLEMENT_DYNAMIC(CMainFrame, CFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
	ON_WM_CREATE()
END_MESSAGE_MAP()

// CMainFrame 构造/析构

CMainFrame::CMainFrame() noexcept
{
#define MY_STYLE (WS_OVERLAPPED|WS_CAPTION|WS_SYSMENU|WS_MINIMIZEBOX|FWS_ADDTOTITLE)
	// TODO: 在此添加成员初始化代码
	//创建窗口
	Create(NULL, _T("坦克大战"), MY_STYLE, CRect(0, 0, GAME_WIN_W, GAME_WIN_H));
	//设置客户区大小
	{
		CRect rcCli;
		GetClientRect(rcCli);
		RECT rcFrame = { 0,0,m_iWidth + m_iWidth - rcCli.right,m_iHeight + m_iHeight - rcCli.bottom };
		//调用windowsAPI设置窗口位置和大小
		MoveWindow(&rcFrame, TRUE);

	}

}

CMainFrame::~CMainFrame()
{
}

int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CFrameWnd::OnCreate(lpCreateStruct) == -1)
		return -1;

	return 0;
}


// CMainFrame 诊断

#ifdef _DEBUG
void CMainFrame::AssertValid() const
{
	CFrameWnd::AssertValid();
}

void CMainFrame::Dump(CDumpContext& dc) const
{
	CFrameWnd::Dump(dc);
}
#endif //_DEBUG



