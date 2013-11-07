// This autogenerated skeleton file illustrates one way to adapt a synchronous
// interface into an asynchronous interface. You should copy it to another
// filename to avoid overwriting it and rewrite as asynchronous any functions
// that would otherwise introduce unwanted latency.

#include "ThriftTest.h"
#include <thrift/protocol/TBinaryProtocol.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::async;

using boost::shared_ptr;

using namespace  ::thrift::test;

class ThriftTestAsyncHandler : public ThriftTestCobSvIf {
 public:
  ThriftTestAsyncHandler() {
    syncHandler_ = std::auto_ptr<ThriftTestHandler>(new ThriftTestHandler);
    // Your initialization goes here
  }
  virtual ~ThriftTestAsyncHandler();

  void testVoid(tcxx::function<void()> cob) {
    syncHandler_->testVoid();
    return cob();
  }

  void testString(tcxx::function<void(std::string const& _return)> cob, const std::string& thing) {
    std::string _return;
    syncHandler_->testString(_return, thing);
    return cob(_return);
  }

  void testByte(tcxx::function<void(int8_t const& _return)> cob, const int8_t thing) {
    int8_t _return = 0;
    _return = syncHandler_->testByte(thing);
    return cob(_return);
  }

  void testI32(tcxx::function<void(int32_t const& _return)> cob, const int32_t thing) {
    int32_t _return = 0;
    _return = syncHandler_->testI32(thing);
    return cob(_return);
  }

  void testI64(tcxx::function<void(int64_t const& _return)> cob, const int64_t thing) {
    int64_t _return = 0;
    _return = syncHandler_->testI64(thing);
    return cob(_return);
  }

  void testDouble(tcxx::function<void(double const& _return)> cob, const double thing) {
    double _return = (double)0;
    _return = syncHandler_->testDouble(thing);
    return cob(_return);
  }

  void testStruct(tcxx::function<void(Xtruct const& _return)> cob, const Xtruct& thing) {
    Xtruct _return;
    syncHandler_->testStruct(_return, thing);
    return cob(_return);
  }

  void testNest(tcxx::function<void(Xtruct2 const& _return)> cob, const Xtruct2& thing) {
    Xtruct2 _return;
    syncHandler_->testNest(_return, thing);
    return cob(_return);
  }

  void testMap(tcxx::function<void(std::map<int32_t, int32_t>  const& _return)> cob, const std::map<int32_t, int32_t> & thing) {
    std::map<int32_t, int32_t>  _return;
    syncHandler_->testMap(_return, thing);
    return cob(_return);
  }

  void testStringMap(tcxx::function<void(std::map<std::string, std::string>  const& _return)> cob, const std::map<std::string, std::string> & thing) {
    std::map<std::string, std::string>  _return;
    syncHandler_->testStringMap(_return, thing);
    return cob(_return);
  }

  void testSet(tcxx::function<void(std::set<int32_t>  const& _return)> cob, const std::set<int32_t> & thing) {
    std::set<int32_t>  _return;
    syncHandler_->testSet(_return, thing);
    return cob(_return);
  }

  void testList(tcxx::function<void(std::vector<int32_t>  const& _return)> cob, const std::vector<int32_t> & thing) {
    std::vector<int32_t>  _return;
    syncHandler_->testList(_return, thing);
    return cob(_return);
  }

  void testEnum(tcxx::function<void(Numberz::type const& _return)> cob, const Numberz::type thing) {
    Numberz::type _return = (Numberz::type)0;
    _return = syncHandler_->testEnum(thing);
    return cob(_return);
  }

  void testTypedef(tcxx::function<void(UserId const& _return)> cob, const UserId thing) {
    UserId _return = 0;
    _return = syncHandler_->testTypedef(thing);
    return cob(_return);
  }

  void testMapMap(tcxx::function<void(std::map<int32_t, std::map<int32_t, int32_t> >  const& _return)> cob, const int32_t hello) {
    std::map<int32_t, std::map<int32_t, int32_t> >  _return;
    syncHandler_->testMapMap(_return, hello);
    return cob(_return);
  }

  void testInsanity(tcxx::function<void(std::map<UserId, std::map<Numberz::type, Insanity> >  const& _return)> cob, const Insanity& argument) {
    std::map<UserId, std::map<Numberz::type, Insanity> >  _return;
    syncHandler_->testInsanity(_return, argument);
    return cob(_return);
  }

  void testMulti(tcxx::function<void(Xtruct const& _return)> cob, const int8_t arg0, const int32_t arg1, const int64_t arg2, const std::map<int16_t, std::string> & arg3, const Numberz::type arg4, const UserId arg5) {
    Xtruct _return;
    syncHandler_->testMulti(_return, arg0, arg1, arg2, arg3, arg4, arg5);
    return cob(_return);
  }

  void testException(tcxx::function<void()> cob, tcxx::function<void(::apache::thrift::TDelayedException* _throw)> /* exn_cob */, const std::string& arg) {
    syncHandler_->testException(arg);
    return cob();
  }

  void testMultiException(tcxx::function<void(Xtruct const& _return)> cob, tcxx::function<void(::apache::thrift::TDelayedException* _throw)> /* exn_cob */, const std::string& arg0, const std::string& arg1) {
    Xtruct _return;
    syncHandler_->testMultiException(_return, arg0, arg1);
    return cob(_return);
  }

  void testOneway(tcxx::function<void()> cob, const int32_t secondsToSleep) {
    syncHandler_->testOneway(secondsToSleep);
    return cob();
  }

 protected:
  std::auto_ptr<ThriftTestHandler> syncHandler_;
};

