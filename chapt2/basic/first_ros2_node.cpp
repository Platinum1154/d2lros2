#include "rclcpp/rclcpp.hpp"

int main(int argc, char *argv[])
{
    //调用rclcpp的初始化函数
    rclcpp::init(argc,argv);
    //调用rclcpp循环运行我们创建的节点
    rclcpp::spin(std::make_shared<rclcpp::Node>("first_node"));
    std::cout<<"Hello World!"<<std::endl;
    return 0;
}
