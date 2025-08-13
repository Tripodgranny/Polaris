#pragma once

#include <memory>

#include "Core.h"

#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Polaris {

	class POLARIS_API Log {
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	};

}

// logging macros

// - CORE
#define POLARIS_CORE_TRACE(...)		::Polaris::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define POLARIS_CORE_INFO(...)		::Polaris::Log::GetCoreLogger()->info(__VA_ARGS__)
#define POLARIS_CORE_WARN(...)		::Polaris::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define POLARIS_CORE_ERROR(...)		::Polaris::Log::GetCoreLogger()->error(__VA_ARGS__)
#define POLARIS_CORE_FATAL(...)		::Polaris::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// - CLIENT
#define POLARIS_APP_TRACE(...)		::Polaris::Log::GetClientLogger()->trace(__VA_ARGS__)
#define POLARIS_APP_INFO(...)			::Polaris::Log::GetClientLogger()->info(__VA_ARGS__)
#define POLARIS_APP_WARN(...)			::Polaris::Log::GetClientLogger()->warn(__VA_ARGS__)
#define POLARIS_APP_ERROR(...)		::Polaris::Log::GetClientLogger()->error(__VA_ARGS__)
#define POLARIS_APP_FATAL(...)		::Polaris::Log::GetClientLogger()->fatal(__VA_ARGS__)