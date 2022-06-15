#include "loc_string.h"

#include <cassert>

namespace textile {

	void loc_string::set_localized_value(std::string str, LANGUAGE loc) {
		assert(loc < LANGUAGE::NUM_LANGUAGES);
		assert(loc >= 0);
		localized_strings[loc] = str;
	}

}