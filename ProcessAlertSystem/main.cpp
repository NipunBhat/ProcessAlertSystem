#include <iostream>
#include <memory>
#include <thread>

#include "ProcessMonitor.h"
#include "NotificationFactory.h"
#include "NotificationManager.h"
#include "NotificationPublisher.h"

int main()
{
	auto pNotificationPublisher = std::make_shared<CNotificationPublisher>();
	pNotificationPublisher->Attach(CNotificationFactory::CreateNotification(EMAIL));
	pNotificationPublisher->Attach(CNotificationFactory::CreateNotification(SMS));

	auto processMonitior =  CProcessMonitor(pNotificationPublisher, 75, 80);
	std::thread monitoringThread(&CProcessMonitor::Monitor, processMonitior);
	monitoringThread.join();

	return 0;
}