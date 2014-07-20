/**
 * Autogenerated by Thrift Compiler (0.9.1)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "MasterServer_types.h"

#include <algorithm>

namespace GFS {

const char* ChunkServerInfo::ascii_fingerprint = "7C36FC499DF904D899DB644F48C285E8";
const uint8_t ChunkServerInfo::binary_fingerprint[16] = {0x7C,0x36,0xFC,0x49,0x9D,0xF9,0x04,0xD8,0x99,0xDB,0x64,0x4F,0x48,0xC2,0x85,0xE8};

uint32_t ChunkServerInfo::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          xfer += iprot->readString(this->ipAddr);
          this->__isset.ipAddr = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->totalMem);
          this->__isset.totalMem = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->availMem);
          this->__isset.availMem = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->availPort.clear();
            uint32_t _size0;
            ::apache::thrift::protocol::TType _etype3;
            xfer += iprot->readListBegin(_etype3, _size0);
            this->availPort.resize(_size0);
            uint32_t _i4;
            for (_i4 = 0; _i4 < _size0; ++_i4)
            {
              xfer += iprot->readI16(this->availPort[_i4]);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.availPort = true;
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

uint32_t ChunkServerInfo::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("ChunkServerInfo");

  xfer += oprot->writeFieldBegin("ipAddr", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->ipAddr);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("totalMem", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->totalMem);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("availMem", ::apache::thrift::protocol::T_I64, 3);
  xfer += oprot->writeI64(this->availMem);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("availPort", ::apache::thrift::protocol::T_LIST, 4);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_I16, static_cast<uint32_t>(this->availPort.size()));
    std::vector<int16_t> ::const_iterator _iter5;
    for (_iter5 = this->availPort.begin(); _iter5 != this->availPort.end(); ++_iter5)
    {
      xfer += oprot->writeI16((*_iter5));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(ChunkServerInfo &a, ChunkServerInfo &b) {
  using ::std::swap;
  swap(a.ipAddr, b.ipAddr);
  swap(a.totalMem, b.totalMem);
  swap(a.availMem, b.availMem);
  swap(a.availPort, b.availPort);
  swap(a.__isset, b.__isset);
}

const char* ReadResult::ascii_fingerprint = "1CCCF6FC31CFD1D61BBBB1BAF3590620";
const uint8_t ReadResult::binary_fingerprint[16] = {0x1C,0xCC,0xF6,0xFC,0x31,0xCF,0xD1,0xD6,0x1B,0xBB,0xB1,0xBA,0xF3,0x59,0x06,0x20};

uint32_t ReadResult::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          xfer += iprot->readString(this->buf);
          this->__isset.buf = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->count);
          this->__isset.count = true;
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

uint32_t ReadResult::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("ReadResult");

  xfer += oprot->writeFieldBegin("buf", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->buf);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("count", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->count);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(ReadResult &a, ReadResult &b) {
  using ::std::swap;
  swap(a.buf, b.buf);
  swap(a.count, b.count);
  swap(a.__isset, b.__isset);
}

const char* FileInfo::ascii_fingerprint = "343DA57F446177400B333DC49B037B0C";
const uint8_t FileInfo::binary_fingerprint[16] = {0x34,0x3D,0xA5,0x7F,0x44,0x61,0x77,0x40,0x0B,0x33,0x3D,0xC4,0x9B,0x03,0x7B,0x0C};

uint32_t FileInfo::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          xfer += iprot->readString(this->ipAddr);
          this->__isset.ipAddr = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->uuid);
          this->__isset.uuid = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->fd);
          this->__isset.fd = true;
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

uint32_t FileInfo::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("FileInfo");

  xfer += oprot->writeFieldBegin("ipAddr", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->ipAddr);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("uuid", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->uuid);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("fd", ::apache::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32(this->fd);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(FileInfo &a, FileInfo &b) {
  using ::std::swap;
  swap(a.ipAddr, b.ipAddr);
  swap(a.uuid, b.uuid);
  swap(a.fd, b.fd);
  swap(a.__isset, b.__isset);
}

} // namespace