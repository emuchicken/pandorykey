/*
 * ShellEnabler.h
 *
 *  Created on: Aug 27, 2020
 *      Author: dajoho
 */

#ifndef JNI_LIBPANDORY_SHELLENABLER_H_
#define JNI_LIBPANDORY_SHELLENABLER_H_
#include "Process.h"

class ShellEnabler {
protected:
	Process process;
public:
    void enableNetwork();
	void enableTelnet();
	void enableFTP();
	ShellEnabler();
	virtual ~ShellEnabler();

    void enableHTTP();
};

#endif /* JNI_LIBPANDORY_SHELLENABLER_H_ */
