#include <fstream>
#include <functional>
#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
#include "webpage.h"
#include "windows.h"
#include "winsock2.h"
#include "ws2tcpip.h"

// only so many options in an ascii char set world...
// transpose between realms input -> interpret -> realm [ascii, unicode, wstr]
// take that and .. operate in constrained space?
// may even reduce corruption/errors based on ability to ensure safety of operations in that condensed space...
void WebPage::read(const std::string& url) {

	std::cout << url << std::endl;

	// break down the url...
	// https://news.google.com/search?q=cisco&hl=en-US&gl=US"
	// is... there a program...
	// ... which can identify...
	//... the order of operations (permutations, read, writes, ...computes)...
	// ... which identify and interpret portions of this information...
	// ... as ... identified as useful??? <- what! ("conciousness", behaviour?)

	// as far as I can tell... machine learning is showing all the ways something should / could be...
	// its missing, look ahead/behind statistical analysis... but in the form of imagination where
	// its not stats but feelings - which are skewed and weighted to the current moment due to..
	// well frankly probably physical processes like chemicals/neurons/body
	// we may even be faster than our medium allows us to experience something from a different perspective
	// ... unless we sacrifice some health or something
	// "your a movie" - inputs and I'm blind going on feel - yet I can see
	// so I'm blind to myself??? I closed my inner eye and simply go based on 1-shot learning AKA AI
	// whats this scenario? whats my state? perform

	// :// has seen period? if no - then is :// otherwise is .com/
	// c->c->c next-state->// prev(c)<- protocol || name
	// / break it off
	// ?
	// x=y
		// number
		// string (number)
		// array[string]

	// std::string proto;
	// std::string host;
	// std::string path;
	// std::string query;
	// std::string buf;
	//std::set<char> seen; // perceptron, 2nd sight? cause "already seen" in arg???
	// ^ maybe "thinking" "recalling" "reading" "interpreting at a 'fundamental' level" rather than 2nd sight...
		// so you can either learn/build how to see something you've never seen before...stumble
	// maybe just store correlate info instead ^
	//	which may just be the code as well...

	// ok so if set(char) is the correlates - which order do we operate in?
	// when do we do what? (which is a nice workaround of when do we not do something/say something is invalid, lets just pick the good stuff!)
	// identification != validation with formal parameters of a fixed signal-response system / formal agreement
	// https://news.google.com/search?q=cisco&hl=en-US&gl=US"
	// ordering
	// you store correlates - store chars count indices (position - order)
	// postulate about those correlates (search/transpose) through the store/memory
		// TODO generalize code for ascii charset
	// PATHWISE MAP FOR CORRELATE SEARCH NOT RECURSIVE OMG LOL - GRAPH (BFS/DFS/HASH) ;)
	//struct perceptron {
		//int count; // useful for different paths (if/else) in the phase (the context (loop/step/time...)) of a sequence
		//int indices[]; // the correlates themselves...?...when searched and combined with ... decisions?
			// so how to access them by groups (maybe of 1!...) quickly...
			// ... submit a request of the indices/order your interested in with a key to access it?
				// key could be hash to the values themselves or some representation thereof
				// or just a string or something
		// the indices matched and the order they appeared in keyed by a name TODO key by char + count + order? or something like that
		//std::map<std::string, std::vector<int>> correlates; // the interesting thing here is this may only need to be an arg
		// since we can discard the ints themselves after we've identified them
			// so nature holds the key
				// since stuff represented by the interaction of constituents (elements) is repeatable..... WTF
					// shape is not enough -- makeup is needed?
					// what does it even mean to know something? wholly?
			// unless we want to say ok - well what were they?
				// because if they were this, this, this
					// in this order (order implied?????????????????)
				// then I'm going to do this otherwise I'm going to do that
			// so it seems like for the grouped vector of int indices implicitly ordered...
			// ... we want to test them for existence and order
			// ... the order will likely be derived from a loop - examining another list of integers
				// is there a cross wise structure?
			// .. so a set should work if there's not overlapping indices / dimensions / spaces
		// but we don't access correlates by name/string
		// .. we access them by code! we want code to be our specification not a key/if/else/B.L. layer
		// ... ... grammar free language ;) is a language applied correctly ;) ;) I interpret this - this way - but with these capabilities - the grammar is the processor hardware / sensors
		// so what do we have available to us?
			// the character of interest
			// our (I know) business logic rules asking/querying about correlates
			// so how do we want to identify correlates?
			// I guess the idea of hashing is representation which I'm revisiting
	//};

	// theres only so many characters of interest to determine what the text I've seent "is" host? port?

	// std::map<char, perceptron> seent;

	// i wanna know what ive seent and I dont want to use a list of perceptron i want to o(1) hash jump...
	// ... but that is a recursive compile time structure?
	// could use pointers but then...can you alloc on the stack?

	// warning: not to spec, expects only - protocol, host, path, optional query, optional fragment
	// protocol is: at start, all chars before '://' - (before host? which is '/' CAREFUL - POSITION MATTERS NOT JUST PATTERNS - SPEC NOT FULLY KNOWN - before we start matching things like '/' without ':')
	// host is: after protocol, all chars before '/'
	// path is: after host, all chars before '?'
	// query is: after path, all chars before '#'
	// fragment is: after query, all chars before '\0'

	// ** store it in the searchable form because I've already experienced what its like to work with it
		// and store it according to that experience???
	// and that knowledge is incepted here as DNA
	// so all we need is mixology

	// we read a char
	// then ask -
		// is protocol identified? "://"
			// substr(0, elementIndexAtEndOfProtocolIdentifier("://")) is protocol
		// is host identified? substr(elementIndexAtEndOfProtocolIdentifier("://"), elementIndexAtHostIdentifierAfterProtocol('/'))
			// parallel algorithms - all kernels need to look for start/end identifiers and supply them to a general keybox for future iterations
	
	// protocol
	//	first :, followed by: /, followed by: /
		// charcode/char + count + other char + other char count + other char 2 + other char 2 count
			// has char, associated with count, count is order encoded when accessed in an orderly fashion
	// std:set<char> charset {
	// 	':', '/', '?', '#'
	// };
	// std::set<char>::iterator charsetiter;

	// std::unordered_map<char, size_t> charset {
	// 	{ ':', 0 }, { '/', 0 }, { '?', 0 }, { '#', 0 }
	// };
	// std::unordered_map<char, size_t>::iterator charsetiter;

	// can we have a *char that is a window into a real char buffer?
	// we don't do something in programming until we've identified some data in some order...
	// things are "unknown" until then

	// only useful with windowed string/*char since we have to copy out to copy down (pass as arg) anyways...
		// unless we inherit from string, override ctor, [], and cast back to string for arg
			// ok so c++ tackled form is function via inheritance - hiding impl via cast type really is impl some other way but interface remains the same.... pretty cool - wish it was implemented/expressable more clearly/effectively
	// struct substr {
	// 	size_t start;
	// 	size_t len;
	// };
	// struct substr identifier;

	// struct substr protocol;
	// struct substr host;
	// struct substr path;
	// struct substr query;
	// struct substr fragment;

	// warning: does not handle case where chars below may be valid chars for segment values (strtok values)
	// charset?

	//std::unordered_map<char, size_t>::iterator charCountIter;

	// perceptron?
	// std::unordered_map<char, std::function<void(
	// 	std::unordered_map<char, size_t>&,
	// 	WebPageUrl&,
	// 	std::string*&
	// )>> identifyUrlSegment { {
	// 	'/', [&charCount, &webPageUrl, &urlSegment]() {
	// 		if (charCount[':'] == 1 && charCount['/'] == 2) {
	// 			webPageUrl.protocol = *urlSegment;
	// 			urlSegment = &webPageUrl.host;
	// 		} else if (charCount['/'] > 2) {
	// 			webPageUrl.host = *urlSegment;
	// 			urlSegment = &webPageUrl.path;
	// 		}
	// 	}}, {
	// 		'?', [&charCount, &webPageUrl, &urlSegment]() {
	// 			webPageUrl.path = *urlSegment;
	// 			urlSegment = &webPageUrl.query;
	// 		}
	// 	}, {
	// 		'#', [&charCount, &webPageUrl, &urlSegment]() {
	// 			webPageUrl.query = *urlSegment;
	// 			urlSegment = &webPageUrl.fragment;
	// 		}
	// 	}, {
	// 		'\\0', [&charCount, &webPageUrl, &urlSegment]() {
	// 			if (!webPageUrl.path.size()) {
	// 				webPageUrl.path = *urlSegment;
	// 			} else if (!webPageUrl.query.size()) {
	// 				webPageUrl.query = *urlSegment;
	// 			} else if (!webPageUrl.fragment.size()) {
	// 				webPageUrl.fragment = *urlSegment;
	// 			}
	// 		}
	// 	}
	// };

	// identifier -- correlates
	// std::function<void(
	// 	std::unordered_map<char, size_t>&,
	// 	std::unordered_map<char, size_t>::iterator&,
	// 	std::string*&
	// )> appendToUrlSegment = [&charCount, &charCountIter, &urlSegment](const char c) {
	// 	charCountIter = charCount.find(c);
	// 	if (charCountIter == charCount.end()) {
	// 		urlSegment->push_back(c);
	// 	} else {
	// 		*charCountIter++;
	// 	}
	// };

	/*
	 * Identify url components
	 * warning: not to spec
	 */
	struct WebPageUrl {
		// required
		std::string protocol;
		// required
		std::string host;
		// optional
		std::string path;
		// optional
		std::string query;
		// optional
		std::string fragment;
	};

	struct WebPageUrl webPageUrl;
	std::string *urlComponent = &webPageUrl.protocol;

	std::unordered_map<char, size_t> charCount {
		{ ':', 0 }, { '/', 0 }
	};

	// TODO I dreamed that this code has a bug...
	// https://news.google.com/search?q=cisco&hl=en-US&gl=US
	for (size_t i = 0; i < url.size(); i++) {
		const char c = url[i];

		// see default first
		switch(c) {
		case ':':
			charCount[':']++;
			break;
		case '/':
			charCount['/']++;
			if (charCount[':'] == 1 && charCount['/'] == 2) {
				// matched ://, protocol identified, move pointer to host component
				urlComponent = &webPageUrl.host;
			} else if (charCount['/'] > 2) {
				// matched .tld, host identified, move pointer to path component
				urlComponent = &webPageUrl.path;
			}
			break;
		case '?':
			// matched ?, path identified, move pointer to query component
			urlComponent = &webPageUrl.query;
			break;
		case '#':
			// matched #, query identified, move pointer to fragment component
			urlComponent = &webPageUrl.fragment;
			break;
		default:
			urlComponent->push_back(c);
			break;
		};
	}

	std::cout << "-- WebPageUrl --" << std::endl;
	std::cout << webPageUrl.protocol << std::endl;
	std::cout << webPageUrl.host << std::endl;
	std::cout << webPageUrl.path << std::endl;
	std::cout << webPageUrl.query << std::endl;
	std::cout << webPageUrl.fragment << std::endl;
	std::cout << "-----\n" << std::endl;

	WSADATA wsaData;
	int iResult = WSAStartup(MAKEWORD(2, 2), &wsaData);
	if (iResult != 0) {
		std::cout << "\n\nWSAStartup failed with error: " << iResult << std::endl;
		return;
	}

	struct addrinfo addrHint;
	ZeroMemory(&addrHint, sizeof(addrHint));
	addrHint.ai_family = AF_INET;
	addrHint.ai_socktype = SOCK_STREAM;
	addrHint.ai_protocol = IPPROTO_TCP;

	struct addrinfo *reqAddr = nullptr;
	iResult = getaddrinfo(webPageUrl.host.c_str(), "80", &addrHint, &reqAddr);
	if (iResult != 0) {
		std::cout << "\n\ngetaddrinfo failed with error: " << iResult << std::endl;
		WSACleanup();
		return;
	}

	SOCKET connectSocket = socket(reqAddr->ai_family, reqAddr->ai_socktype, reqAddr->ai_protocol);
	if (connectSocket == INVALID_SOCKET) {
		std::cout << "\n\nsocket failed with an error: " << WSAGetLastError() << std::endl;
		WSACleanup();
		return;
	}

	iResult = connect(connectSocket, reqAddr->ai_addr, (int)reqAddr->ai_addrlen);
	if (iResult == SOCKET_ERROR) {
		closesocket(connectSocket);
		connectSocket = INVALID_SOCKET;
	}

	freeaddrinfo(reqAddr);

	if (connectSocket == INVALID_SOCKET) {
		std::cout << "\n\nunable to connect to the server... " << std::endl;
		WSACleanup();
		return;
	}

	std::ostringstream httpReqTemplate;

	httpReqTemplate
		<< "GET "
		<< "/" << webPageUrl.path
		<< "?" << webPageUrl.query
		<< "HTTP/1.1\r\n"
		<< "HOST: "
		<< webPageUrl.host
		<< "\r\n"
		<< "Accept: text/html\r\n"
		<< "\r\n";

	std::string httpReqText = httpReqTemplate.str();

	std::cout << "-- Http Request --" << std::endl;
	std::cout << httpReqText << std::endl;
	std::cout << "-----\n" << std::endl;

	iResult = send(connectSocket, httpReqText.c_str(), (int)httpReqText.length(), 0);
	if (iResult == SOCKET_ERROR) {
		std::cout << "\n\nsend failed with error: " << iResult << std::endl;
		closesocket(connectSocket);
		WSACleanup();
		return;
	}

	iResult = shutdown(connectSocket, SD_SEND);
	if (iResult == SOCKET_ERROR) {
		std::cout << "\n\nshutdown failed with error: " << iResult << std::endl;
		closesocket(connectSocket);
		WSACleanup();
		return;
	}

	const int DEFAULT_BUFLEN = 512;
	char recvBuf[DEFAULT_BUFLEN];
	int recvBufLen = DEFAULT_BUFLEN;
	std::string respText;
	std::ofstream respLog;

	respLog.open("respLog.txt");

	do {
		iResult = recv(connectSocket, recvBuf, recvBufLen, 0);
		if (iResult > 0) {
			std::cout << "-- Bytes received --" << iResult << std::endl;
			respText += recvBuf;
			respLog << recvBuf << std::endl;
		} else if (iResult == 0) {
			std::cout << "-- Connection closed --" << std::endl;
		} else {
			std::cout << "-- recv failed with error: " << WSAGetLastError() << std::endl;
		}
	} while (iResult > 0);

	respLog.close();
	std::cout << respText << std::endl;

	closesocket(connectSocket);
	WSACleanup();
}