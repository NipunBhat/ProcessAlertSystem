#include <string>
#include <thread>
#include <chrono>

#include "ProcessMonitor.h"

CProcessMonitor::CProcessMonitor(std::shared_ptr<INotificationPublisher> publisher, int p_iCPUThreshold, int p_iMemoryThreshold) :
	_notifPublisher(publisher), _iCPUThreshold(p_iCPUThreshold), _iMemoryThreshold(p_iMemoryThreshold)
{
	//NOP
}

void CProcessMonitor::Monitor()
{
	while (true)
	{
		std::string message = "";
		int cpuUsage = _processMetrics.GetCPUUsage();
		int memoryUsage = _processMetrics.GetMemoryUsage();

		if (cpuUsage > _iCPUThreshold)
		{
			message = "CPU Usage Alert! CPU Usage : " + std::to_string(cpuUsage) + "%\n";
			_notifPublisher->Notify(message);
		}

		if (memoryUsage > _iMemoryThreshold)
		{
			message = "CPU Usage Alert! CPU Usage : " + std::to_string(memoryUsage) + "%\n";
			_notifPublisher->Notify(message);
		}

		std::this_thread::sleep_for(std::chrono::seconds(2));
	}
	
}