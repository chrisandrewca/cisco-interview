#ifndef _WEB_PAGE_H_
#define _WEB_PAGE_H_

#include <string>

class WebPage { // ?
	public:
		void read(const std::string& url);

	private:
		// state has order (of operations) and...
			// operation could define requirements of state
				// is resolved error handling by the caller of the class...
					// need a semantic that works with both the result and the interface
		// state store
			// could use like a smart pointer? and update the internal pointer for all clients
};

#endif