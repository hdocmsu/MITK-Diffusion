/*===================================================================

The Medical Imaging Interaction Toolkit (MITK)

Copyright (c) German Cancer Research Center.

All rights reserved.

This software is distributed WITHOUT ANY WARRANTY; without
even the implied warranty of MERCHANTABILITY or FITNESS FOR
A PARTICULAR PURPOSE.

See LICENSE.txt or http://www.mitk.org for details.

===================================================================*/

#ifndef __mitkConnectomicsNetworkReader_h
#define __mitkConnectomicsNetworkReader_h

#include "mitkCommon.h"
#include <mitkAbstractFileReader.h>
#include <mitkBaseData.h>
#include <mitkMimeType.h>
#include "mitkConnectomicsNetwork.h"

namespace mitk
{

  /** \brief The reader for connectomics network files (.cnf)
  */

  class ConnectomicsNetworkReader : public mitk::AbstractFileReader
  {
  public:

    typedef mitk::ConnectomicsNetwork OutputType;

    ConnectomicsNetworkReader(const ConnectomicsNetworkReader& other);
    ConnectomicsNetworkReader();
    ~ConnectomicsNetworkReader() override;

    using AbstractFileReader::DoRead;
    std::vector<itk::SmartPointer<BaseData> > DoRead() override;

  private:
    ConnectomicsNetworkReader* Clone() const override;

    us::ServiceRegistration<mitk::IFileReader> m_ServiceReg;
  };

} //namespace MITK

#endif // __mitkConnectomicsNetworkReader_h
