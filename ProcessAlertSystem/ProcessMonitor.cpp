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

		std::cout << "###########################################################\n" << std::endl;

		if (cpuUsage > _iCPUThreshold)
		{
			message = "CPU Usage Alert! CPU Usage : " + std::to_string(cpuUsage) + "%\n";
			_notifPublisher->Notify(message);
		}
		else
		{
			std::cout << "CPU Usage is fine Threshold : " + std::to_string(_iCPUThreshold) + "% ,Used : " +
				std::to_string(cpuUsage) + "%\n" << std::endl;
		}

		if (memoryUsage > _iMemoryThreshold)
		{
			message = "Memory Usage Alert! Memory Usage : " + std::to_string(memoryUsage) + "%\n";
			_notifPublisher->Notify(message);
		}
		else
		{
			std::cout << "Memory Usage is fine Threshold : " + std::to_string(_iMemoryThreshold) + "% ,Used : " +
					std::to_string(memoryUsage) + "%\n" << std::endl;
		}
		std::cout << "###########################################################\n" << std::endl;

		std::this_thread::sleep_for(std::chrono::seconds(2));
	}
	
}