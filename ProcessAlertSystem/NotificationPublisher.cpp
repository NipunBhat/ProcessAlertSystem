#include "NotificationPublisher.h"

CNotificationPublisher::CNotificationPublisher()
{
	//NOP
}

CNotificationPublisher::~CNotificationPublisher()
{
	//NOP
}

void CNotificationPublisher::Subscribe(std::shared_ptr<INotification> p_pNotification)
{
	vecObservers.push_back(p_pNotification);
}

void CNotificationPublisher::Notify(const std::string& message)
{
	for (int i = 0; i < vecObservers.size(); i++)
	{
		vecObservers[i]->Send(message); //TODO Create an update method that send the message instead of Send directly.
	}
}
