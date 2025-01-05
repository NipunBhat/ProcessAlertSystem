#pragma once

#include <vector>
#include "NotificationIntf.h"

class INotificationPublisher
{
public:
	INotificationPublisher() = default;
	virtual ~INotificationPublisher() = default;

	virtual void Subscribe(std::shared_ptr<INotification> p_pNotification) = 0;
	virtual void Notify(const std::string& message) = 0;

protected:
	std::vector<std::shared_ptr<INotification>> vecObservers;
};