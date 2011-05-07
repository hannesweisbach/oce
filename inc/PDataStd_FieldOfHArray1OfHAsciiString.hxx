// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PDataStd_FieldOfHArray1OfHAsciiString_HeaderFile
#define _PDataStd_FieldOfHArray1OfHAsciiString_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _DBC_BaseArray_HeaderFile
#include <DBC_BaseArray.hxx>
#endif
#ifndef _Handle_PCollection_HAsciiString_HeaderFile
#include <Handle_PCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_PDataStd_VArrayNodeOfFieldOfHArray1OfHAsciiString_HeaderFile
#include <Handle_PDataStd_VArrayNodeOfFieldOfHArray1OfHAsciiString.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif
class Standard_NegativeValue;
class Standard_OutOfRange;
class Standard_DimensionMismatch;
class Standard_NullObject;
class PCollection_HAsciiString;
class PDataStd_VArrayNodeOfFieldOfHArray1OfHAsciiString;
class PDataStd_VArrayTNodeOfFieldOfHArray1OfHAsciiString;



Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(PDataStd_FieldOfHArray1OfHAsciiString);


class PDataStd_FieldOfHArray1OfHAsciiString  : public DBC_BaseArray {

public:
  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   PDataStd_FieldOfHArray1OfHAsciiString();
  
  Standard_EXPORT   PDataStd_FieldOfHArray1OfHAsciiString(const Standard_Integer Size);
  
  Standard_EXPORT   PDataStd_FieldOfHArray1OfHAsciiString(const PDataStd_FieldOfHArray1OfHAsciiString& Varray);
  
  Standard_EXPORT     void Resize(const Standard_Integer Size) ;
  
  Standard_EXPORT     void Assign(const PDataStd_FieldOfHArray1OfHAsciiString& Other) ;
    void operator =(const PDataStd_FieldOfHArray1OfHAsciiString& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(PCollection_HAsciiString)& Value) ;
  
  Standard_EXPORT     Handle_PCollection_HAsciiString& Value(const Standard_Integer Index) const;
    Handle_PCollection_HAsciiString& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void Destroy() ;
~PDataStd_FieldOfHArray1OfHAsciiString()
{
  Destroy();
}



protected:




private: 

#ifdef CSFDB
// DBC_VArray : field
//
#endif



};





// other Inline functions and methods (like "C++: function call" methods)


#endif