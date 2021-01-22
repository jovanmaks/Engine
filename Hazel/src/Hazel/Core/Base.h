#pragma once
#include <memory>

#ifdef HZ_DEBUG
#if defined(HZ_PLATFORM_WINDOWS)
#define HZ_DEBUGBREAK() __debugbreak()
#elif defined(HZ_PLATFORM_LINUX)
#include <signal.h>
#define HZ_DEBUGBREAK() raise(SIGTRAP)
#else
#error "Platform doesn't support debugbreak yet!"
#endif
#define HZ_ENABLE_ASSERTS
#else
#define HZ_DEBUGBREAK()
#endif

#ifdef HZ_ENABLE_ASSERTS
#define HZ_ASSERT(x, ...)                                   \
	{                                                       \
		if (!(x))                                           \
		{                                                   \
			HZ_ERROR("Assertion Failed: {0}", __VA_ARGS__); \
			HZ_DEBUGBREAK();                                \
		}                                                   \
	}
#define HZ_CORE_ASSERT(x, ...)                                   \
	{                                                            \
		if (!(x))                                                \
		{                                                        \
			HZ_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); \
			HZ_DEBUGBREAK();                                     \
		}                                                        \
	}
#else
#define HZ_ASSERT(x, ...)
#define HZ_CORE_ASSERT(x, ...)
#endif

// #define ASSERT(x) if (!(x)) raise(SIGTRAP);
// #define GLCall(x)   GLClearError();\
//     x;\
//     ASSERT(GLLogCall(#x, __FILE__, __LINE__))

#define BIT(x) (1 << x)

#define HZ_BIND_EVENT_FN(fn) std::bind(&fn, this, std::placeholders::_1)

namespace Hazel
{

	template <typename T>
	using Scope = std::unique_ptr<T>;

	template <typename T, typename... Args>
	constexpr Scope<T> CreateScope(Args &&...args)
	{
		return std::make_unique<T>(std::forward<Args>(args)...);
	}

	template <typename T>
	using Ref = std::shared_ptr<T>;

	template <typename T, typename... Args>
	constexpr Ref<T> CreateRef(Args &&...args)
	{
		return std::make_shared<T>(std::forward<Args>(args)...);
	}

} // namespace Hazel