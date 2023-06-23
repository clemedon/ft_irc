#ifndef CLIENT_HPP_
#define CLIENT_HPP_

#include <cerrno>    // errno
#include <cstring>   // strerror
#include <iostream>  // cerr, cout
#include <sstream>   // stringstream
#include <string>    // string
#include <vector>    // vector

#include <arpa/inet.h>  // inet_ntoa
#include <netdb.h>  // recv, send, sockaddr, accept, addrinfo, getaddrinfo, socket, setsockopt, bind, freeaddrinfo, listen
#include <poll.h>   // pollfd, poll
#include <stdlib.h>  // exit
#include <unistd.h>  // close

struct Client {
 public:
  Client( std::string name );
  void         setName( std::string const& name );
  std::string& getName( void );

 private:
  std::string _name;
};

#endif  // CLIENT_HPP_