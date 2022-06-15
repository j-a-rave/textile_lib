#pragma once

#include <string>

namespace textile {

	// general language state definition

	enum LANGUAGE {
		LANG_EN = 0,
		NUM_LANGUAGES
	};

	static LANGUAGE Current_loc = LANGUAGE::LANG_EN;

	static std::string get_language_label(LANGUAGE lang)
	{
		switch (lang) {
		case LANGUAGE::LANG_EN:
			return "English";
		default:
			return "Invalid";
		}
	}

	// localized string class

	class loc_string {
		
		std::string localized_strings[LANGUAGE::NUM_LANGUAGES];

	public:
		loc_string() {}
		loc_string(std::string str) {
			localized_strings[Current_loc] = str;
		}
		~loc_string() {}

		void set_localized_value(std::string str, LANGUAGE loc = LANG_EN);
		std::string * get_localized_value() { return &localized_strings[Current_loc]; }
	};

}