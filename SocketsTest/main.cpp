//#include <QCoreApplication>
#include<sys/param.h>
#include<sys/socket.h>
#include<sys/types.h>


#include<arpa/inet.h>
#include<linux/if_ether.h>

#include<iostream>

int main(/*int argc, char *argv[]*/)
{
    int soc = socket(PF_PACKET,SOCK_RAW,htons(ETH_P_ALL));
    char buf[1518];





    //QCoreApplication a(argc, argv);

    //return a.exec();
    return 0;
}
