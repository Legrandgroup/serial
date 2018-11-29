/**
* \file serial_api.hpp
* \brief Preprocessor defines (class prefixes) to compile DLLs under Windows
*
* This header must be included to properly define LIBSERIAL_API in the remaining API headers
*/

#ifndef _SERIALAPI_HPP_
#define _SERIALAPI_HPP_

#if !defined(LIBSERIAL_STATICLIB)
#if defined(BUILDING_LIBSERIAL)
#if   (defined(__MINGW32__) || defined(__MINGW64__))
#define LIBSERIAL_API
#elif (defined(WIN32) || defined(_WIN32))
#define LIBSERIAL_API  __declspec(dllexport)
#else
#define LIBSERIAL_API
#endif

#define LIBSERIAL_LIB_EXPORT
#undef LIBSERIAL_LIB_IMPORT
#else
#if   (defined(__MINGW32__) || defined(__MINGW64__))
#define LIBSERIAL_API
#elif (defined(WIN32) || defined(_WIN32))
#define LIBSERIAL_API  __declspec(dllimport)
#else
#define LIBSERIAL_API
#endif

#define LIBSERIAL_LIB_IMPORT
#undef LIBSERIAL_LIB_EXPORT
#endif
#endif

#endif	// _SERIALAPI_HPP_