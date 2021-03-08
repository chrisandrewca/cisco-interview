	// 1. http request to website
		// ip/domain
		// url
		// headers
		// user agent
		// what happens to webpage where it says "you need js to run this page"...
			// well you get a SPA JS app that is ready to run some fetch requests...
				// running that js, loading that dom, and scraping that page will get you the data
			// so look for fetch requests, interpret them, and receive those payloads, and so on? -- BUT: state vars...
				// either need to represent the full DOM
				// or monkey-patch and hijack the fetch resp's....and so on
					// and fold these in - based on fetch - js - node associativity - huge TBD

	// 2. represent response as html

	// 3. bfs/dfs/hash gathering/search of nodes for analysis
		// how to identify - a company name?
			// a telephone number?
				// that it belongs to that company?
					// tails of associativity  - more of this and less of that, links between nodes, paths
					// 1. regex
					// 2. metrics - position to some anchor
						// How would I rate the relevancy of these metrics? How well they match/find something I expect?
						// How do I verify listing and encourage similar behaviours?
							// Does encouraging similar behaviours even help?
								// Does it simply remove some noise?
								// Does it overfit me?
									// Does it freeze me?
									// Does it lose nuance, subtlety?
								// But worse, does it make me unable to change to see things in new ways that make them highly relevant?