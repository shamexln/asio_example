
#ifndef MEDIBUS_MESSAGE_HPP
#define MEDIBUS_MESSAGE_HPP

#include <cstdio>
#include <cstdlib>
#include <cstring>

class medibusmessage
{
public:
  enum { header_length = 4 };
  enum { max_body_length = 512 };

  medibusmessage()
    : body_length_(0)
  {
  }

  const char* data() const
  {
    return data_;
  }

  char* data()
  {
    return data_;
  }

  size_t length() const
  {
    return header_length + body_length_;
  }

  const char* body() const
  {
    return data_ + header_length;
  }

  char* body()
  {
    return data_ + header_length;
  }

  size_t body_length() const
  {
    return body_length_;
  }

  void body_length(size_t length)
  {
    body_length_ = length;
    if (body_length_ > max_body_length)
      body_length_ = max_body_length;
  }

  bool  decode_header()
  {
    using namespace std; // For strncat and atoi.
    char header[header_length + 1] = "";
    strncat(header, data_, header_length);
    body_length_ = atoi(header);
    if (body_length_ > max_body_length)
    {
      body_length_ = 0;
      return false;
    }
    return true;
  }

  void encode_header()
  {
    using namespace std; // For sprintf and memcpy.
    char header[header_length + 1] = "";
    sprintf(header, "%4d", body_length_);
    memcpy(data_, header, header_length);
  }

private:
    char data_[header_length + max_body_length] = {'\0'};
  size_t body_length_;
};

#endif 

