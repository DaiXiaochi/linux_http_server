#include <arpa/inet.h>
#include <fcntl.h>
#include <sys/epoll.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <nettd.h>
#include <fmt/format.h>

int main()
{
    struct addrinfo *addrinfo;    // 用于存放ip和端口的结构
    int res = getaddrinfo("127.0.0.1","80",NULL,&addrinfo);
    if(res!=0){
        perror("getaddrinfo");
        return 1;
    }
    string
    fmt::println("{}",addrinfo->ai_family);
    fmt::println("{}",addrinfo->ai_sockettype);
    return 0;
}