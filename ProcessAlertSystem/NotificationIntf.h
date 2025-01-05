#pragma once

#include <iostream>
#include <string>

class INotification
{
public:
	virtual void Send(const std::string& message) = 0;
	virtual ~INotification() = default;
};