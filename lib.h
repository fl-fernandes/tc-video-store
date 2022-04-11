#include <string>
#include <iostream>
#include <inttypes.h>

#define GETTER_SETTER_ENCAP(TYPE, VAR) \
	private: \
		TYPE VAR; \
	\
	public: \
		inline TYPE get_##VAR () \
		{ \
			return this->VAR; \
		} \
		\
		inline void set_##VAR (TYPE VAR) \
		{ \
			this->VAR = VAR; \
		} 