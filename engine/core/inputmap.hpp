#ifndef INPUTMAP_H
#define INPUTMAP_H

#include <QDebug>
#include <map>

namespace quantum_engine :: Input {
	typedef void (*func)();
	namespace Config {
		std::map<int, func> InputMap;

		void LoadConfig( std::string file ); 
		void SaveConfig( std::string file );
	}
	void runInputFunc( int );
}

#endif // INPUTMAP_H