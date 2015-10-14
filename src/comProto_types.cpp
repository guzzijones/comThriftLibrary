/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "comProto_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace comProto {


result::~result() throw() {
}


void result::__set_stdOut(const std::string& val) {
  this->stdOut = val;
}

void result::__set_stdErr(const std::string& val) {
  this->stdErr = val;
}

void result::__set_error(const int32_t val) {
  this->error = val;
}

const char* result::ascii_fingerprint = "343DA57F446177400B333DC49B037B0C";
const uint8_t result::binary_fingerprint[16] = {0x34,0x3D,0xA5,0x7F,0x44,0x61,0x77,0x40,0x0B,0x33,0x3D,0xC4,0x9B,0x03,0x7B,0x0C};

uint32_t result::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->stdOut);
          this->__isset.stdOut = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->stdErr);
          this->__isset.stdErr = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->error);
          this->__isset.error = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t result::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("result");

  xfer += oprot->writeFieldBegin("stdOut", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->stdOut);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("stdErr", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->stdErr);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("error", ::apache::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32(this->error);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(result &a, result &b) {
  using ::std::swap;
  swap(a.stdOut, b.stdOut);
  swap(a.stdErr, b.stdErr);
  swap(a.error, b.error);
  swap(a.__isset, b.__isset);
}

result::result(const result& other0) {
  stdOut = other0.stdOut;
  stdErr = other0.stdErr;
  error = other0.error;
  __isset = other0.__isset;
}
result& result::operator=(const result& other1) {
  stdOut = other1.stdOut;
  stdErr = other1.stdErr;
  error = other1.error;
  __isset = other1.__isset;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const result& obj) {
  using apache::thrift::to_string;
  out << "result(";
  out << "stdOut=" << to_string(obj.stdOut);
  out << ", " << "stdErr=" << to_string(obj.stdErr);
  out << ", " << "error=" << to_string(obj.error);
  out << ")";
  return out;
}


execWParms::~execWParms() throw() {
}


void execWParms::__set_command(const std::string& val) {
  this->command = val;
}

void execWParms::__set_parms(const std::vector<std::string> & val) {
  this->parms = val;
}

const char* execWParms::ascii_fingerprint = "25702B8D5E28AA39160F267DABBC8446";
const uint8_t execWParms::binary_fingerprint[16] = {0x25,0x70,0x2B,0x8D,0x5E,0x28,0xAA,0x39,0x16,0x0F,0x26,0x7D,0xAB,0xBC,0x84,0x46};

uint32_t execWParms::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->command);
          this->__isset.command = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->parms.clear();
            uint32_t _size2;
            ::apache::thrift::protocol::TType _etype5;
            xfer += iprot->readListBegin(_etype5, _size2);
            this->parms.resize(_size2);
            uint32_t _i6;
            for (_i6 = 0; _i6 < _size2; ++_i6)
            {
              xfer += iprot->readString(this->parms[_i6]);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.parms = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t execWParms::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("execWParms");

  xfer += oprot->writeFieldBegin("command", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->command);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("parms", ::apache::thrift::protocol::T_LIST, 2);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->parms.size()));
    std::vector<std::string> ::const_iterator _iter7;
    for (_iter7 = this->parms.begin(); _iter7 != this->parms.end(); ++_iter7)
    {
      xfer += oprot->writeString((*_iter7));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(execWParms &a, execWParms &b) {
  using ::std::swap;
  swap(a.command, b.command);
  swap(a.parms, b.parms);
  swap(a.__isset, b.__isset);
}

execWParms::execWParms(const execWParms& other8) {
  command = other8.command;
  parms = other8.parms;
  __isset = other8.__isset;
}
execWParms& execWParms::operator=(const execWParms& other9) {
  command = other9.command;
  parms = other9.parms;
  __isset = other9.__isset;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const execWParms& obj) {
  using apache::thrift::to_string;
  out << "execWParms(";
  out << "command=" << to_string(obj.command);
  out << ", " << "parms=" << to_string(obj.parms);
  out << ")";
  return out;
}


file::~file() throw() {
}


void file::__set_name(const std::string& val) {
  this->name = val;
}

void file::__set_size(const double val) {
  this->size = val;
}

void file::__set_modifiedDate(const std::string& val) {
  this->modifiedDate = val;
}

void file::__set_owner(const std::string& val) {
  this->owner = val;
}

void file::__set_group(const std::string& val) {
  this->group = val;
}

const char* file::ascii_fingerprint = "521630BE76FEB961F68CE4B94CFCD5BA";
const uint8_t file::binary_fingerprint[16] = {0x52,0x16,0x30,0xBE,0x76,0xFE,0xB9,0x61,0xF6,0x8C,0xE4,0xB9,0x4C,0xFC,0xD5,0xBA};

uint32_t file::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->name);
          this->__isset.name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->size);
          this->__isset.size = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->modifiedDate);
          this->__isset.modifiedDate = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->owner);
          this->__isset.owner = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->group);
          this->__isset.group = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t file::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("file");

  xfer += oprot->writeFieldBegin("name", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->name);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("size", ::apache::thrift::protocol::T_DOUBLE, 2);
  xfer += oprot->writeDouble(this->size);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("modifiedDate", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->modifiedDate);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("owner", ::apache::thrift::protocol::T_STRING, 4);
  xfer += oprot->writeString(this->owner);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("group", ::apache::thrift::protocol::T_STRING, 5);
  xfer += oprot->writeString(this->group);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(file &a, file &b) {
  using ::std::swap;
  swap(a.name, b.name);
  swap(a.size, b.size);
  swap(a.modifiedDate, b.modifiedDate);
  swap(a.owner, b.owner);
  swap(a.group, b.group);
  swap(a.__isset, b.__isset);
}

file::file(const file& other10) {
  name = other10.name;
  size = other10.size;
  modifiedDate = other10.modifiedDate;
  owner = other10.owner;
  group = other10.group;
  __isset = other10.__isset;
}
file& file::operator=(const file& other11) {
  name = other11.name;
  size = other11.size;
  modifiedDate = other11.modifiedDate;
  owner = other11.owner;
  group = other11.group;
  __isset = other11.__isset;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const file& obj) {
  using apache::thrift::to_string;
  out << "file(";
  out << "name=" << to_string(obj.name);
  out << ", " << "size=" << to_string(obj.size);
  out << ", " << "modifiedDate=" << to_string(obj.modifiedDate);
  out << ", " << "owner=" << to_string(obj.owner);
  out << ", " << "group=" << to_string(obj.group);
  out << ")";
  return out;
}


directory::~directory() throw() {
}


void directory::__set_files(const std::vector<file> & val) {
  this->files = val;
}

void directory::__set_dirName(const file& val) {
  this->dirName = val;
}

const char* directory::ascii_fingerprint = "612D3B88C964B993BBDF5DA7848FAFD4";
const uint8_t directory::binary_fingerprint[16] = {0x61,0x2D,0x3B,0x88,0xC9,0x64,0xB9,0x93,0xBB,0xDF,0x5D,0xA7,0x84,0x8F,0xAF,0xD4};

uint32_t directory::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->files.clear();
            uint32_t _size12;
            ::apache::thrift::protocol::TType _etype15;
            xfer += iprot->readListBegin(_etype15, _size12);
            this->files.resize(_size12);
            uint32_t _i16;
            for (_i16 = 0; _i16 < _size12; ++_i16)
            {
              xfer += this->files[_i16].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.files = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->dirName.read(iprot);
          this->__isset.dirName = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t directory::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("directory");

  xfer += oprot->writeFieldBegin("files", ::apache::thrift::protocol::T_LIST, 1);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->files.size()));
    std::vector<file> ::const_iterator _iter17;
    for (_iter17 = this->files.begin(); _iter17 != this->files.end(); ++_iter17)
    {
      xfer += (*_iter17).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("dirName", ::apache::thrift::protocol::T_STRUCT, 2);
  xfer += this->dirName.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(directory &a, directory &b) {
  using ::std::swap;
  swap(a.files, b.files);
  swap(a.dirName, b.dirName);
  swap(a.__isset, b.__isset);
}

directory::directory(const directory& other18) {
  files = other18.files;
  dirName = other18.dirName;
  __isset = other18.__isset;
}
directory& directory::operator=(const directory& other19) {
  files = other19.files;
  dirName = other19.dirName;
  __isset = other19.__isset;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const directory& obj) {
  using apache::thrift::to_string;
  out << "directory(";
  out << "files=" << to_string(obj.files);
  out << ", " << "dirName=" << to_string(obj.dirName);
  out << ")";
  return out;
}

} // namespace