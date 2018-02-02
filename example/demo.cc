#include <string>
#include <iostream>

#include "sling/frame/serialization.h"
#include "sling/frame/store.h"
#include "sling/nlp/document/document-tokenizer.h"
#include "sling/nlp/parser/parser.h"

int
main(int argc, char** argv)
{
	// Load parser model.
	sling::Store commons;
	sling::nlp::Parser parser;
	parser.Load(&commons, "/Users/diskzero/inprogress/cogmachines/sling/example/sempar.flow");
	commons.Freeze();

	// Create document tokenizer.
	sling::nlp::DocumentTokenizer tokenizer;
	
	// Create frame store for document.
	sling::Store store(&commons);
	sling::nlp::Document document(&store);
	
	// Tokenize text.
	string text = "John hit the ball with a bat.";
	tokenizer.Tokenize(&document, text);
	
	// Parse document.
	parser.Parse(&document);
	document.Update();
	
	// Output document annotations.
	std::cout << sling::ToText(document.top(), 2);

	return 0;
}
