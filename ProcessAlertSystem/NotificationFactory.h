#pragma once

#include "NotificationIntf.h"
#include "NotificationManager.h"
#include <memory>

enum NotificationType
{
	EMAIL = 0,
	SMS
};

class NotificationFactory
{
public:
	NotificationFactory();
	std::shared_ptr<INotification> CreateNotification(NotificationType type);
	~NotificationFactory();
};