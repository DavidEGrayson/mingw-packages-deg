#include "xmlhelper.h"

// TODO: change this to actually return an error code so users
// know the feature is not supported or something

EXTERN_C HRESULT InitXmlHelper()
{
    return 0;
}

EXTERN_C HRESULT ReleaseXmlWriter()
{
    return 0;
}

EXTERN_C HRESULT SaveXml(LPTSTR szfileName, DWORD dwCreationDisposition)
{
    return 0;
}

EXTERN_C HRESULT XmlAddHostController(
    PSTR hcName,
    PUSBHOSTCONTROLLERINFO hcInfo
    )
{
    return 0;
}

EXTERN_C HRESULT XmlAddRootHub(PSTR rhName, PUSBROOTHUBINFO rhInfo)
{
    return 0;
}

EXTERN_C HRESULT XmlAddExternalHub(PSTR ehName, PUSBEXTERNALHUBINFO ehInfo)
{
    return 0;
}

EXTERN_C HRESULT XmlAddUsbDevice(PSTR devName, PUSBDEVICEINFO deviceInfo)
{
    return 0;
}

EXTERN_C VOID XmlNotifyEndOfNodeList(PVOID pContext)
{
    return 0;
}