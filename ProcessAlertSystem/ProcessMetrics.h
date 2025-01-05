#pragma once

class CProcessMetrics
{
public:
	CProcessMetrics();
	~CProcessMetrics();

	int GetCPUUsage();
	int GetMemoryUsage();
};