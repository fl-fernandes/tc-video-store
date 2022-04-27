#ifndef __tc_video_store__client__
#define __tc_video_store__client__

#include "lib.h"

uint16_t generate_client_id ();

class client_t
{
	GETTER_ENCAP(uint16_t, id);
	GETTER_SETTER_ENCAP(std::string, name);
	GETTER_SETTER_ENCAP(std::string, email);
	GETTER_SETTER_ENCAP(std::string, phone_number);

	public:
		client_t (std::string name, std::string email, std::string phone_number)
		{
			this->id = generate_client_id();	
			this->name = name;
			this->email = email;
			this->phone_number = phone_number;
			
			std::cout << this->name << std::endl;
			std::cout << this->email << std::endl;
		}
		
		std::string to_string ();
		
		inline std::string& get_email_ref () 
		{ 
			return this->email; 
		} 
};

#endif

