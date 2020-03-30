
// ffplay_MFCDlg.h: 头文件
//

#pragma once


// CffplayMFCDlg 对话框
class CffplayMFCDlg : public CDialogEx
{
// 构造
public:
	CffplayMFCDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FFPLAY_MFC_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持

public:
	CWinThread *pThreadPlay;
	CString m_sourceFile;

	CRect m_rect_open_btn;

	bool m_stop;

// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnStart();
	CSliderCtrl m_playprogress;
	CEdit m_currentclock;
	CEdit m_duration;
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
