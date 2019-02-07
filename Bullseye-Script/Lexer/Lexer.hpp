#pragma once
#include <memory>

namespace BullseyeScript
{
	namespace Lexer
	{
		class B13Lexer
		{
		public:
			B13Lexer(const std::shared_ptr<std::string> &raw) :_raw(raw) {}
		private:
			std::shared_ptr<std::string> _raw;
		};
	}
}
