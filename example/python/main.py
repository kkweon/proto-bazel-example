import protos.addressbook_pb2 as addressbook


def main():
    p = addressbook.Person()
    p.name = "Mo Kweon"
    p.id = 1
    p.email = "kkweon@gmail.com"
    phone_number = p.phones.add()
    phone_number.number = "1-123-1234"
    phone_number.type = addressbook.Person.HOME

    print("p = ", p)


if __name__ == "__main__":
    main()
