#pragma once

#include "wkb.h"
#include <vector>

class CWKBGeometry
{
	std::vector<unsigned char> m_vecData;
	void IncrementPoints();
	void IncrementRings();
	unsigned long m_nLinearRing;
	unsigned long m_nPolygon;
	unsigned long m_nGeometry;
public:
	CWKBGeometry();
	virtual ~CWKBGeometry();
	void Add(unsigned char* pdata, int nLen);
	void AddPoint(GM_POINT* pPt);
	unsigned char* Data();
	void Parse(const char* pszWKT);
	int Type();
};

