#pragma once

#include "NotificationIntf.h"
#include "NotificationManager.h"
#include "NotificationPublisherIntf.h"
#include "NotificationPublisher.h"
#include "ProcessMetrics.h"

class CProcessMonitor
{
public:
	CProcessMonitor(std::shared_ptr<INotificationPublisher> publisher, int p_iCPUThreshold, int p_iMemoryThreshold);
	~CProcessMonitor() = default;
	void Monitor();

protected:

private:
	CProcessMetrics _processMetrics;
	std::shared_ptr<INotificationPublisher> _notifPublisher;
	int _iCPUThreshold;
	int _iMemoryThreshold;
};