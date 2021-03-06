/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef EnumTest_TYPES_H
#define EnumTest_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>




struct MyEnum1 {
  enum type {
    ME1_0 = 0,
    ME1_1 = 1,
    ME1_2 = 2,
    ME1_3 = 3,
    ME1_5 = 5,
    ME1_6 = 6
  };
};

extern const std::map<int, const char*> _MyEnum1_VALUES_TO_NAMES;

struct MyEnum2 {
  enum type {
    ME2_0 = 0,
    ME2_1 = 1,
    ME2_2 = 2
  };
};

extern const std::map<int, const char*> _MyEnum2_VALUES_TO_NAMES;

struct MyEnum2_again {
  enum type {
    ME0_1 = 0,
    ME1_1 = 1,
    ME2_1 = 2,
    ME3_1 = 3
  };
};

extern const std::map<int, const char*> _MyEnum2_again_VALUES_TO_NAMES;

struct MyEnum3 {
  enum type {
    ME3_0 = 0,
    ME3_1 = 1,
    ME3_N2 = -2,
    ME3_N1 = -1,
    ME3_D0 = 0,
    ME3_D1 = 1,
    ME3_9 = 9,
    ME3_10 = 10
  };
};

extern const std::map<int, const char*> _MyEnum3_VALUES_TO_NAMES;

struct MyEnum4 {
  enum type {
    ME4_A = 2147483645,
    ME4_B = 2147483646,
    ME4_C = 2147483647
  };
};

extern const std::map<int, const char*> _MyEnum4_VALUES_TO_NAMES;

class MyStruct;

typedef struct _MyStruct__isset {
  _MyStruct__isset() : me2_2(true), me3_n2(true), me3_d1(true) {}
  bool me2_2 :1;
  bool me3_n2 :1;
  bool me3_d1 :1;
} _MyStruct__isset;

class MyStruct {
 public:

  static const char* ascii_fingerprint; // = "CFDB532B5050558FA19C643C996DAD13";
  static const uint8_t binary_fingerprint[16]; // = {0xCF,0xDB,0x53,0x2B,0x50,0x50,0x55,0x8F,0xA1,0x9C,0x64,0x3C,0x99,0x6D,0xAD,0x13};

  MyStruct(const MyStruct&);
  MyStruct& operator=(const MyStruct&);
  MyStruct() : me2_2((MyEnum2::type)2), me3_n2((MyEnum3::type)-2), me3_d1((MyEnum3::type)1) {
    me2_2 = (MyEnum2::type)2;

    me3_n2 = (MyEnum3::type)-2;

    me3_d1 = (MyEnum3::type)1;

  }

  virtual ~MyStruct() throw();
  MyEnum2::type me2_2;
  MyEnum3::type me3_n2;
  MyEnum3::type me3_d1;

  _MyStruct__isset __isset;

  void __set_me2_2(const MyEnum2::type val);

  void __set_me3_n2(const MyEnum3::type val);

  void __set_me3_d1(const MyEnum3::type val);

  bool operator == (const MyStruct & rhs) const
  {
    if (!(me2_2 == rhs.me2_2))
      return false;
    if (!(me3_n2 == rhs.me3_n2))
      return false;
    if (!(me3_d1 == rhs.me3_d1))
      return false;
    return true;
  }
  bool operator != (const MyStruct &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MyStruct & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const MyStruct& obj);
};

void swap(MyStruct &a, MyStruct &b);



#endif
