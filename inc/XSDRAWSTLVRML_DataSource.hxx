// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XSDRAWSTLVRML_DataSource_HeaderFile
#define _XSDRAWSTLVRML_DataSource_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_XSDRAWSTLVRML_DataSource.hxx>

#include <Handle_StlMesh_Mesh.hxx>
#include <TColStd_PackedMapOfInteger.hxx>
#include <Handle_TColStd_HArray2OfInteger.hxx>
#include <Handle_TColStd_HArray2OfReal.hxx>
#include <MeshVS_DataSource.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
#include <MeshVS_EntityType.hxx>
#include <Standard_Address.hxx>
#include <Standard_Real.hxx>
class StlMesh_Mesh;
class TColStd_HArray2OfInteger;
class TColStd_HArray2OfReal;
class TColStd_Array1OfReal;
class TColStd_Array1OfInteger;


//! The sample DataSource for working with STLMesh_Mesh
class XSDRAWSTLVRML_DataSource : public MeshVS_DataSource
{

public:

  
  //! Constructor
  Standard_EXPORT XSDRAWSTLVRML_DataSource(const Handle(StlMesh_Mesh)& aMesh);
  
  //! Returns geometry information about node ( if IsElement is False ) or element ( IsElement is True )
  //! by co-ordinates. For element this method must return all its nodes co-ordinates in the strict order: X, Y, Z and
  //! with nodes order is the same as in wire bounding the face or link. NbNodes is number of nodes of element.
  //! It is recommended to return 1 for node. Type is an element type.
  Standard_EXPORT   Standard_Boolean GetGeom (const Standard_Integer ID, const Standard_Boolean IsElement, TColStd_Array1OfReal& Coords, Standard_Integer& NbNodes, MeshVS_EntityType& Type)  const;
  
  //! This method is similar to GetGeom, but returns only element or node type. This method is provided for
  //! a fine performance.
  Standard_EXPORT   Standard_Boolean GetGeomType (const Standard_Integer ID, const Standard_Boolean IsElement, MeshVS_EntityType& Type)  const;
  
  //! This method returns by number an address of any entity which represents element or node data structure.
  Standard_EXPORT   Standard_Address GetAddr (const Standard_Integer ID, const Standard_Boolean IsElement)  const;
  
  //! This method returns information about what node this element consist of.
  Standard_EXPORT virtual   Standard_Boolean GetNodesByElement (const Standard_Integer ID, TColStd_Array1OfInteger& NodeIDs, Standard_Integer& NbNodes)  const;
  
  //! This method returns map of all nodes the object consist of.
  Standard_EXPORT  const  TColStd_PackedMapOfInteger& GetAllNodes()  const;
  
  //! This method returns map of all elements the object consist of.
  Standard_EXPORT  const  TColStd_PackedMapOfInteger& GetAllElements()  const;
  
  //! This method calculates normal of face, which is using for correct reflection presentation.
  //! There is default method, for advance reflection this method can be redefined.
  Standard_EXPORT virtual   Standard_Boolean GetNormal (const Standard_Integer Id, const Standard_Integer Max, Standard_Real& nx, Standard_Real& ny, Standard_Real& nz)  const;




  DEFINE_STANDARD_RTTI(XSDRAWSTLVRML_DataSource)

protected:




private: 


  Handle(StlMesh_Mesh) myMesh;
  TColStd_PackedMapOfInteger myNodes;
  TColStd_PackedMapOfInteger myElements;
  Handle(TColStd_HArray2OfInteger) myElemNodes;
  Handle(TColStd_HArray2OfReal) myNodeCoords;
  Handle(TColStd_HArray2OfReal) myElemNormals;


};







#endif // _XSDRAWSTLVRML_DataSource_HeaderFile
