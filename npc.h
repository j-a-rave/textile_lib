#pragma once

#include "serializable.h"
#include "loc_string.h"

namespace textile {

#define NPC_NAME_MAX_LENGTH 32

	class npc : public serializable {
	public:
		loc_string display_name;

		npc() {}
		npc(std::string str) {
			display_name = loc_string(str);
			sys_id = str;
		}
		~npc() {}
	};
}