#include "ProcessMetrics.h"
#include <random>

CProcessMetrics::CProcessMetrics()
{
	//NOP
}

CProcessMetrics::~CProcessMetrics()
{
	//NOP
}

int CProcessMetrics::GetCPUUsage()
{
	return rand() % 100;
}

int CProcessMetrics::GetMemoryUsage()
{
	return rand() % 100;
}