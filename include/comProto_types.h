/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef comProto_TYPES_H
#define comProto_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>


namespace comProto {

class result;

class execWParms;

class file;

class directory;

typedef struct _result__isset {
  _result__isset() : stdOut(false), stdErr(false), error(false) {}
  bool stdOut :1;
  bool stdErr :1;
  bool error :1;
} _result__isset;

class result {
 public:

  static const char* ascii_fingerprint; // = "343DA57F446177400B333DC49B037B0C";
  static const uint8_t binary_fingerprint[16]; // = {0x34,0x3D,0xA5,0x7F,0x44,0x61,0x77,0x40,0x0B,0x33,0x3D,0xC4,0x9B,0x03,0x7B,0x0C};

  result(const result&);
  result& operator=(const result&);
  result() : stdOut(), stdErr(), error(0) {
  }

  virtual ~result() throw();
  std::string stdOut;
  std::string stdErr;
  int32_t error;

  _result__isset __isset;

  void __set_stdOut(const std::string& val);

  void __set_stdErr(const std::string& val);

  void __set_error(const int32_t val);

  bool operator == (const result & rhs) const
  {
    if (!(stdOut == rhs.stdOut))
      return false;
    if (!(stdErr == rhs.stdErr))
      return false;
    if (!(error == rhs.error))
      return false;
    return true;
  }
  bool operator != (const result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const result& obj);
};

void swap(result &a, result &b);

typedef struct _execWParms__isset {
  _execWParms__isset() : command(false), parms(false) {}
  bool command :1;
  bool parms :1;
} _execWParms__isset;

class execWParms {
 public:

  static const char* ascii_fingerprint; // = "25702B8D5E28AA39160F267DABBC8446";
  static const uint8_t binary_fingerprint[16]; // = {0x25,0x70,0x2B,0x8D,0x5E,0x28,0xAA,0x39,0x16,0x0F,0x26,0x7D,0xAB,0xBC,0x84,0x46};

  execWParms(const execWParms&);
  execWParms& operator=(const execWParms&);
  execWParms() : command() {
  }

  virtual ~execWParms() throw();
  std::string command;
  std::vector<std::string>  parms;

  _execWParms__isset __isset;

  void __set_command(const std::string& val);

  void __set_parms(const std::vector<std::string> & val);

  bool operator == (const execWParms & rhs) const
  {
    if (!(command == rhs.command))
      return false;
    if (!(parms == rhs.parms))
      return false;
    return true;
  }
  bool operator != (const execWParms &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const execWParms & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const execWParms& obj);
};

void swap(execWParms &a, execWParms &b);

typedef struct _file__isset {
  _file__isset() : name(false), size(true), modifiedDate(true), owner(true), group(true) {}
  bool name :1;
  bool size :1;
  bool modifiedDate :1;
  bool owner :1;
  bool group :1;
} _file__isset;

class file {
 public:

  static const char* ascii_fingerprint; // = "521630BE76FEB961F68CE4B94CFCD5BA";
  static const uint8_t binary_fingerprint[16]; // = {0x52,0x16,0x30,0xBE,0x76,0xFE,0xB9,0x61,0xF6,0x8C,0xE4,0xB9,0x4C,0xFC,0xD5,0xBA};

  file(const file&);
  file& operator=(const file&);
  file() : name(), size(-1), modifiedDate(""), owner(""), group("") {
  }

  virtual ~file() throw();
  std::string name;
  double size;
  std::string modifiedDate;
  std::string owner;
  std::string group;

  _file__isset __isset;

  void __set_name(const std::string& val);

  void __set_size(const double val);

  void __set_modifiedDate(const std::string& val);

  void __set_owner(const std::string& val);

  void __set_group(const std::string& val);

  bool operator == (const file & rhs) const
  {
    if (!(name == rhs.name))
      return false;
    if (!(size == rhs.size))
      return false;
    if (!(modifiedDate == rhs.modifiedDate))
      return false;
    if (!(owner == rhs.owner))
      return false;
    if (!(group == rhs.group))
      return false;
    return true;
  }
  bool operator != (const file &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const file & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const file& obj);
};

void swap(file &a, file &b);

typedef struct _directory__isset {
  _directory__isset() : files(true), dirName(false) {}
  bool files :1;
  bool dirName :1;
} _directory__isset;

class directory {
 public:

  static const char* ascii_fingerprint; // = "612D3B88C964B993BBDF5DA7848FAFD4";
  static const uint8_t binary_fingerprint[16]; // = {0x61,0x2D,0x3B,0x88,0xC9,0x64,0xB9,0x93,0xBB,0xDF,0x5D,0xA7,0x84,0x8F,0xAF,0xD4};

  directory(const directory&);
  directory& operator=(const directory&);
  directory() {

  }

  virtual ~directory() throw();
  std::vector<file>  files;
  file dirName;

  _directory__isset __isset;

  void __set_files(const std::vector<file> & val);

  void __set_dirName(const file& val);

  bool operator == (const directory & rhs) const
  {
    if (!(files == rhs.files))
      return false;
    if (!(dirName == rhs.dirName))
      return false;
    return true;
  }
  bool operator != (const directory &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const directory & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const directory& obj);
};

void swap(directory &a, directory &b);

} // namespace

#endif
