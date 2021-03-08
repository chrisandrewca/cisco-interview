#include "main.h"
#include "webpage.h"
#include "stdio.h"

// NO CROSS PLATFORM GOALS - SEE AUTOMOBILE MAINTENANCE TRACKER

// guided/loaded google/news search
// crawl for documents
// load document
// crawl for contact info
// build profile

// interesting bit is:
// this is the path (I took) which defines who Cisco is
// here I am in an unrelated scrape finding information which may be Cisco related
	// I match by a variety of tools or the path that I took which defines Cisco primarly must
	// be similar/same as the path that I took while looking at the data of the current scrape

// #define SOME_VAR 33

int main(int argc, char *argv[]) {
	printf("Hello, world!\n");
	printf("Is defined: %d\n", WIN32_LEAN_AND_MEAN);

	WebPage webPage;
	webPage.read("https://news.google.com/search?q=cisco&hl=en-US&gl=US&ceid=US:en");

	return 0;
}