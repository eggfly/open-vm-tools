/*
 *  Author: bwilliams
 *  Created: April 6, 2012
 *
 *  Copyright (C) 2012-2016 VMware, Inc.  All rights reserved. -- VMware Confidential
 *
 *  This code was generated by the script "build/dev/codeGen/genCppXml". Please
 *  speak to Brian W. before modifying it by hand.
 *
 */

#ifndef InstallBatchXml_h_
#define InstallBatchXml_h_


#include "Doc/CafInstallRequestDoc/CInstallBatchDoc.h"

#include "Doc/DocXml/CafInstallRequestXml/CafInstallRequestXmlLink.h"
#include "Xml/XmlUtils/CXmlElement.h"

namespace Caf {

	/// Streams the InstallBatch class to/from XML
	namespace InstallBatchXml {

		/// Adds the InstallBatchDoc into the XML.
		void CAFINSTALLREQUESTXML_LINKAGE add(
			const SmartPtrCInstallBatchDoc installBatchDoc,
			const SmartPtrCXmlElement thisXml);

		/// Parses the InstallBatchDoc from the XML.
		SmartPtrCInstallBatchDoc CAFINSTALLREQUESTXML_LINKAGE parse(
			const SmartPtrCXmlElement thisXml);
	}
}

#endif
