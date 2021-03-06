/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef SecondService_H
#define SecondService_H

#include <thrift/transport/TBufferTransports.h>
#include <thrift/cxxfunctional.h>
namespace apache { namespace thrift { namespace async {
class TAsyncChannel;
}}}
#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TAsyncDispatchProcessor.h>
#include "ThriftTest_types.h"

namespace thrift { namespace test {

class SecondServiceIf {
 public:
  virtual ~SecondServiceIf() {}
  virtual void blahBlah() = 0;

  /**
   * Prints 'testString("%s")' with thing as '%s'
   * @param string thing - the string to print
   * @return string - returns the string 'thing'
   * 
   * @param thing
   */
  virtual void secondtestString(std::string& _return, const std::string& thing) = 0;
};

class SecondServiceIfFactory {
 public:
  typedef SecondServiceIf Handler;

  virtual ~SecondServiceIfFactory() {}

  virtual SecondServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(SecondServiceIf* /* handler */) = 0;
};

class SecondServiceIfSingletonFactory : virtual public SecondServiceIfFactory {
 public:
  SecondServiceIfSingletonFactory(const boost::shared_ptr<SecondServiceIf>& iface) : iface_(iface) {}
  virtual ~SecondServiceIfSingletonFactory() {}

  virtual SecondServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(SecondServiceIf* /* handler */) {}

 protected:
  boost::shared_ptr<SecondServiceIf> iface_;
};

class SecondServiceNull : virtual public SecondServiceIf {
 public:
  virtual ~SecondServiceNull() {}
  void blahBlah() {
    return;
  }
  void secondtestString(std::string& /* _return */, const std::string& /* thing */) {
    return;
  }
};


class SecondService_blahBlah_args {
 public:

  static const char* ascii_fingerprint; // = "99914B932BD37A50B983C5E7C90AE93B";
  static const uint8_t binary_fingerprint[16]; // = {0x99,0x91,0x4B,0x93,0x2B,0xD3,0x7A,0x50,0xB9,0x83,0xC5,0xE7,0xC9,0x0A,0xE9,0x3B};

  SecondService_blahBlah_args(const SecondService_blahBlah_args&);
  SecondService_blahBlah_args& operator=(const SecondService_blahBlah_args&);
  SecondService_blahBlah_args() {
  }

  virtual ~SecondService_blahBlah_args() throw();

  bool operator == (const SecondService_blahBlah_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const SecondService_blahBlah_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SecondService_blahBlah_args & ) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t write(Protocol_* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const SecondService_blahBlah_args& obj);
};


class SecondService_blahBlah_pargs {
 public:

  static const char* ascii_fingerprint; // = "99914B932BD37A50B983C5E7C90AE93B";
  static const uint8_t binary_fingerprint[16]; // = {0x99,0x91,0x4B,0x93,0x2B,0xD3,0x7A,0x50,0xB9,0x83,0xC5,0xE7,0xC9,0x0A,0xE9,0x3B};


  virtual ~SecondService_blahBlah_pargs() throw();

  template <class Protocol_>
  uint32_t write(Protocol_* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const SecondService_blahBlah_pargs& obj);
};


class SecondService_blahBlah_result {
 public:

  static const char* ascii_fingerprint; // = "99914B932BD37A50B983C5E7C90AE93B";
  static const uint8_t binary_fingerprint[16]; // = {0x99,0x91,0x4B,0x93,0x2B,0xD3,0x7A,0x50,0xB9,0x83,0xC5,0xE7,0xC9,0x0A,0xE9,0x3B};

  SecondService_blahBlah_result(const SecondService_blahBlah_result&);
  SecondService_blahBlah_result& operator=(const SecondService_blahBlah_result&);
  SecondService_blahBlah_result() {
  }

  virtual ~SecondService_blahBlah_result() throw();

  bool operator == (const SecondService_blahBlah_result & /* rhs */) const
  {
    return true;
  }
  bool operator != (const SecondService_blahBlah_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SecondService_blahBlah_result & ) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t write(Protocol_* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const SecondService_blahBlah_result& obj);
};


class SecondService_blahBlah_presult {
 public:

  static const char* ascii_fingerprint; // = "99914B932BD37A50B983C5E7C90AE93B";
  static const uint8_t binary_fingerprint[16]; // = {0x99,0x91,0x4B,0x93,0x2B,0xD3,0x7A,0x50,0xB9,0x83,0xC5,0xE7,0xC9,0x0A,0xE9,0x3B};


  virtual ~SecondService_blahBlah_presult() throw();

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t write(Protocol_* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const SecondService_blahBlah_presult& obj);
};

typedef struct _SecondService_secondtestString_args__isset {
  _SecondService_secondtestString_args__isset() : thing(false) {}
  bool thing :1;
} _SecondService_secondtestString_args__isset;

class SecondService_secondtestString_args {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  SecondService_secondtestString_args(const SecondService_secondtestString_args&);
  SecondService_secondtestString_args& operator=(const SecondService_secondtestString_args&);
  SecondService_secondtestString_args() : thing() {
  }

  virtual ~SecondService_secondtestString_args() throw();
  std::string thing;

  _SecondService_secondtestString_args__isset __isset;

  void __set_thing(const std::string& val);

  bool operator == (const SecondService_secondtestString_args & rhs) const
  {
    if (!(thing == rhs.thing))
      return false;
    return true;
  }
  bool operator != (const SecondService_secondtestString_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SecondService_secondtestString_args & ) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t write(Protocol_* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const SecondService_secondtestString_args& obj);
};


class SecondService_secondtestString_pargs {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};


  virtual ~SecondService_secondtestString_pargs() throw();
  const std::string* thing;

  template <class Protocol_>
  uint32_t write(Protocol_* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const SecondService_secondtestString_pargs& obj);
};

typedef struct _SecondService_secondtestString_result__isset {
  _SecondService_secondtestString_result__isset() : success(false) {}
  bool success :1;
} _SecondService_secondtestString_result__isset;

class SecondService_secondtestString_result {
 public:

  static const char* ascii_fingerprint; // = "9A73381FEFD6B67F432E717102246330";
  static const uint8_t binary_fingerprint[16]; // = {0x9A,0x73,0x38,0x1F,0xEF,0xD6,0xB6,0x7F,0x43,0x2E,0x71,0x71,0x02,0x24,0x63,0x30};

  SecondService_secondtestString_result(const SecondService_secondtestString_result&);
  SecondService_secondtestString_result& operator=(const SecondService_secondtestString_result&);
  SecondService_secondtestString_result() : success() {
  }

  virtual ~SecondService_secondtestString_result() throw();
  std::string success;

  _SecondService_secondtestString_result__isset __isset;

  void __set_success(const std::string& val);

  bool operator == (const SecondService_secondtestString_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const SecondService_secondtestString_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SecondService_secondtestString_result & ) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t write(Protocol_* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const SecondService_secondtestString_result& obj);
};

typedef struct _SecondService_secondtestString_presult__isset {
  _SecondService_secondtestString_presult__isset() : success(false) {}
  bool success :1;
} _SecondService_secondtestString_presult__isset;

class SecondService_secondtestString_presult {
 public:

  static const char* ascii_fingerprint; // = "9A73381FEFD6B67F432E717102246330";
  static const uint8_t binary_fingerprint[16]; // = {0x9A,0x73,0x38,0x1F,0xEF,0xD6,0xB6,0x7F,0x43,0x2E,0x71,0x71,0x02,0x24,0x63,0x30};


  virtual ~SecondService_secondtestString_presult() throw();
  std::string* success;

  _SecondService_secondtestString_presult__isset __isset;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t write(Protocol_* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const SecondService_secondtestString_presult& obj);
};

template <class Protocol_>
class SecondServiceClientT : virtual public SecondServiceIf {
 public:
  SecondServiceClientT(boost::shared_ptr< Protocol_> prot) {
    setProtocolT(prot);
  }
  SecondServiceClientT(boost::shared_ptr< Protocol_> iprot, boost::shared_ptr< Protocol_> oprot) {
    setProtocolT(iprot,oprot);
  }
 private:
  void setProtocolT(boost::shared_ptr< Protocol_> prot) {
  setProtocolT(prot,prot);
  }
  void setProtocolT(boost::shared_ptr< Protocol_> iprot, boost::shared_ptr< Protocol_> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return this->piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return this->poprot_;
  }
  void blahBlah();
  void send_blahBlah();
  void recv_blahBlah();
  void secondtestString(std::string& _return, const std::string& thing);
  void send_secondtestString(const std::string& thing);
  void recv_secondtestString(std::string& _return);
 protected:
  boost::shared_ptr< Protocol_> piprot_;
  boost::shared_ptr< Protocol_> poprot_;
  Protocol_* iprot_;
  Protocol_* oprot_;
};

typedef SecondServiceClientT< ::apache::thrift::protocol::TProtocol> SecondServiceClient;

template <class Protocol_>
class SecondServiceProcessorT : public ::apache::thrift::TDispatchProcessorT<Protocol_> {
 protected:
  boost::shared_ptr<SecondServiceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
  virtual bool dispatchCallTemplated(Protocol_* iprot, Protocol_* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (SecondServiceProcessorT::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef void (SecondServiceProcessorT::*SpecializedProcessFunction)(int32_t, Protocol_*, Protocol_*, void*);
  struct ProcessFunctions {
    ProcessFunction generic;
    SpecializedProcessFunction specialized;
    ProcessFunctions(ProcessFunction g, SpecializedProcessFunction s) :
      generic(g),
      specialized(s) {}
    ProcessFunctions() : generic(NULL), specialized(NULL) {}
  };
  typedef std::map<std::string, ProcessFunctions> ProcessMap;
  ProcessMap processMap_;
  void process_blahBlah(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_blahBlah(int32_t seqid, Protocol_* iprot, Protocol_* oprot, void* callContext);
  void process_secondtestString(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_secondtestString(int32_t seqid, Protocol_* iprot, Protocol_* oprot, void* callContext);
 public:
  SecondServiceProcessorT(boost::shared_ptr<SecondServiceIf> iface) :
    iface_(iface) {
    processMap_["blahBlah"] = ProcessFunctions(
      &SecondServiceProcessorT::process_blahBlah,
      &SecondServiceProcessorT::process_blahBlah);
    processMap_["secondtestString"] = ProcessFunctions(
      &SecondServiceProcessorT::process_secondtestString,
      &SecondServiceProcessorT::process_secondtestString);
  }

  virtual ~SecondServiceProcessorT() {}
};

typedef SecondServiceProcessorT< ::apache::thrift::protocol::TDummyProtocol > SecondServiceProcessor;

template <class Protocol_>
class SecondServiceProcessorFactoryT : public ::apache::thrift::TProcessorFactory {
 public:
  SecondServiceProcessorFactoryT(const ::boost::shared_ptr< SecondServiceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< SecondServiceIfFactory > handlerFactory_;
};

typedef SecondServiceProcessorFactoryT< ::apache::thrift::protocol::TDummyProtocol > SecondServiceProcessorFactory;

class SecondServiceMultiface : virtual public SecondServiceIf {
 public:
  SecondServiceMultiface(std::vector<boost::shared_ptr<SecondServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~SecondServiceMultiface() {}
 protected:
  std::vector<boost::shared_ptr<SecondServiceIf> > ifaces_;
  SecondServiceMultiface() {}
  void add(boost::shared_ptr<SecondServiceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void blahBlah() {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->blahBlah();
    }
    ifaces_[i]->blahBlah();
  }

  void secondtestString(std::string& _return, const std::string& thing) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->secondtestString(_return, thing);
    }
    ifaces_[i]->secondtestString(_return, thing);
    return;
  }

};

template <class Protocol_>
class SecondServiceCobClientT;

template <class Protocol_>
class SecondServiceCobClIfT {
 public:
  virtual ~SecondServiceCobClIfT() {}
  virtual void blahBlah(tcxx::function<void(SecondServiceCobClientT<Protocol_>* client)> cob) = 0;

  /**
   * Prints 'testString("%s")' with thing as '%s'
   * @param string thing - the string to print
   * @return string - returns the string 'thing'
   * 
   * @param thing
   */
  virtual void secondtestString(tcxx::function<void(SecondServiceCobClientT<Protocol_>* client)> cob, const std::string& thing) = 0;
};

typedef SecondServiceCobClIfT< ::apache::thrift::protocol::TProtocol> SecondServiceCobClIf;

class SecondServiceCobSvIf {
 public:
  virtual ~SecondServiceCobSvIf() {}
  virtual void blahBlah(tcxx::function<void()> cob) = 0;

  /**
   * Prints 'testString("%s")' with thing as '%s'
   * @param string thing - the string to print
   * @return string - returns the string 'thing'
   * 
   * @param thing
   */
  virtual void secondtestString(tcxx::function<void(std::string const& _return)> cob, const std::string& thing) = 0;
};

class SecondServiceCobSvIfFactory {
 public:
  typedef SecondServiceCobSvIf Handler;

  virtual ~SecondServiceCobSvIfFactory() {}

  virtual SecondServiceCobSvIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(SecondServiceCobSvIf* /* handler */) = 0;
};

class SecondServiceCobSvIfSingletonFactory : virtual public SecondServiceCobSvIfFactory {
 public:
  SecondServiceCobSvIfSingletonFactory(const boost::shared_ptr<SecondServiceCobSvIf>& iface) : iface_(iface) {}
  virtual ~SecondServiceCobSvIfSingletonFactory() {}

  virtual SecondServiceCobSvIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(SecondServiceCobSvIf* /* handler */) {}

 protected:
  boost::shared_ptr<SecondServiceCobSvIf> iface_;
};

class SecondServiceCobSvNull : virtual public SecondServiceCobSvIf {
 public:
  virtual ~SecondServiceCobSvNull() {}
  void blahBlah(tcxx::function<void()> cob) {
    return cob();
  }
  void secondtestString(tcxx::function<void(std::string const& _return)> cob, const std::string& /* thing */) {
    std::string _return;
    return cob(_return);
  }
};

template <class Protocol_>
class SecondServiceCobClientT : virtual public SecondServiceCobClIfT<Protocol_> {
 public:
  SecondServiceCobClientT(boost::shared_ptr< ::apache::thrift::async::TAsyncChannel> channel, ::apache::thrift::protocol::TProtocolFactory* protocolFactory) :
    channel_(channel),
    itrans_(new ::apache::thrift::transport::TMemoryBuffer()),
    otrans_(new ::apache::thrift::transport::TMemoryBuffer()),
    piprot_(boost::dynamic_pointer_cast<Protocol_>(protocolFactory->getProtocol(itrans_))),
    poprot_(boost::dynamic_pointer_cast<Protocol_>(protocolFactory->getProtocol(otrans_))) {
    if (!piprot_ || !poprot_) {
      throw ::apache::thrift::TException("TProtocolFactory returned unexpected protocol type in SecondServiceCobClientT constructor");
    }
    iprot_ = piprot_.get();
    oprot_ = poprot_.get();
  }
  boost::shared_ptr< ::apache::thrift::async::TAsyncChannel> getChannel() {
    return this->channel_;
  }
  virtual void completed__(bool /* success */) {}
  void blahBlah(tcxx::function<void(SecondServiceCobClientT<Protocol_>* client)> cob);
  void send_blahBlah();
  void recv_blahBlah();
  void secondtestString(tcxx::function<void(SecondServiceCobClientT<Protocol_>* client)> cob, const std::string& thing);
  void send_secondtestString(const std::string& thing);
  void recv_secondtestString(std::string& _return);
 protected:
  boost::shared_ptr< ::apache::thrift::async::TAsyncChannel> channel_;
  boost::shared_ptr< ::apache::thrift::transport::TMemoryBuffer> itrans_;
  boost::shared_ptr< ::apache::thrift::transport::TMemoryBuffer> otrans_;
  boost::shared_ptr< Protocol_> piprot_;
  boost::shared_ptr< Protocol_> poprot_;
  Protocol_* iprot_;
  Protocol_* oprot_;
};

typedef SecondServiceCobClientT< ::apache::thrift::protocol::TProtocol> SecondServiceCobClient;

template <class Protocol_>
class SecondServiceAsyncProcessorT : public ::apache::thrift::async::TAsyncDispatchProcessorT<Protocol_> {
 protected:
  boost::shared_ptr<SecondServiceCobSvIf> iface_;
  virtual void dispatchCall(tcxx::function<void(bool ok)> cob, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid);
  virtual void dispatchCallTemplated(tcxx::function<void(bool ok)> cob, Protocol_* iprot, Protocol_* oprot, const std::string& fname, int32_t seqid);
 private:
  typedef  void (SecondServiceAsyncProcessorT::*ProcessFunction)(tcxx::function<void(bool ok)>, int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*);
  typedef void (SecondServiceAsyncProcessorT::*SpecializedProcessFunction)(tcxx::function<void(bool ok)>, int32_t, Protocol_*, Protocol_*);
  struct ProcessFunctions {
    ProcessFunction generic;
    SpecializedProcessFunction specialized;
    ProcessFunctions(ProcessFunction g, SpecializedProcessFunction s) :
      generic(g),
      specialized(s) {}
    ProcessFunctions() : generic(NULL), specialized(NULL) {}
  };
  typedef std::map<std::string, ProcessFunctions> ProcessMap;
  ProcessMap processMap_;
  void process_blahBlah(tcxx::function<void(bool ok)> cob, int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot);
  void process_blahBlah(tcxx::function<void(bool ok)> cob, int32_t seqid, Protocol_* iprot, Protocol_* oprot);
  void return_blahBlah(tcxx::function<void(bool ok)> cob, int32_t seqid, ::apache::thrift::protocol::TProtocol* oprot, void* ctx);
  void return_blahBlah(tcxx::function<void(bool ok)> cob, int32_t seqid, Protocol_* oprot, void* ctx);
  void throw_blahBlah(tcxx::function<void(bool ok)> cob, int32_t seqid, ::apache::thrift::protocol::TProtocol* oprot, void* ctx, ::apache::thrift::TDelayedException* _throw);
  void throw_blahBlah(tcxx::function<void(bool ok)> cob, int32_t seqid, Protocol_* oprot, void* ctx, ::apache::thrift::TDelayedException* _throw);
  void process_secondtestString(tcxx::function<void(bool ok)> cob, int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot);
  void process_secondtestString(tcxx::function<void(bool ok)> cob, int32_t seqid, Protocol_* iprot, Protocol_* oprot);
  void return_secondtestString(tcxx::function<void(bool ok)> cob, int32_t seqid, ::apache::thrift::protocol::TProtocol* oprot, void* ctx, const std::string& _return);
  void return_secondtestString(tcxx::function<void(bool ok)> cob, int32_t seqid, Protocol_* oprot, void* ctx, const std::string& _return);
  void throw_secondtestString(tcxx::function<void(bool ok)> cob, int32_t seqid, ::apache::thrift::protocol::TProtocol* oprot, void* ctx, ::apache::thrift::TDelayedException* _throw);
  void throw_secondtestString(tcxx::function<void(bool ok)> cob, int32_t seqid, Protocol_* oprot, void* ctx, ::apache::thrift::TDelayedException* _throw);
 public:
  SecondServiceAsyncProcessorT(boost::shared_ptr<SecondServiceCobSvIf> iface) :
    iface_(iface) {
    processMap_["blahBlah"] = ProcessFunctions(
      &SecondServiceAsyncProcessorT::process_blahBlah,
      &SecondServiceAsyncProcessorT::process_blahBlah);
    processMap_["secondtestString"] = ProcessFunctions(
      &SecondServiceAsyncProcessorT::process_secondtestString,
      &SecondServiceAsyncProcessorT::process_secondtestString);
  }

  virtual ~SecondServiceAsyncProcessorT() {}
};

typedef SecondServiceAsyncProcessorT< ::apache::thrift::protocol::TDummyProtocol > SecondServiceAsyncProcessor;

template <class Protocol_>
class SecondServiceAsyncProcessorFactoryT : public ::apache::thrift::async::TAsyncProcessorFactory {
 public:
  SecondServiceAsyncProcessorFactoryT(const ::boost::shared_ptr< SecondServiceCobSvIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::async::TAsyncProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< SecondServiceCobSvIfFactory > handlerFactory_;
};

typedef SecondServiceAsyncProcessorFactoryT< ::apache::thrift::protocol::TDummyProtocol > SecondServiceAsyncProcessorFactory;

}} // namespace

#include "SecondService.tcc"
#include "ThriftTest_types.tcc"

#endif
