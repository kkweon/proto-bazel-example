# Protocol Buffer(v3) + Bazel example

The current project structure looks like this:

```shell
.
├── README.md
├── WORKSPACE
├── example
│   ├── cpp
│   │   ├── BUILD
│   │   └── main.cpp --> depends on protos/addressbook.proto
│   └── python
│       ├── BUILD
│       └── main.py  --> depends on protos/addressbook.proto
└── protos
    ├── BUILD
    └── addressbook.proto
```

One can run a python script as in the following

```shell
bazel run //example/cpp:main    # for C++
bazel run //example/python:main # for Python
```

