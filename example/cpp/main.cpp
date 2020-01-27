#include <iostream>

#include "protos/addressbook.pb.h"

using protos::Person;

int main() {
  Person p;
  p.set_name("Mo Kweon");
  p.set_id(1);
  p.set_email("kkweon@gmail.com");
  auto* phone = p.mutable_phones()->Add();
  phone->set_number("1-1234-5678");
  phone->set_type(protos::Person::MOBILE);

  std::cout << p.DebugString() << std::endl;

  return 0;
}
