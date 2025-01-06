#pragma once

#include "NotificationIntf.h"
#include "NotificationManager.h"
#include <memory>

enum ENotificationType
{
	EMAIL = 0,
	SMS
};

class CNotificationFactory
{
public:
	CNotificationFactory();
	~CNotificationFactory();

	static std::shared_ptr<INotification> CreateNotification(ENotificationType type);
};