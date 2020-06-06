#ifndef __GUNPFACTORY_HPP__
#define __GUNPFACTORY_HPP__


#include "../decorator/gunProduct.hpp"
#include "../decorator/AK_47.hpp"
#include "../decorator/MP_7.hpp"
#include "../decorator/M4.hpp"

#include "../decorator/decorator.hpp"
#include "../decorator/extendedMags.hpp"
#include "../decorator/grip.hpp"
#include "../decorator/silencer.hpp"
#include "../decorator/scope.hpp"


// 1. name of gun is "type_number"
// 2. name of gun's decorator is CamelStyle. 
enum gunType{ ak_47, mp_7, m_4, ExtendedMags, Grip, Silencer, Scope };



/*Factory Class*/
class gunFactory
{
public:
 
 gunProduct* createGun( gunType requirement[], int size )
 {
     gunProduct* gunTemp;
     
     
    for ( int i=0; i<size; i++ ) {

      switch( requirement[i] )
      {
      case ak_47:
       gunTemp=new AK_47(); 
       break;
       
      case mp_7:
       gunTemp=new MP_7(); 
       break;
       
      case m_4:
       gunTemp=new M4(); 
       break;




      case ExtendedMags:
       gunTemp=new extendedMags(gunTemp); 
       break;
       
      case Grip:
       gunTemp=new grip(gunTemp); 
       break;
       
      case Silencer:
       gunTemp=new silencer(gunTemp); 
       break;
       
      case Scope:
       gunTemp=new scope(gunTemp); 
       break;   
       
      default:
       gunTemp = nullptr;
       break;
      }
  
  
 
  }
  
  return gunTemp;
 }
};

#endif