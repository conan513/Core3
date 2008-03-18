/*
Copyright (C) 2007 <SWGEmu>

This File is part of Core3.

This program is free software; you can redistribute
it and/or modify it under the terms of the GNU Lesser
General Public License as published by the Free Software
Foundation; either version 2 of the License,
or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
See the GNU Lesser General Public License for
more details.

You should have received a copy of the GNU Lesser General
Public License along with this program; if not, write to
the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

Linking Engine3 statically or dynamically with other modules
is making a combined work based on Engine3.
Thus, the terms and conditions of the GNU Lesser General Public License
cover the whole combination.

In addition, as a special exception, the copyright holders of Engine3
give you permission to combine Engine3 program with free software
programs or libraries that are released under the GNU LGPL and with
code included in the standard release of Core3 under the GNU LGPL
license (or modified versions of such code, with unchanged license).
You may copy and distribute such a system following the terms of the
GNU LGPL for Engine3 and the licenses of the other code concerned,
provided that you include the source code of that other code when
and as the GNU LGPL requires distribution of source code.

Note that people who make modified versions of Engine3 are not obligated
to grant this special exception for their modified versions;
it is their choice whether to do so. The GNU Lesser General Public License
gives permission to release a modified version without this exception;
this exception also makes it possible to release a modified version
which carries forward this exception.
*/

/*
 *	server/zone/objects/ship/ShipObject.h generated by Engine3 IDL compiler 0.51
 */

#ifndef SHIPOBJECT_H_
#define SHIPOBJECT_H_

#include "engine/orb/ObjectRequestBroker.h"

class SceneObject;

class Player;

class IntangibleObject;

class ShipComponent;

#include "../scene/SceneObject.h"

class ShipObject : public SceneObject {
protected:
	ShipObject();
	ShipObject(ORBObjectServant* obj);
	ShipObject(ShipObject& ref);

	virtual ~ShipObject();

public:
	ShipObject* clone();

	void init();

	void sendToOwner(bool inSpace);

	void sendTo(Player* player, bool inSpace, bool doClose = true);

	void setShipBody(IntangibleObject* tsb);

	IntangibleObject* getShipBody();

	void setStfName(const string& Name);

	string& getStfName();

	unicode& getOwnerName();

	int getComponentListSize();

	void calcActiveComponentListSize();

	int getActiveComponentListSize();

	void addComponent(ShipComponent* tsc);

	void removeComponent(int compId);

	ShipComponent* getComponent(int compId);

	unsigned int getNextUnkShip1UpdateCnt();

	unsigned int getNextUnkShip1UpdateCnt2();

	unsigned int getNextEnergyDrainUpdateCnt();

	unsigned int getNextCompMassUpdateCnt();

	unsigned int getNextUnkShip1UpdateCnt3();

	void setTotalMass(float ttm);

	float getShieldChargeRate();

	float getCapacitorChargeRate();

	void setTotalEnergy(float tte);

	float getTotalEnergy();

	float getChassisCur();

	float getChassisMax();

	unsigned int getNextCurArmorUpdateCnt();

	unsigned int getNextMaxArmorUpdateCnt();

	unsigned int getNextCurHitpointsUpdateCnt();

	unsigned int getNextMaxHitpointsUpdateCnt();

	unsigned int getNextUnkShip3UpdateCnt();

	float getFrontshieldMax();

	float getBackshieldMax();

	float getTotalMass();

	float getWeaponCharge();

	unsigned int getNextCrcUpdateCnt();

	float getMaxSpeed();

	float getFrontshieldCur();

	float getBackshieldCur();

protected:
	string _return_getStfName;

	unicode _return_getOwnerName;


	friend class ShipObjectHelper;
};

class ShipObjectImplementation;

class ShipObjectAdapter : public SceneObjectAdapter {
public:
	ShipObjectAdapter(ShipObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, ORBMethodInvocation* inv);

	void init();

	void sendToOwner(bool inSpace);

	void sendTo(Player* player, bool inSpace, bool doClose);

	void setShipBody(IntangibleObject* tsb);

	IntangibleObject* getShipBody();

	void setStfName(const string& Name);

	string& getStfName();

	unicode& getOwnerName();

	int getComponentListSize();

	void calcActiveComponentListSize();

	int getActiveComponentListSize();

	void addComponent(ShipComponent* tsc);

	void removeComponent(int compId);

	ShipComponent* getComponent(int compId);

	unsigned int getNextUnkShip1UpdateCnt();

	unsigned int getNextUnkShip1UpdateCnt2();

	unsigned int getNextEnergyDrainUpdateCnt();

	unsigned int getNextCompMassUpdateCnt();

	unsigned int getNextUnkShip1UpdateCnt3();

	void setTotalMass(float ttm);

	float getShieldChargeRate();

	float getCapacitorChargeRate();

	void setTotalEnergy(float tte);

	float getTotalEnergy();

	float getChassisCur();

	float getChassisMax();

	unsigned int getNextCurArmorUpdateCnt();

	unsigned int getNextMaxArmorUpdateCnt();

	unsigned int getNextCurHitpointsUpdateCnt();

	unsigned int getNextMaxHitpointsUpdateCnt();

	unsigned int getNextUnkShip3UpdateCnt();

	float getFrontshieldMax();

	float getBackshieldMax();

	float getTotalMass();

	float getWeaponCharge();

	unsigned int getNextCrcUpdateCnt();

	float getMaxSpeed();

	float getFrontshieldCur();

	float getBackshieldCur();

protected:
	string _param0_setStfName__string_;
};

class ShipObjectHelper : public ORBClassHelper, public Singleton<ShipObjectHelper> {
public:
	ShipObjectHelper();

	void finalizeHelper();

	ORBObject* instantiateObject();

	ORBObjectAdapter* createAdapter(ORBObjectServant* obj);

	friend class SingletonWrapper<ShipObjectHelper>;
};

#include "../scene/SceneObjectImplementation.h"

class ShipObjectServant : public SceneObjectImplementation {
public:
	ShipObject* _this;

public:
	ShipObjectServant();
	virtual ~ShipObjectServant();

	void _setStub(ORBObjectStub* stub);
	ORBObjectStub* _getStub();

};

#endif /*SHIPOBJECT_H_*/
