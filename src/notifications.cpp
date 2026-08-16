#include <string>
using namespace std;

struct Notification
{
  string title;
  string message;
  bool unread;
};

bool hasUnreadNotification(const Notification &notification)
{
  return notification.unread;
}

/// handling notification bell ---INProgress
void markAsRead(Notification &notification)
{
  notification.unread = false;
}

string notificationLabel(const Notification &notification)
{
  if (notification.unread)
  {
    return "[NEW] " + notification.title;
  }

  return notification.title;
}