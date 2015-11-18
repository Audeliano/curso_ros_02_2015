#include "ros/ros.h"
#include "std_msgs/String.h"

void conversaCallback(const std_msgs::String::ConstPtr& msg)
{
	ROS_INFO("Mensagem recebida: [%s]", msg->data.c_str());
}

int main(int argc, char **argv)
{
	ros::init(argc, argv, "receptor");

	ros::NodeHandle n;

	ros::Subscriber conversa_sub = n.subscribe("conversa", 1000, conversaCallback);

	ros::spin();

return 0;
}






