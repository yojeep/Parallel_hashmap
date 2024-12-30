#include "phashmap.cpp"

#include <pybind11/pybind11.h>

PYBIND11_MODULE(_phashmap, m) {

    declare_dict<uint32_t, uint8_t>(m, "Dict_u4_u1");
    declare_dict<uint32_t, uint16_t>(m, "Dict_u4_u2");
    declare_dict<uint32_t, uint32_t>(m, "Dict_u4_u4");
    declare_dict<uint32_t, uint64_t>(m, "Dict_u4_u8");
    declare_dict<uint32_t, int8_t>(m, "Dict_u4_i1");
    declare_dict<uint32_t, int16_t>(m, "Dict_u4_i2");
    declare_dict<uint32_t, int32_t>(m, "Dict_u4_i4");
    declare_dict<uint32_t, int64_t>(m, "Dict_u4_i8");
    declare_dict<uint32_t, float>(m, "Dict_u4_f4");
    declare_dict<uint32_t, double>(m, "Dict_u4_f8");
    declare_dict<uint32_t, std::array<char,8>>(m, "Dict_u4_S8");
    declare_dict<uint32_t, std::array<char,16>>(m, "Dict_u4_S16");
    declare_dict<uint32_t, std::array<char,32>>(m, "Dict_u4_S32");
    declare_dict<uint32_t, std::array<char,64>>(m, "Dict_u4_S64");
    declare_dict<uint32_t, std::array<char,128>>(m, "Dict_u4_S128");
    declare_dict<uint32_t, std::array<char,256>>(m, "Dict_u4_S256");
    declare_dict<uint64_t, uint8_t>(m, "Dict_u8_u1");
    declare_dict<uint64_t, uint16_t>(m, "Dict_u8_u2");
    declare_dict<uint64_t, uint32_t>(m, "Dict_u8_u4");
    declare_dict<uint64_t, uint64_t>(m, "Dict_u8_u8");
    declare_dict<uint64_t, int8_t>(m, "Dict_u8_i1");
    declare_dict<uint64_t, int16_t>(m, "Dict_u8_i2");
    declare_dict<uint64_t, int32_t>(m, "Dict_u8_i4");
    declare_dict<uint64_t, int64_t>(m, "Dict_u8_i8");
    declare_dict<uint64_t, float>(m, "Dict_u8_f4");
    declare_dict<uint64_t, double>(m, "Dict_u8_f8");
    declare_dict<uint64_t, std::array<char,8>>(m, "Dict_u8_S8");
    declare_dict<uint64_t, std::array<char,16>>(m, "Dict_u8_S16");
    declare_dict<uint64_t, std::array<char,32>>(m, "Dict_u8_S32");
    declare_dict<uint64_t, std::array<char,64>>(m, "Dict_u8_S64");
    declare_dict<uint64_t, std::array<char,128>>(m, "Dict_u8_S128");
    declare_dict<uint64_t, std::array<char,256>>(m, "Dict_u8_S256");
    declare_dict<int32_t, uint8_t>(m, "Dict_i4_u1");
    declare_dict<int32_t, uint16_t>(m, "Dict_i4_u2");
    declare_dict<int32_t, uint32_t>(m, "Dict_i4_u4");
    declare_dict<int32_t, uint64_t>(m, "Dict_i4_u8");
    declare_dict<int32_t, int8_t>(m, "Dict_i4_i1");
    declare_dict<int32_t, int16_t>(m, "Dict_i4_i2");
    declare_dict<int32_t, int32_t>(m, "Dict_i4_i4");
    declare_dict<int32_t, int64_t>(m, "Dict_i4_i8");
    declare_dict<int32_t, float>(m, "Dict_i4_f4");
    declare_dict<int32_t, double>(m, "Dict_i4_f8");
    declare_dict<int32_t, std::array<char,8>>(m, "Dict_i4_S8");
    declare_dict<int32_t, std::array<char,16>>(m, "Dict_i4_S16");
    declare_dict<int32_t, std::array<char,32>>(m, "Dict_i4_S32");
    declare_dict<int32_t, std::array<char,64>>(m, "Dict_i4_S64");
    declare_dict<int32_t, std::array<char,128>>(m, "Dict_i4_S128");
    declare_dict<int32_t, std::array<char,256>>(m, "Dict_i4_S256");
    declare_dict<int64_t, uint8_t>(m, "Dict_i8_u1");
    declare_dict<int64_t, uint16_t>(m, "Dict_i8_u2");
    declare_dict<int64_t, uint32_t>(m, "Dict_i8_u4");
    declare_dict<int64_t, uint64_t>(m, "Dict_i8_u8");
    declare_dict<int64_t, int8_t>(m, "Dict_i8_i1");
    declare_dict<int64_t, int16_t>(m, "Dict_i8_i2");
    declare_dict<int64_t, int32_t>(m, "Dict_i8_i4");
    declare_dict<int64_t, int64_t>(m, "Dict_i8_i8");
    declare_dict<int64_t, float>(m, "Dict_i8_f4");
    declare_dict<int64_t, double>(m, "Dict_i8_f8");
    declare_dict<int64_t, std::array<char,8>>(m, "Dict_i8_S8");
    declare_dict<int64_t, std::array<char,16>>(m, "Dict_i8_S16");
    declare_dict<int64_t, std::array<char,32>>(m, "Dict_i8_S32");
    declare_dict<int64_t, std::array<char,64>>(m, "Dict_i8_S64");
    declare_dict<int64_t, std::array<char,128>>(m, "Dict_i8_S128");
    declare_dict<int64_t, std::array<char,256>>(m, "Dict_i8_S256");
    declare_dict<std::array<char,8>, uint8_t>(m, "Dict_S8_u1");
    declare_dict<std::array<char,8>, uint16_t>(m, "Dict_S8_u2");
    declare_dict<std::array<char,8>, uint32_t>(m, "Dict_S8_u4");
    declare_dict<std::array<char,8>, uint64_t>(m, "Dict_S8_u8");
    declare_dict<std::array<char,8>, int8_t>(m, "Dict_S8_i1");
    declare_dict<std::array<char,8>, int16_t>(m, "Dict_S8_i2");
    declare_dict<std::array<char,8>, int32_t>(m, "Dict_S8_i4");
    declare_dict<std::array<char,8>, int64_t>(m, "Dict_S8_i8");
    declare_dict<std::array<char,8>, float>(m, "Dict_S8_f4");
    declare_dict<std::array<char,8>, double>(m, "Dict_S8_f8");
    declare_dict<std::array<char,8>, std::array<char,8>>(m, "Dict_S8_S8");
    declare_dict<std::array<char,8>, std::array<char,16>>(m, "Dict_S8_S16");
    declare_dict<std::array<char,8>, std::array<char,32>>(m, "Dict_S8_S32");
    declare_dict<std::array<char,8>, std::array<char,64>>(m, "Dict_S8_S64");
    declare_dict<std::array<char,8>, std::array<char,128>>(m, "Dict_S8_S128");
    declare_dict<std::array<char,8>, std::array<char,256>>(m, "Dict_S8_S256");
    declare_dict<std::array<char,16>, uint8_t>(m, "Dict_S16_u1");
    declare_dict<std::array<char,16>, uint16_t>(m, "Dict_S16_u2");
    declare_dict<std::array<char,16>, uint32_t>(m, "Dict_S16_u4");
    declare_dict<std::array<char,16>, uint64_t>(m, "Dict_S16_u8");
    declare_dict<std::array<char,16>, int8_t>(m, "Dict_S16_i1");
    declare_dict<std::array<char,16>, int16_t>(m, "Dict_S16_i2");
    declare_dict<std::array<char,16>, int32_t>(m, "Dict_S16_i4");
    declare_dict<std::array<char,16>, int64_t>(m, "Dict_S16_i8");
    declare_dict<std::array<char,16>, float>(m, "Dict_S16_f4");
    declare_dict<std::array<char,16>, double>(m, "Dict_S16_f8");
    declare_dict<std::array<char,16>, std::array<char,8>>(m, "Dict_S16_S8");
    declare_dict<std::array<char,16>, std::array<char,16>>(m, "Dict_S16_S16");
    declare_dict<std::array<char,16>, std::array<char,32>>(m, "Dict_S16_S32");
    declare_dict<std::array<char,16>, std::array<char,64>>(m, "Dict_S16_S64");
    declare_dict<std::array<char,16>, std::array<char,128>>(m, "Dict_S16_S128");
    declare_dict<std::array<char,16>, std::array<char,256>>(m, "Dict_S16_S256");
    declare_dict<std::array<char,32>, uint8_t>(m, "Dict_S32_u1");
    declare_dict<std::array<char,32>, uint16_t>(m, "Dict_S32_u2");
    declare_dict<std::array<char,32>, uint32_t>(m, "Dict_S32_u4");
    declare_dict<std::array<char,32>, uint64_t>(m, "Dict_S32_u8");
    declare_dict<std::array<char,32>, int8_t>(m, "Dict_S32_i1");
    declare_dict<std::array<char,32>, int16_t>(m, "Dict_S32_i2");
    declare_dict<std::array<char,32>, int32_t>(m, "Dict_S32_i4");
    declare_dict<std::array<char,32>, int64_t>(m, "Dict_S32_i8");
    declare_dict<std::array<char,32>, float>(m, "Dict_S32_f4");
    declare_dict<std::array<char,32>, double>(m, "Dict_S32_f8");
    declare_dict<std::array<char,32>, std::array<char,8>>(m, "Dict_S32_S8");
    declare_dict<std::array<char,32>, std::array<char,16>>(m, "Dict_S32_S16");
    declare_dict<std::array<char,32>, std::array<char,32>>(m, "Dict_S32_S32");
    declare_dict<std::array<char,32>, std::array<char,64>>(m, "Dict_S32_S64");
    declare_dict<std::array<char,32>, std::array<char,128>>(m, "Dict_S32_S128");
    declare_dict<std::array<char,32>, std::array<char,256>>(m, "Dict_S32_S256");
    declare_dict<std::array<char,64>, uint8_t>(m, "Dict_S64_u1");
    declare_dict<std::array<char,64>, uint16_t>(m, "Dict_S64_u2");
    declare_dict<std::array<char,64>, uint32_t>(m, "Dict_S64_u4");
    declare_dict<std::array<char,64>, uint64_t>(m, "Dict_S64_u8");
    declare_dict<std::array<char,64>, int8_t>(m, "Dict_S64_i1");
    declare_dict<std::array<char,64>, int16_t>(m, "Dict_S64_i2");
    declare_dict<std::array<char,64>, int32_t>(m, "Dict_S64_i4");
    declare_dict<std::array<char,64>, int64_t>(m, "Dict_S64_i8");
    declare_dict<std::array<char,64>, float>(m, "Dict_S64_f4");
    declare_dict<std::array<char,64>, double>(m, "Dict_S64_f8");
    declare_dict<std::array<char,64>, std::array<char,8>>(m, "Dict_S64_S8");
    declare_dict<std::array<char,64>, std::array<char,16>>(m, "Dict_S64_S16");
    declare_dict<std::array<char,64>, std::array<char,32>>(m, "Dict_S64_S32");
    declare_dict<std::array<char,64>, std::array<char,64>>(m, "Dict_S64_S64");
    declare_dict<std::array<char,64>, std::array<char,128>>(m, "Dict_S64_S128");
    declare_dict<std::array<char,64>, std::array<char,256>>(m, "Dict_S64_S256");
    declare_dict<std::array<char,128>, uint8_t>(m, "Dict_S128_u1");
    declare_dict<std::array<char,128>, uint16_t>(m, "Dict_S128_u2");
    declare_dict<std::array<char,128>, uint32_t>(m, "Dict_S128_u4");
    declare_dict<std::array<char,128>, uint64_t>(m, "Dict_S128_u8");
    declare_dict<std::array<char,128>, int8_t>(m, "Dict_S128_i1");
    declare_dict<std::array<char,128>, int16_t>(m, "Dict_S128_i2");
    declare_dict<std::array<char,128>, int32_t>(m, "Dict_S128_i4");
    declare_dict<std::array<char,128>, int64_t>(m, "Dict_S128_i8");
    declare_dict<std::array<char,128>, float>(m, "Dict_S128_f4");
    declare_dict<std::array<char,128>, double>(m, "Dict_S128_f8");
    declare_dict<std::array<char,128>, std::array<char,8>>(m, "Dict_S128_S8");
    declare_dict<std::array<char,128>, std::array<char,16>>(m, "Dict_S128_S16");
    declare_dict<std::array<char,128>, std::array<char,32>>(m, "Dict_S128_S32");
    declare_dict<std::array<char,128>, std::array<char,64>>(m, "Dict_S128_S64");
    declare_dict<std::array<char,128>, std::array<char,128>>(m, "Dict_S128_S128");
    declare_dict<std::array<char,128>, std::array<char,256>>(m, "Dict_S128_S256");
    declare_dict<std::array<char,256>, uint8_t>(m, "Dict_S256_u1");
    declare_dict<std::array<char,256>, uint16_t>(m, "Dict_S256_u2");
    declare_dict<std::array<char,256>, uint32_t>(m, "Dict_S256_u4");
    declare_dict<std::array<char,256>, uint64_t>(m, "Dict_S256_u8");
    declare_dict<std::array<char,256>, int8_t>(m, "Dict_S256_i1");
    declare_dict<std::array<char,256>, int16_t>(m, "Dict_S256_i2");
    declare_dict<std::array<char,256>, int32_t>(m, "Dict_S256_i4");
    declare_dict<std::array<char,256>, int64_t>(m, "Dict_S256_i8");
    declare_dict<std::array<char,256>, float>(m, "Dict_S256_f4");
    declare_dict<std::array<char,256>, double>(m, "Dict_S256_f8");
    declare_dict<std::array<char,256>, std::array<char,8>>(m, "Dict_S256_S8");
    declare_dict<std::array<char,256>, std::array<char,16>>(m, "Dict_S256_S16");
    declare_dict<std::array<char,256>, std::array<char,32>>(m, "Dict_S256_S32");
    declare_dict<std::array<char,256>, std::array<char,64>>(m, "Dict_S256_S64");
    declare_dict<std::array<char,256>, std::array<char,128>>(m, "Dict_S256_S128");
    declare_dict<std::array<char,256>, std::array<char,256>>(m, "Dict_S256_S256");

    declare_set<uint32_t>(m, "Set_u4");
    declare_set<uint64_t>(m, "Set_u8");
    declare_set<int32_t>(m, "Set_i4");
    declare_set<int64_t>(m, "Set_i8");
    declare_set<std::array<char,8>>(m, "Set_S8");
    declare_set<std::array<char,16>>(m, "Set_S16");
    declare_set<std::array<char,32>>(m, "Set_S32");
    declare_set<std::array<char,64>>(m, "Set_S64");
    declare_set<std::array<char,128>>(m, "Set_S128");
    declare_set<std::array<char,256>>(m, "Set_S256");

    declare_multidict<uint32_t, uint32_t>(m, "MultiDict_u4_u4");
    declare_multidict<uint32_t, uint64_t>(m, "MultiDict_u4_u8");
    declare_multidict<uint32_t, int32_t>(m, "MultiDict_u4_i4");
    declare_multidict<uint32_t, int64_t>(m, "MultiDict_u4_i8");
    declare_multidict<uint32_t, std::array<char,8>>(m, "MultiDict_u4_S8");
    declare_multidict<uint32_t, std::array<char,16>>(m, "MultiDict_u4_S16");
    declare_multidict<uint32_t, std::array<char,32>>(m, "MultiDict_u4_S32");
    declare_multidict<uint32_t, std::array<char,64>>(m, "MultiDict_u4_S64");
    declare_multidict<uint32_t, std::array<char,128>>(m, "MultiDict_u4_S128");
    declare_multidict<uint32_t, std::array<char,256>>(m, "MultiDict_u4_S256");
    declare_multidict<uint64_t, uint32_t>(m, "MultiDict_u8_u4");
    declare_multidict<uint64_t, uint64_t>(m, "MultiDict_u8_u8");
    declare_multidict<uint64_t, int32_t>(m, "MultiDict_u8_i4");
    declare_multidict<uint64_t, int64_t>(m, "MultiDict_u8_i8");
    declare_multidict<uint64_t, std::array<char,8>>(m, "MultiDict_u8_S8");
    declare_multidict<uint64_t, std::array<char,16>>(m, "MultiDict_u8_S16");
    declare_multidict<uint64_t, std::array<char,32>>(m, "MultiDict_u8_S32");
    declare_multidict<uint64_t, std::array<char,64>>(m, "MultiDict_u8_S64");
    declare_multidict<uint64_t, std::array<char,128>>(m, "MultiDict_u8_S128");
    declare_multidict<uint64_t, std::array<char,256>>(m, "MultiDict_u8_S256");
    declare_multidict<int32_t, uint32_t>(m, "MultiDict_i4_u4");
    declare_multidict<int32_t, uint64_t>(m, "MultiDict_i4_u8");
    declare_multidict<int32_t, int32_t>(m, "MultiDict_i4_i4");
    declare_multidict<int32_t, int64_t>(m, "MultiDict_i4_i8");
    declare_multidict<int32_t, std::array<char,8>>(m, "MultiDict_i4_S8");
    declare_multidict<int32_t, std::array<char,16>>(m, "MultiDict_i4_S16");
    declare_multidict<int32_t, std::array<char,32>>(m, "MultiDict_i4_S32");
    declare_multidict<int32_t, std::array<char,64>>(m, "MultiDict_i4_S64");
    declare_multidict<int32_t, std::array<char,128>>(m, "MultiDict_i4_S128");
    declare_multidict<int32_t, std::array<char,256>>(m, "MultiDict_i4_S256");
    declare_multidict<int64_t, uint32_t>(m, "MultiDict_i8_u4");
    declare_multidict<int64_t, uint64_t>(m, "MultiDict_i8_u8");
    declare_multidict<int64_t, int32_t>(m, "MultiDict_i8_i4");
    declare_multidict<int64_t, int64_t>(m, "MultiDict_i8_i8");
    declare_multidict<int64_t, std::array<char,8>>(m, "MultiDict_i8_S8");
    declare_multidict<int64_t, std::array<char,16>>(m, "MultiDict_i8_S16");
    declare_multidict<int64_t, std::array<char,32>>(m, "MultiDict_i8_S32");
    declare_multidict<int64_t, std::array<char,64>>(m, "MultiDict_i8_S64");
    declare_multidict<int64_t, std::array<char,128>>(m, "MultiDict_i8_S128");
    declare_multidict<int64_t, std::array<char,256>>(m, "MultiDict_i8_S256");
    declare_multidict<std::array<char,8>, uint32_t>(m, "MultiDict_S8_u4");
    declare_multidict<std::array<char,8>, uint64_t>(m, "MultiDict_S8_u8");
    declare_multidict<std::array<char,8>, int32_t>(m, "MultiDict_S8_i4");
    declare_multidict<std::array<char,8>, int64_t>(m, "MultiDict_S8_i8");
    declare_multidict<std::array<char,8>, std::array<char,8>>(m, "MultiDict_S8_S8");
    declare_multidict<std::array<char,8>, std::array<char,16>>(m, "MultiDict_S8_S16");
    declare_multidict<std::array<char,8>, std::array<char,32>>(m, "MultiDict_S8_S32");
    declare_multidict<std::array<char,8>, std::array<char,64>>(m, "MultiDict_S8_S64");
    declare_multidict<std::array<char,8>, std::array<char,128>>(m, "MultiDict_S8_S128");
    declare_multidict<std::array<char,8>, std::array<char,256>>(m, "MultiDict_S8_S256");
    declare_multidict<std::array<char,16>, uint32_t>(m, "MultiDict_S16_u4");
    declare_multidict<std::array<char,16>, uint64_t>(m, "MultiDict_S16_u8");
    declare_multidict<std::array<char,16>, int32_t>(m, "MultiDict_S16_i4");
    declare_multidict<std::array<char,16>, int64_t>(m, "MultiDict_S16_i8");
    declare_multidict<std::array<char,16>, std::array<char,8>>(m, "MultiDict_S16_S8");
    declare_multidict<std::array<char,16>, std::array<char,16>>(m, "MultiDict_S16_S16");
    declare_multidict<std::array<char,16>, std::array<char,32>>(m, "MultiDict_S16_S32");
    declare_multidict<std::array<char,16>, std::array<char,64>>(m, "MultiDict_S16_S64");
    declare_multidict<std::array<char,16>, std::array<char,128>>(m, "MultiDict_S16_S128");
    declare_multidict<std::array<char,16>, std::array<char,256>>(m, "MultiDict_S16_S256");
    declare_multidict<std::array<char,32>, uint32_t>(m, "MultiDict_S32_u4");
    declare_multidict<std::array<char,32>, uint64_t>(m, "MultiDict_S32_u8");
    declare_multidict<std::array<char,32>, int32_t>(m, "MultiDict_S32_i4");
    declare_multidict<std::array<char,32>, int64_t>(m, "MultiDict_S32_i8");
    declare_multidict<std::array<char,32>, std::array<char,8>>(m, "MultiDict_S32_S8");
    declare_multidict<std::array<char,32>, std::array<char,16>>(m, "MultiDict_S32_S16");
    declare_multidict<std::array<char,32>, std::array<char,32>>(m, "MultiDict_S32_S32");
    declare_multidict<std::array<char,32>, std::array<char,64>>(m, "MultiDict_S32_S64");
    declare_multidict<std::array<char,32>, std::array<char,128>>(m, "MultiDict_S32_S128");
    declare_multidict<std::array<char,32>, std::array<char,256>>(m, "MultiDict_S32_S256");
    declare_multidict<std::array<char,64>, uint32_t>(m, "MultiDict_S64_u4");
    declare_multidict<std::array<char,64>, uint64_t>(m, "MultiDict_S64_u8");
    declare_multidict<std::array<char,64>, int32_t>(m, "MultiDict_S64_i4");
    declare_multidict<std::array<char,64>, int64_t>(m, "MultiDict_S64_i8");
    declare_multidict<std::array<char,64>, std::array<char,8>>(m, "MultiDict_S64_S8");
    declare_multidict<std::array<char,64>, std::array<char,16>>(m, "MultiDict_S64_S16");
    declare_multidict<std::array<char,64>, std::array<char,32>>(m, "MultiDict_S64_S32");
    declare_multidict<std::array<char,64>, std::array<char,64>>(m, "MultiDict_S64_S64");
    declare_multidict<std::array<char,64>, std::array<char,128>>(m, "MultiDict_S64_S128");
    declare_multidict<std::array<char,64>, std::array<char,256>>(m, "MultiDict_S64_S256");
    declare_multidict<std::array<char,128>, uint32_t>(m, "MultiDict_S128_u4");
    declare_multidict<std::array<char,128>, uint64_t>(m, "MultiDict_S128_u8");
    declare_multidict<std::array<char,128>, int32_t>(m, "MultiDict_S128_i4");
    declare_multidict<std::array<char,128>, int64_t>(m, "MultiDict_S128_i8");
    declare_multidict<std::array<char,128>, std::array<char,8>>(m, "MultiDict_S128_S8");
    declare_multidict<std::array<char,128>, std::array<char,16>>(m, "MultiDict_S128_S16");
    declare_multidict<std::array<char,128>, std::array<char,32>>(m, "MultiDict_S128_S32");
    declare_multidict<std::array<char,128>, std::array<char,64>>(m, "MultiDict_S128_S64");
    declare_multidict<std::array<char,128>, std::array<char,128>>(m, "MultiDict_S128_S128");
    declare_multidict<std::array<char,128>, std::array<char,256>>(m, "MultiDict_S128_S256");
    declare_multidict<std::array<char,256>, uint32_t>(m, "MultiDict_S256_u4");
    declare_multidict<std::array<char,256>, uint64_t>(m, "MultiDict_S256_u8");
    declare_multidict<std::array<char,256>, int32_t>(m, "MultiDict_S256_i4");
    declare_multidict<std::array<char,256>, int64_t>(m, "MultiDict_S256_i8");
    declare_multidict<std::array<char,256>, std::array<char,8>>(m, "MultiDict_S256_S8");
    declare_multidict<std::array<char,256>, std::array<char,16>>(m, "MultiDict_S256_S16");
    declare_multidict<std::array<char,256>, std::array<char,32>>(m, "MultiDict_S256_S32");
    declare_multidict<std::array<char,256>, std::array<char,64>>(m, "MultiDict_S256_S64");
    declare_multidict<std::array<char,256>, std::array<char,128>>(m, "MultiDict_S256_S128");
    declare_multidict<std::array<char,256>, std::array<char,256>>(m, "MultiDict_S256_S256");
}