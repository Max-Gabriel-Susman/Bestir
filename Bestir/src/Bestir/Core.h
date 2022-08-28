#pragma once

#ifdef BR_PLATFORM_WINDOWS
	#ifdef BESTIR_BUILD_DLL
		#define BESTIR_API __declspec(dllexport)
	#else 
		#define BESTIR_API __declspec(dllimport)
	#endif
#else
	#error Bestir only supported on windows
#endif