#pragma once

#include "NotificationPublisherIntf.h"

class CNotificationPublisher : public INotificationPublisher
{
public:
	CNotificationPublisher();
	~CNotificationPublisher();
	void Subscribe(std::shared_ptr<INotification> p_pNotification) override;
	void Notify(const std::string& message) override;
};