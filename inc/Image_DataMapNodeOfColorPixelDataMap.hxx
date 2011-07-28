// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Image_DataMapNodeOfColorPixelDataMap_HeaderFile
#define _Image_DataMapNodeOfColorPixelDataMap_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Image_DataMapNodeOfColorPixelDataMap_HeaderFile
#include <Handle_Image_DataMapNodeOfColorPixelDataMap.hxx>
#endif

#ifndef _Aspect_ColorPixel_HeaderFile
#include <Aspect_ColorPixel.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class Aspect_ColorPixel;
class Image_ColorPixelMapHasher;
class Image_ColorPixelDataMap;
class Image_DataMapIteratorOfColorPixelDataMap;



class Image_DataMapNodeOfColorPixelDataMap : public TCollection_MapNode {

public:

  
      Image_DataMapNodeOfColorPixelDataMap(const Aspect_ColorPixel& K,const Standard_Integer& I,const TCollection_MapNodePtr& n);
  
        Aspect_ColorPixel& Key() const;
  
        Standard_Integer& Value() const;




  DEFINE_STANDARD_RTTI(Image_DataMapNodeOfColorPixelDataMap)

protected:




private: 


Aspect_ColorPixel myKey;
Standard_Integer myValue;


};

#define TheKey Aspect_ColorPixel
#define TheKey_hxx <Aspect_ColorPixel.hxx>
#define TheItem Standard_Integer
#define TheItem_hxx <Standard_Integer.hxx>
#define Hasher Image_ColorPixelMapHasher
#define Hasher_hxx <Image_ColorPixelMapHasher.hxx>
#define TCollection_DataMapNode Image_DataMapNodeOfColorPixelDataMap
#define TCollection_DataMapNode_hxx <Image_DataMapNodeOfColorPixelDataMap.hxx>
#define TCollection_DataMapIterator Image_DataMapIteratorOfColorPixelDataMap
#define TCollection_DataMapIterator_hxx <Image_DataMapIteratorOfColorPixelDataMap.hxx>
#define Handle_TCollection_DataMapNode Handle_Image_DataMapNodeOfColorPixelDataMap
#define TCollection_DataMapNode_Type_() Image_DataMapNodeOfColorPixelDataMap_Type_()
#define TCollection_DataMap Image_ColorPixelDataMap
#define TCollection_DataMap_hxx <Image_ColorPixelDataMap.hxx>

#include <TCollection_DataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_DataMapNode
#undef TCollection_DataMapNode_hxx
#undef TCollection_DataMapIterator
#undef TCollection_DataMapIterator_hxx
#undef Handle_TCollection_DataMapNode
#undef TCollection_DataMapNode_Type_
#undef TCollection_DataMap
#undef TCollection_DataMap_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif