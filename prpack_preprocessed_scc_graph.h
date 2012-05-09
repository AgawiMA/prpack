#ifndef PRPACK_PREPROCESSED_SCC_GRAPH
#define PRPACK_PREPROCESSED_SCC_GRAPH
#include "prpack_preprocessed_graph.h"
#include "prpack_base_graph.h"
#ifdef MATLAB_MEX_FILE
#include "mex.h"
#endif

namespace prpack {

	// Pre-processed graph class
	class prpack_preprocessed_scc_graph : public prpack_preprocessed_graph {
        private:
            // instance variable
            bool from_matlab;
            // method
            void initialize();
		public:
			// instance variables
			int num_es_inside;
			int* heads_inside;
			int* tails_inside;
			int num_es_outside;
			int* heads_outside;
			int* tails_outside;
			int num_comps;
			int* divisions;
			int* encoding;
			int* decoding;
			// constructors
			prpack_preprocessed_scc_graph(prpack_base_graph* bg);
#ifdef MATLAB_MEX_FILE
			prpack_preprocessed_scc_graph(const mxArray* a);
#endif
            // destructor
            ~prpack_preprocessed_scc_graph();
			// method
#ifdef MATLAB_MEX_FILE
			mxArray* to_matlab_array() const;
#endif
	};

};

#endif
