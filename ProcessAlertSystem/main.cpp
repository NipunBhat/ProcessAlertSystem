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
	pNotificationPublisher->Attach(NotificationFactory::CreateNotification(EMAIL));
	pNotificationPublisher->Attach(NotificationFactory::CreateNotification(SMS));

	CProcessMonitor processMonitor(pNotificationPublisher, 75, 80);
	std::thread monitoringThread(&CProcessMonitor::Monitor, &processMonitor);
	monitoringThread.join();

	return 0;
}