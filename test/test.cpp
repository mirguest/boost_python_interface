#include "../inc/IInterface.h"
#include "../inc/InterfaceManager.h"
#include "../svc/DllSvc.h"
#include "../alg/ImpInterface.h"
#include <iostream>
using namespace std;

int main(void)
{
  //InterfaceMgr* pMgr = new InterfaceMgr();
  InterfaceManager* aIfaceMgr  = IfaceMgr::ptr();
  //ServiceManager* aSvcMgr = ISvcMgr::ptr();
  //std::cout << "aSvcMgr name: " << aSvcMgr->getName() << std::endl;
  //LibraryMgr* aLibMgr = static_cast<LibraryMgr*>(aIfaceMgr->getInterface("LibMgr"));
  //std::cout << "aLibMgr name: " << aLibMgr->getName() << std::endl;
  //std::cout << "aLibMgr type: " << typeid(aLibMgr) << std::endl;


  //std::cout << rMgr.getName() <<  "'s type is " << rMgr.getType() << std::endl;

  IInterface* pImp0 = aIfaceMgr->create("ImpInterface", "ImpInterface");
  IInterface* pImp1 = aIfaceMgr->getInterface("ImpInterface");
  IInterface* pImp3 = aIfaceMgr->create("Imp2Interface", "Imp2Interface");
  IInterface* pImp4 = aIfaceMgr->getInterface("Imp2Interface");
  //IInterface* pImp5 = aIfaceMgr->getInterface("Imp5Interface");
  
  std::cout << pImp0->getName() << "'s point is " << pImp0 << ", and its type is " << pImp0->getType() << std::endl;
  std::cout << pImp1->getName() << "'s point is " << pImp1 << ", and its type is " << pImp1->getType() << std::endl;
  std::cout << pImp3->getName() << "'s point is " << pImp3 << ", and its type is " << pImp3->getType() << std::endl;
  std::cout << pImp4->getName() << "'s point is " << pImp4 << ", and its type is " << pImp4->getType() << std::endl;

  return 0;
}
