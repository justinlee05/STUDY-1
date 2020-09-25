#include "CMyString.h"
#include <cstring>
#include <iostream>
#pragma warning(disable: 4996)

CMyString::CMyString()
	:m_pszData(nullptr)
	, m_nLength(0)
{
}

CMyString::~CMyString()
{
	delete m_pszData;
}


int CMyString::SetString(const char* pszParam)
{
	if (pszParam == NULL) {

		return 0;
	}

	m_nLength = sizeof(pszParam);
	m_pszData = new char[20];
	strcpy(m_pszData, pszParam);

	return 0;
}


const char* CMyString::GetString()
{
	// TODO: ���⿡ ���� �ڵ� �߰�.
	return m_pszData;
}


void CMyString::Release()
{
	// TODO: ���⿡ ���� �ڵ� �߰�.
	delete m_pszData;
}
