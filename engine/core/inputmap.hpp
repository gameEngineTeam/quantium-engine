#ifndef INPUTMAP_H
#define INPUTMAP_H

#include <QDebug>
#include <QKeyEvent>
#include <map>

namespace quantum_engine :: Input {
	typedef void (*func)(QKeyEvent *);
	namespace Config {
		std::map<int, std::string> InputFuncMap;
		std::map<std::string, func> InputFuncPointMap;

		void LoadConfig( std::string file ); 
		void SaveConfig( std::string file );
	}
	void runInputFunc( std::string s = "none" );
}

#endif // INPUTMAP_H