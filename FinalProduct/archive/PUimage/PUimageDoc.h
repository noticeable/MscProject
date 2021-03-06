#pragma once

// PUimageDoc.h : interface of the CPUimageDoc class
//


#pragma once
#include "Cvvimage.h"


class CPUimageDoc : public CDocument
{
protected: // create from serialization only
	CPUimageDoc();
	DECLARE_DYNCREATE(CPUimageDoc)

// Attributes
public:
	CvvImage m_image;
	cv::Mat matImg;
	IplImage iplSrcImg;

// Operations
public:
	//BOOL addhelp();
// Overrides
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// Implementation
public:
	virtual ~CPUimageDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// Helper function that sets search content for a Search Handler
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
public:
	virtual BOOL OnOpenDocument(LPCTSTR lpszPathName);
	virtual BOOL OnSaveDocument(LPCTSTR lpszPathName);
	afx_msg void OnFileOpen();
	afx_msg void OnFileSaveAs();
	bool SaveBmp(LPCSTR lpFileName);
	//afx_msg void OnPreviewPreview();
};
