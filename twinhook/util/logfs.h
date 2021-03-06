#pragma once

#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)

#define LOG(fmt, ...) logm(__FILE__, __func__, __LINE__, fmt, ##__VA_ARGS__)
#define ASSERT(a) do{if(!(a)){LOG("assertion failed: " TOSTRING(a)); exit(1);}}while(0)

void logm(const char* file, const char* func, int line, const char* fmt, ...);